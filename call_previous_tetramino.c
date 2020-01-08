/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_previous_tetramino.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calpha <calpha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:24:47 by calpha            #+#    #+#             */
/*   Updated: 2020/01/08 16:45:06 by calpha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetramino *call_previous_tetramino(t_tetramino *head)
{
	t_tetramino *tmp_head;
	int i;

	tmp_head = head;
	i = 0;
	while (tmp_head)
	{
		if (tmp_head->logic == -1)
			break;
		tmp_head = tmp_head->next;
		i++;
	}
	tmp_head = head;
	i--;
	while (i)
	{
		tmp_head = tmp_head->next;
		i--;
	}
	return (tmp_head);
}