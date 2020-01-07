/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_len_slan_n.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calpha <calpha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 18:26:29 by calpha            #+#    #+#             */
/*   Updated: 2020/01/07 18:27:10 by calpha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int str_len_slan_n(char *s)
{
	int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '\n')
          break;
       i++;
    }
    return (i);
}
