#include <stdio.h>

int	ft_sqrt(int nb)
	{
		int tmp;
		tmp = nb;

		while (nb > 0)
		{
			if (nb * nb == tmp)
				return(nb);
			nb--;
		}
		return(0);
	}
