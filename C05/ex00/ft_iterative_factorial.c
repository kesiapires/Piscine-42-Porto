/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k-pires  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:53:23 by k-pires           #+#    #+#             */
/*   Updated: 2024/10/18 10:59:31 by k-pires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}

int	main(void)
{
	printf("%i\n", ft_iterative_factorial(5));
	return (0);
}
