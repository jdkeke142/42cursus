#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
int		t_substr_len(char const *s, unsigned int start, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	char		*joined_str;

	if (!s1 || !s2)
		return (NULL);
	joined_str = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
			* sizeof(char));
	if (!joined_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joined_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		joined_str[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	joined_str[ft_strlen(s1) + i] = '\0';
	return (joined_str);
}

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
	static char		*str;
	char			*last_str;
	char			*buf;
	size_t			i;
	char			*line;
	int				chars_read;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!str)
	{
		str = ft_strdup("");
		buf = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		/* REPEATED PART OF CODE BEGINNING */
		chars_read = read(fd, buf, BUFFER_SIZE);
		buf[chars_read] = '\0';
		last_str = str;
		str = ft_strjoin(str, buf);
		free(last_str);
		/* REPEATED PART OF CODE END */
		while (chars_read != 0)
		{
			/* REPEATED PART OF CODE BEGINNING */
			chars_read = read(fd, buf, BUFFER_SIZE);
			buf[chars_read] = '\0';
			last_str = str;
			str = ft_strjoin(str, buf);
			free(last_str);
			/* REPEATED PART OF CODE END */
		}
		free(buf);
	}

	i = 0;
	while(str[i])
	{
		//printf("Char is %c and index is %ld\n", buf[i], i);
		if (str[i] == '\n')
		{
			//printf("Found a jump\n");
			line = ft_substr(str, 0, i + 1);
			last_str = str;
			str = ft_substr(str, i+1, ft_strlen(str)-1);
			free(last_str);
			return (line);
		}
		else if (i == ft_strlen(str) - 1)
		{
			line = ft_substr(str, 0, i+1);
			free(str);
			str = NULL;
			return (line);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
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
}*/
