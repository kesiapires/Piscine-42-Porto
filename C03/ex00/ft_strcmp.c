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

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	//printf("s1=%s, s2=%s\n", s1, s2);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		 i++;
	}
	//printf("s1=%d, s2=%d\n", s1[i], s2[i]);
	return (s1[i] - s2[i]);
}
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%i\n", ft_strcmp(argv[1], argv[2]));
	}
	return (0);
}

