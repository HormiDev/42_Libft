#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	int ret1, ret2;

	// Test 1: Compare dprintf with ft_dprintf
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ret1 = dprintf(fd, "Hello %s\n", "World");
	close(fd);

	fd = open("output.txt", O_RDONLY);
	ret2 = ft_dprintf(fd, "Hello %s\n", "World");
	close(fd);

	printf("Test 1: dprintf returned %d, ft_dprintf returned %d\n", ret1, ret2);

	// Test 2: Compare dprintf with ft_dprintf using stdout
	ret1 = dprintf(1, "Hello %s\n", "World");
	ret2 = ft_dprintf(1, "Hello %s\n", "World");

	printf("Test 2: dprintf returned %d, ft_dprintf returned %d\n", ret1, ret2);

	return (0);
}