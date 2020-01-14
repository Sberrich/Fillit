/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sberrich <sberrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 11:58:03 by sberrich          #+#    #+#             */
/*   Updated: 2019/07/24 20:00:41 by sberrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	t_map		*d;
	t_range		range;
	int			fd;

	fd = open(argv[1], O_RDONLY);
	if (!argv[0])
		ft_exit("error");
	if (argc != 2)
		ft_exit("Usage : fillit Source_file");
	if (ft_reader(fd, &range))
	{
		d = solver(&range);
		ft_print_solution(d->map_2d);
		ft_free_map(d);
	}
	else
		ft_putendl("error");
	return (0);
}
