/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:26:06 by drhaouha          #+#    #+#             */
/*   Updated: 2024/05/14 20:04:01 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(int fd, char *str)
{
	while (*str != '\0')
		write(fd, str++, 1);
}

void	ft_display(int fd)
{
	char	buffer[100];
	int		rd;

	rd = -1;
	while (rd != 0)
	{
		rd = read(fd, buffer, 100);
		if (rd == -1)
			break ;
		write(1, buffer, rd);
	}
}

int	main(int ac, char **av)
{
	int		fd;

	if (ac == 1)
		ft_putstr_fd(2, "File name missing.\n");
	else if (ac > 2)
		ft_putstr_fd(2, "Too many arguments.\n");
	if (ac == 1 || ac > 2)
		return (0);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		ft_putstr_fd(2, "Cannot read file.\n");
	ft_display(fd);
	close(fd);
	return (1);
}
