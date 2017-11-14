#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2) 
{         
	int i;

	i = 0;         
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])         
	{                                  
		i++;         
	}         
	return (s1[i] - s2[i]); 
}

int main()
{
	//char arr[4];
	//char arr2[4];
	//arr = "best";
	//arr2 = "test";
	
	printf("MA FONCTION: %d", ft_strcmp("zest", "test"));
	printf("\n");
	printf("LA FONCTION: %d", strcmp("zest", "test"));
	return (0);
}
