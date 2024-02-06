/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 01:18:04 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/21 14:47:39 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int fd = open("./tst.txt", O_WRONLY);
// 	ft_putchar_fd('a', fd);
//  fd contains -1 bcs open does not find the tst.txt file
// 	printf("%d\n", fd);
// 	fd = open("file.txt", O_RDWR | O_CREAT);
//  printf("%d", fd);
// 	ft_putchar_fd('B', fd);
	// ft_putchar_fd('A', 0);
// }
/*
-The kernel facilitates Input/Output (I/O)
operations for reading from and writing to
files. It manages data transfers between
storage devices and the computer's memory,
ensuring that data is stored and retrieved
accurately.
-Metadata Management: Metadata includes
information about files and directories,
such as file size, creation date,
modification date, and file type.
The kernel maintains and updates
this metadata, allowing users and
applications to obtain detailed
information about stored data.
-File System Utilities: The kernel
may include utilities or system calls
that enable users and applications to
perform file-related operations, such
as creating, deleting, moving, or renaming
files and directories
-Error Handling: The kernel is responsible
for handling errors related to file operations,
such as disk errors, full storage, or unauthorized
access attempts. Error handling ensures the
reliability and stability of the file system.


FD 
-0 for the input
-1 for the output
-2 for the error
mli chi programme try to open a file the OS's kernel
assign a file descriptor to that file
*/