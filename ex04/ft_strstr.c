/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerasym <agerasym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:52:43 by agerasym          #+#    #+#             */
/*   Updated: 2024/08/13 17:39:33 by agerasym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	figured_out;
	int	calculate;

	figured_out = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[figured_out] != '\0')
	{
		calculate = 0;
		while (str[figured_out + calculate] != '\0'
			&& to_find[calculate] != '\0' && str[figured_out
				+ calculate] == to_find[calculate])
		{
			calculate++;
		}
		if (to_find[calculate] == '\0')
		{
			return (&str[figured_out]);
		}
		figured_out++;
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "piscine";
// 	char	to_find[] = "ok";
// 	char	*result;

// 	result = ft_strstr(str, to_find);
// 	if (result != 0)
// 		printf("found:%s\n", result);
// 	else
// 		printf("nothing\n");
// }
