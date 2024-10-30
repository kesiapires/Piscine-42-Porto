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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i = 0;
	int	len_d = 0;
	unsigned int	j = 0;

	while (dest[len_d] != '\0')
	{
		len_d++;
	}
	while (src[i] != '\0' && j < nb)
	{
		dest[len_d + i] = src[i];
		i++;
		j++;
	}
	dest[len_d + i] = '\0';
	return (dest);
}
int	main(void)
{
	char	text1[] = "i want ";
	char	text2[] = "a puppy";

	printf("%s\n", ft_strncat(text1, text2, 5));
	return (0);
}
