/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:20:06 by florientako       #+#    #+#             */
/*   Updated: 2018/11/06 17:33:06 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int argc, char *argv)
{
	int		fd;
	char	content;

	fd = 0;
	if (argv[0] == '-' || argc == 1)
		fd = 1;
	else if ((fd = open(argv, O_RDONLY)) == - 1)
		write(2, "Problem opening file\n", 21);
	while (read(fd, &content, 1) != 0)
		write(1, &content, 1);
	if (close(fd) == -1)
		write(2, "Problem closing file\n", 21);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc <= 1)
		ft_display_file(argc, argv[0]);
	while (++i < argc)
		ft_display_file(argc, argv[i]);
	return (0);
}