/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 14:05:14 by agissing          #+#    #+#             */
/*   Updated: 2018/09/02 13:21:29 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char c, int nb, char *str)
{
	int i;

	i = 1;
	if (c == 's' || c == 'l')
		ft_putchar(str[0]);
	while (i <= nb)
	{
		ft_putchar(str[1]);
		i++;
	}
	if (c == 'e' || c == 'l')
	{
		ft_putchar(str[2]);
		ft_putchar('\n');
	}
}

int		ft_start_nb(int pos)
{
	float out;

	if (pos == 1)
		return (1);
	out = (float)pos * 0.5f + 2.0f;
	return ((int)out * 2);
}

int		ft_taille_base(int nb_etages)
{
	int etage;
	int	ligne;
	int	nb_etoile;
	int	oldnb;

	oldnb = 0;
	etage = 0;
	ligne = 0;
	nb_etoile = 0;
	while (etage < nb_etages)
	{
		while (ligne < etage + 3)
		{
			nb_etoile = ligne * 2 + ft_start_nb(etage + 1) + oldnb;
			ligne++;
		}
		oldnb = nb_etoile;
		ligne = 0;
		etage++;
	}
	return (nb_etoile + 2);
}

void	print_porte(int size, int nb_etoile, int ligne)
{
	int te;
	int	x;
	int	i;

	i = 0;
	x = size % 2 + size - 1;
	te = size + 2 - x;
	if (ligne >= size + 2 - x)
	{
		ft_print('s', (nb_etoile - x) / 2, "/* ");
		while (i < x)
		{
			if (ligne == ((x - 1) / 2) + te && i == x - 2 && size > 4)
				ft_putchar('$');
			else
				ft_putchar('|');
			i++;
		}
		ft_print('e', (nb_etoile - x) / 2, " *\\");
	}
	else
		ft_print('l', nb_etoile, "/*\\");
}

void	sastantua(int size)
{
	int t[5];

	t[0] = 0;
	t[1] = 1;
	t[2] = 0;
	t[3] = ft_taille_base(size);
	t[4] = 0;
	while (t[1] <= size)
	{
		while (t[4] < t[1] + 2)
		{
			t[0] = t[4] * 2 + ft_start_nb(t[1]) + t[2];
			ft_print('c', (t[3] - t[0]) / 2 - 1, "   ");
			if (t[1] == size)
				print_porte(size, t[0], t[4]);
			else
				ft_print('l', t[0], "/*\\");
			t[4]++;
		}
		t[2] = t[0];
		t[4] = 0;
		t[1]++;
	}
}
