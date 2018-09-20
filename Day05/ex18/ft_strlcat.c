/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:44:58 by agissing          #+#    #+#             */
/*   Updated: 2018/09/06 15:47:27 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	t_s;
	unsigned int	t_d;

	i = 0;
	t_d = ft_len(dest);
	t_s = ft_len(src);
	if (size <= t_d)
		return (t_s + size);
	while (t_d + i < size - 1 && src[i])
	{
		dest[t_d + i] = src[i];
		i++;
	}
	dest[t_d + i] = '\0';
	return (t_d + t_s);
}
