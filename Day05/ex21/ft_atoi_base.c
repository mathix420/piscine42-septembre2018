/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 10:53:45 by agissing          #+#    #+#             */
/*   Updated: 2018/09/05 20:16:52 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			ft_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int			ft_str_is_alpha_numeric(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		while (str[j])
		{
			if (str[i] == str[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int			ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg;
	int	out;
	int	t_base;

	i = 0;
	neg = 1;
	out = 0;
	t_base = ft_strlen(base);
	if (t_base < 2 || ft_strlen(str) < 0 || !ft_str_is_alpha_numeric(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 8 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		neg *= (str[i++] == '-' ? -1 : 1);
	while (ft_index(str[i], base) != -1)
	{
		out = out * t_base + ft_index(str[i], base);
		i++;
	}
	if (!str[i] || str[i] == '+' || str[i] == '-')
		return (out * neg);
	else
		return (0);
}
