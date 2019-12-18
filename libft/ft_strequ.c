/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calpha <calpha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 21:08:07 by calpha            #+#    #+#             */
/*   Updated: 2019/10/04 17:09:44 by calpha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		while (*s1 - *s2 == 0)
		{
			if (*s1 == '\0' && *s2 == '\0')
				return (1);
			s1++;
			s2++;
		}
		return (0);
	}
	return (0);
}
