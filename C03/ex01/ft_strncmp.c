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
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i = 0;
	unsigned int	j = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && j < n)
	{
		i++;
		j++;
	}
	return (s1[i] - s2[i]);
}
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%i\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	}
	return (0);
}
