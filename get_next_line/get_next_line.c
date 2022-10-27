#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
int		t_substr_len(char const *s, unsigned int start, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);

void	*ft_memset(void *str, int c, size_t n)
{
	char	*dst;
	size_t	i;

	dst = str;
	i = 0;
	while (i < n)
	{
		dst[i] = c;
		i++;
	}
	return (str);
}

void	*ft_calloc(size_t nitems, size_t size)
{
	int		mult;
	void	*allocated;

	mult = nitems * size;
	if (nitems != 0 && mult / nitems != size)
		return (NULL);
	allocated = malloc(nitems * size);
	if (!allocated)
		return (NULL);
	ft_memset(allocated, 0, nitems * size);
	return (allocated);
}

char	*get_next_line(int fd)
{
	size_t			i;
	static char		*buf;
	char			*last_buf;
	char			*line;

	if (!buf)
	{
		buf = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		if (!buf)
			return (NULL);
		read(fd, buf, BUFFER_SIZE);
		buf[BUFFER_SIZE] = '\0';
	}
	i = 0;
	while(buf[i])
	{
		if (buf[i] == '\n')
		{
			line = ft_substr(buf, 0, i+1);
			/*if (i == ft_strlen(buf)-1)
			{
				free(buf);
				buf = NULL;
				return (line);
			}*/
			last_buf = buf;
			buf = ft_substr(buf, i+1, ft_strlen(buf));
			free(last_buf);
			printf("I was %ld\n", i);
			return (line);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("testfile.txt", O_RDONLY);
	if (fd == -1)
		return (0);

	line = get_next_line(fd);
	printf("Line content is : %s", line);
	free(line);

	line = get_next_line(fd);
	printf("Line content is : %s", line);
	free(line);

	line = get_next_line(fd);
	printf("Line content is : %s", line);
	free(line);

		line = get_next_line(fd);
	printf("Line content is : %s", line);
	free(line);

		line = get_next_line(fd);
	printf("Line content is : %s", line);
	free(line);

		line = get_next_line(fd);
	printf("Line content is : %s", line);
	free(line);

		line = get_next_line(fd);
	printf("Line content is : %s", line);
	free(line);
	line = NULL;

	close(fd);
	return (0);
}
