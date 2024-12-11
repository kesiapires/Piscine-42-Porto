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

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int 	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	i = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);

}
int	main(void)
{
	printf("%i\n", ft_iterative_power(5,3));
	return (0);
}
