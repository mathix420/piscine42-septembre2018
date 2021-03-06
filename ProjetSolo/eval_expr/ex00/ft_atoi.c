/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 10:29:18 by agissing          #+#    #+#             */
/*   Updated: 2018/09/15 10:35:30 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		out;
	int		sign;

	i = 0;
	out = 0;
	sign = 1;
	while (((str[i] >= 8 && str[i] <= 13) || str[i] == ' ') && str[i])
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i])
	{
		sign = (str[i] == '-' ? -1 : 1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		out = out * 10 + str[i] - '0';
		i++;
	}
	return (out * sign);
}
