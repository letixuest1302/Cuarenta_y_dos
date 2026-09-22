/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:51:40 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/22 14:51:43 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	int		bytes_read;
	char	buffer[BUF_SIZE];

	if (argc < 2)
		return (ft_putstr_fd("File name missing.\n", 2), 0);
	if (argc > 2)
		return (ft_putstr_fd("Too many arguments.\n", 2), 0);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (ft_putstr_fd("Cannot read file.\n", 2), 0);
	bytes_read = read(fd, buffer, BUF_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUF_SIZE);
	}
	if (bytes_read < 0)
		ft_putstr_fd("Cannot read file.\n", 2);
	close(fd);
	return (0);
}
