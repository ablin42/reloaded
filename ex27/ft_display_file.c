#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft.h"

#define BUF_SIZE 1


int main(int argc, char **argv)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	if (argc != 2)
	{
		if (argc > 2)
			write(1, "Too many arguments.\n", 20);
		if (argc < 2) 
			write(1, "File name missing.\n", 19);
		return(1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return(1);
	while ((ret = read(fd, buf, BUF_SIZE)) != 0)
	{	
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return (1);
	return(0);
}
