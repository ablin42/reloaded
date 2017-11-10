#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	
	arr = (int*)malloc(sizeof(*arr)) * (max - min + 1);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return(arr);

}
