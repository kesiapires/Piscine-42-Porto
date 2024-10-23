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

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	text[] = "abacateiro";
	char	text2[] = "as23";
	char	text3[] = "";

	printf("%d\n", ft_str_is_alpha(text));
	printf("%d\n", ft_str_is_alpha(text2));
	printf("%d\n", ft_str_is_alpha(text3));
	return (0);
}
