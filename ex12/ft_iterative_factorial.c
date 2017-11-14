/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 06:19:17 by ablin             #+#    #+#             */
/*   Updated: 2017/11/14 06:01:42 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int total;

	total = nb;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb >= 13 || nb < 0)
		return (0);
	nb--;
	while (nb > 1)
	{
		total = total * nb;
		nb--;
	}
	return (total);
}
