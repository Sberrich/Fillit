/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberrich <sberrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 01:03:17 by yait-el-          #+#    #+#             */
/*   Updated: 2019/07/23 16:31:57 by sberrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_print_solution(char **str)
{
	int i;

	i = 0;
	while (str[i] != NULL)
	{
		ft_putstr(str[i]);
		ft_putstr("\n");
		i++;
	}
}
