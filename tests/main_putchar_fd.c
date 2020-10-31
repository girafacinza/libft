#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/uio.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
void ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

void ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

int	main(void)
{
	int fd;
	char buf[11];
	int ret;

	fd = open("file", O_RDWR | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("open() error");
		return (1);
	}
	ft_putendl_fd("Hello world", fd);
	lseek(fd, 0, SEEK_SET);
	while ((ret = read(fd, buf, 5)))
	{
		buf[ret] = '\0';
		ft_putstr_fd(buf, 1);
		write(1, "\n", 1);
	}
	if (close(fd) == -1)
	{
		printf("close() error");
		return (1);
	}
	return (0);
}
