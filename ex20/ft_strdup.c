#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
		i++;
	return(i);
}

char	*ft_strdup(char *src)
{
	int i;
	char *dest;

	dest = (char*)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}