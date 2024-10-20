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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int	main(void)
{
	int	div;
	int	mod;
	int	a;
	int	b;

	a = 27;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("num1: %d num2: %d div: %d mod:%d\n", a, b, div, mod);
	return (0);
}
