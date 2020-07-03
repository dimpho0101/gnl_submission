#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"
#include "get_next_line.h"

static int find_next_line(char* str)
{
	int i;
	char * does_newline_exist;

	i = 0;
	does_newline_exist = "FALSE";
	while (i < BUFF_SIZE)
	{
		 if (str[i] == '\n')
		 {
			return i;
		 }
		 i++;
	}

	return -1;

}

int		get_next_line(int fd, char **line)

{	int len;
	int newline_pstn;
	int temp[2147483647];

	read(fd, *line, BUFF_SIZE);		
	len = ft_strlen(*line);
	newline_pstn = find_next_line(*line);


	//printf("%s", *line);
	//*line = "Hello world";
	//read(fd, *line, BUFF_SIZE);
//	return 1;
}

