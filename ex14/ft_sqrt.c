#include <stdio.h>

int	ft_sqrt(int nb)
	{
		int tmp;
		tmp = nb;

		while (nb < 0 || (nb * nb != tmp))
		{
			nb--;
			if (nb * nb == tmp)
				printf(%d, nb);
				return(nb);
		}
		printf(%d, nb);
		return(0);
	}

int	main()
{
	ft_sqrt(9);
	return(0);
}
