/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 01:18:11 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/14 15:08:19 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (ft_strchr(set, s[start]) && s[start])
		start++;
	end = ft_strlen(s);
	if (end > 0)
	{
		while (ft_strchr(set, s[end - 1]) && start < end)
			end--;
	}
	return (ft_substr(s, start, end - start));
}
/*
int	main(void){
	//char *str = "abbabhaabbmmjookmom";
	char *str1 = "____hello, worold_,,,,";
	char *set1 = "_, ";
	ft_strtrim(str1, set1);
	printf("str1 = ____hello, worold_,,,,  && set1 =  "_,
		"%s\n",ft_strtrim(str1, set1));

	char *str2 = "____,,,,";
	char *set2 = "_, ";
	ft_strtrim(str2, set2);
	printf("%s\n",ft_strtrim(str2, set2));

	char *str3 = "";
	char *set3 = "_, ";
	ft_strtrim(str3, set3);
	printf("%s\n",ft_strtrim(str3, set3));

	char *str4 = NULL;
	char *set4 = "_, ";
	ft_strtrim(str4, set4);
	printf("%s\n",ft_strtrim(str4, set4));

	char *str5 = "test";
	char *set5 = NULL;
	ft_strtrim(str5, set5);
	printf("%s\n",ft_strtrim(str5, set5));

	char *str6 = "";
	char *set6 = "";
	ft_strtrim(str6, set6);
	printf("%s\n",ft_strtrim(str6, set6));
}*/