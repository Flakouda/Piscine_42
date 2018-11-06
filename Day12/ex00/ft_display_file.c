/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:48:49 by florientako       #+#    #+#             */
/*   Updated: 2018/11/06 17:10:16 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	content;

	fd = 0;
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if ((fd = open(argv[1], O_RDONLY)) == - 1)
		write(2, "Problem opening file\n", 21);
	else
		while (read(fd, &content, 1) != 0)
			write(1, &content, 1);
		if (close(fd) == -1)
			write(2, "Problem closing file\n", 21);
}