#include "get_next_line.h"
#include <fcntl.h>


int main(int ac, char **av)
{
	int fd = 0;
	char *line;
	int i;
	
//	printf("%s", av[1]);

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		//find_next_line(line);
		while(get_next_line(fd, &line) == 1)
		{
			printf("%s", line);
			printf("\n");
		}
		close(fd);
	}
	return 0;
}
