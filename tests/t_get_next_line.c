#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int fd;
	int ret;
	char *line;
	size_t i;

	if (argc <= 1)
		fd = 0;
	else
		fd = open(argv[1], O_RDONLY);

	i = 0;
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		printf("|%s|\n", line);
		free(line);
		i++;
	}

	printf("last ret %d\n", ret);

	close(fd);

	return 0;
}