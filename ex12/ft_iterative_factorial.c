/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 06:19:17 by ablin             #+#    #+#             */
/*   Updated: 2017/11/13 06:08:13 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int total;

	total = nb;
	nb--;
	if (nb >= 13 || nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
	{
		total = total * nb;
		nb--;
	}
	return (total);
}
