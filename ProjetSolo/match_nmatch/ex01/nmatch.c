/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:25:56 by agissing          #+#    #+#             */
/*   Updated: 2018/09/08 18:29:26 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	int		t_1;
	int		t_2;

	if (*s1 != '\0' && *s2 == '*')
	{
		t_1 = nmatch(s1, s2 + 1);
		t_2 = nmatch(s1 + 1, s2);
		return (t_1 + t_2);
	}
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}
