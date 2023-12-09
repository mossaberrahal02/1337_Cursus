/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:42:50 by merrahal          #+#    #+#             */
/*   Updated: 2023/12/07 18:41:19 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define BUFFER_SIZE  4

char    *get_next_line(int fd)
{
    int readReturn;
    int i = 0;
    int j;
    char *buff = malloc(BUFFER_SIZE + 1);
    char *destbuff;
    
    // while ()
    // {
        readReturn = read(fd, buff, BUFFER_SIZE);
        if (readReturn == 0)
            printf("\nread returns 0\n");
        else if(readReturn == -1)
            printf("read returns -1\n");
        // ft_strjoin(destbuff, buff);
        //free(buff);
        j = 0;
        while (destbuff[j])
            printf("%c", destbuff[j++]);
        printf("\n==li jbedt men l file ==> %s\n", destbuff);
        i++;
    // }
    // buff[BUFFER_SIZE + 1] = '\0';
    return(buff);
}
int main()
{
    int fd = open("./test.txt", O_RDWR);
    get_next_line(fd);
    return 0;
}