#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main (void)
{
	int result;
	int fd;
	char *buff;
	char **line;
	fd = open("test.txt", O_RDONLY);	

	while(result = read(fd, buff, 8)){
		if(result == -1){
		printf("Faileed");
		}
		printf("%s", buff);
		printf("IN THE LOOP");
	}
	//result = read(fd, buff, 8);
	//printf("%d", result);
	//printf("%s", buff);
	return 0;
}
