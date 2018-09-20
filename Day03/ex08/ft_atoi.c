/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 22:37:48 by agissing          #+#    #+#             */
/*   Updated: 2018/08/30 17:54:36 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int	out;
	int	neg;

	i = 0;
	neg = 0;
	out = 0;
	while ((str[i] >= 8 && str[i] <= 16) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		out *= 10;
		out += str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (out * -1);
	else
		return (out);
}
