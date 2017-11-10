#include <stdio.h>
int	ft_strlen(char *str)
{
	int i;
	i = 0;

	while(str != '\0')
		{
			str++;
			i++;
		}
	return(i);
}

int main() 
{
	printf("%d", ft_strlen("test"));
	return(0); 
}
