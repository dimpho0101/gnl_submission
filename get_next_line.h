#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#include <stdlib.h>
#include "./Libft_42/Source/libft.h"
# define BUFF_SIZE 2
#include <stdio.h>
#include <unistd.h>

int		get_next_line(const int fd, char **line);
#endif
