/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:54:46 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/03 15:55:27 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void		print_content(char *filename)
{
	char	buf;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return ;
	while (read(fd, &buf, 1) > 0)
		write(1, &buf, 1);
	close(fd);
}

int			main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
		print_content(argv[1]);
	return (0);
}
