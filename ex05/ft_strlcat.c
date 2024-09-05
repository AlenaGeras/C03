/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerasym <agerasym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:47:36 by agerasym          #+#    #+#             */
/*   Updated: 2024/08/13 18:15:35 by agerasym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char dest[20] = "42";
// 	char src[] = " World";
// 	unsigned int size = 8;
// 	unsigned int result;

// 	result = ft_strlcat(dest, src, size);

// 	printf("%s\n", dest);
// 	printf("%u\n", result);
// }