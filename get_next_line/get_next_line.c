#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
int		t_substr_len(char const *s, unsigned int start, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memset(void *str, int c, size_t n);

char	*get_next_line(int fd)
{
	int				i;
	static char		*buf;
	char			*new_buf;
	char			*line;

	if (!buf)
	{
		buf = malloc(BUFFER_SIZE + 1 * sizeof(char));
		buf[BUFFER_SIZE] = '\0';
	}
	read(fd, buf, BUFFER_SIZE);
	//printf("Buf is : %s\n", buf);
	i = 0;
	while(buf[i])
	{
		if (buf[i] == '\n')
		{
			//printf("I index is %d\n", i);
			line = ft_substr(buf, 0, i);
			new_buf = ft_substr(buf, i+1, ft_strlen(buf));
			//printf("New buf is : %s\n", new_buf);
			free(buf);
			buf = new_buf;
			return (line);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	int			fd;

	fd = open("testfile.txt", O_RDONLY);
	if (fd == -1)
		return (0);
	printf("Line content is : %s\n", get_next_line(fd));
	printf("Line content is : %s\n", get_next_line(fd));
	printf("Line content is : %s\n", get_next_line(fd));
	printf("Line content is : %s\n", get_next_line(fd));
	printf("Line content is : %s\n", get_next_line(fd));
	printf("Line content is : %s\n", get_next_line(fd));
	printf("Line content is : %s\n", get_next_line(fd));
	printf("Line content is : %s\n", get_next_line(fd));
	printf("Line content is : %s\n", get_next_line(fd));
	close(fd);
	return (0);
}
