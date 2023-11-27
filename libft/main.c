/*
int	main(void)
{
	char	*str;

	str = "       -4433444";
	printf("%d", ft_atoi(str));
}
*/

/*int main(void)
{
	int	i;

	char	str[] = "mossab";
	i = 0;
	printf("%s\n", str);
	ft_bzero(str,5);
	for(i = 0; i <= 5; i++)// ma dertch l while hit rah l array 3amer 0 b sbab ft_bzero()
	{
		printf("%d", str[i]);
	}
}
*/

/*
int	main(void)
{
	int		*tab;
	size_t	i;

	tab = (int *)ft_calloc(20, sizeof(int));
	// tab[0] = 'm';
	// tab[1] = 'o';
	// tab[2] = 's';
	i = 0;
	for (i; i < 20; i++)
	{
		printf("%d\n", tab[i]);
	}
}
*/

/*
int	main(void)
{
	printf("%d\n", ft_isalnum('d'));
	printf("%d", ft_isalnum(' '));
}
*/

/*
int	main(void)
{
	printf("%d\n",ft_isalpha('a'));
	printf("%d",ft_isalpha('5'));
}
*/

/*
int	main(void) {
	printf("%d",ft_isascii(128));
}
*/

/*
int	main(void)
{
	printf("%d\n", ft_isdigit('5'));
	printf("%d", ft_isdigit('h'));
}*/
/*
int	main(void)
{
	printf("%d", ft_isprint(127));
}
*/

/*
int	main(void)
{
	// char str[] = "mossab";
	// printf("%s", ft_memchr(str,'d',sizeof(str)));
}
*/

/*
int	main(void)
{
	char	s1[] = "\200";
	char	s2[] = "\0";
	printf("%d\n", ft_memcmp(s1, s2, 4));
}
*/

/*
int	main(void)
{
	int		i;
	int		dest[21];
	int		*testint;
	char	*src1;
	char	dest1[20];
	char	*testchar1;
	char	*src2;
	char	dest2[20];
	char	*testchar2;
	char	*test;

	char	src3[] = "mossabuz";
	char	src4[] = "mossabuz";
	char	src[] = "mossaberrahal";
	i = 0;
	// test for int
	// int src[] = {18822222,-2,3,4,5};
	char src=256;
	testint = ft_memcpy(dest, &src, 20);
	while(i < 5)
	{
		printf("%d \n",testint[i]);
		i++;
	}
	//test for char
	src1 = "mossab";
	testchar1 = ft_memcpy(dest1, src1, 3);
	printf("ft_memcpy ---- > %s\n",testchar1);
	src2 = "mossab";
	testchar2 = memcpy(dest2, src2, 3);
	printf("memcpy ---- > %s\n",testchar2);
	char *testchar3 = ft_memcpy((src3 + 2), src3,
			5);// this will cause an overlap
	printf("ft_memcpy ---- > %s\n",testchar3);
	char *testchar4 = memcpy((src4 + 2), src4, 5);// this will cause an overlap
	printf("memcpy ---- > %s\n",testchar4);
}*/
/*
int	main(void)
{
	test = ft_memmove((src+4), src, 6);
	printf("%s", test);
}
*/

/*
int	main(void)
{
	char	*p;

	char	str[] = "teseeseses";
	p = ft_strchr("fati", '\0');
	if(p == NULL)
		printf("kkk\n");
	printf("%s", p);
}
*/

/*
int	main(void)
{
	char	src[] = "errahal hhahahahah";
	char	dest[20] = "mossab";
	ft_strlcat(dest, src, 0);
	printf("%s", dest);
}
*/

/*
int	main(void)
{
	char	*src;
	char	dest[20];

	src = "test test";
	printf("%zu \n", ft_strlcpy(dest, src, sizeof(dest)));
	printf("%s", dest);
	return (0);
}
*/

/*
int	main(void)
{
	int	i;

	char	str[] = "mossab";
	i = ft_strlen(str);
	printf("%d\n",i);
}
*/

/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "abcbŒ";
	s2 = "abc";
	printf("%d", ft_strncmp(s1, s2, 4));
}
*/

/*
int	main(void)
{
	char	*tofind;
	char	*str;
	char	*str;

	tofind = "a";
	str = "mossa";
	printf("dyali --> %s\n", ft_strnstr(str, tofind, 6));
	printf("dyalhom --> %s", strnstr(str, tofind, 5));
}*/
/*
int	main(void)
{
	str = "moosma";
	printf("%s", ft_strrchr(str, 'm'));
}
*/

/*
int	main(void)
{
	printf("%c", ft_tolower('A'));
	printf("%c", ft_tolower('5'));
}
*/

/*
int	main(void)
{
	printf("%c", ft_toupper('A'));
}
*/

/*
int	main(void)
{
	int		arr[] = {1,2,3};
	int		i;
	size_t	i;
	char	*test;

	char	str[] = "mossab";
	char	str[] = "mossab";
	ft_memset(str, 777, 6); // out of the range 0 - 255
	//The point is that when working with memory-setting functions,
	//you are specifying byte values, and those values are often treated
	//as integer values in the range of 0 to 255.
	printf("%s", str);
	ft_memset(arr, 1, 3);
	for(i = 0 ; i < 3; i++)
		printf("%d\n", arr[i]);
}*/
/*
int	main(void){
	i = 0;
	test = ft_strdup(str);
	while(test[i])
	{
		printf("%c", test[i]);
		i++;
	}
}
*/

/*>>>>>------itoa version 1-------<<<<<

#include "libft.h"

static int	ft_nbr_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	if(n == 0)
		return (1);
	while(n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill(char *allocated, int len, int nbr)
{
	while(nbr != 0)
	{
		allocated[len--] = nbr%10 + 48;
		nbr /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len_of_number;
	char	*allocated;

	len_of_number = ft_nbr_len(n);
	if (n == 0)
		return (ft_strdup("0"));
	else if(n == -2147483648)
		return (ft_strdup("-2147483648"));
	allocated = (char *)malloc(sizeof(char) * (len_of_number + 1));
	if (!allocated)
		return (NULL);
	allocated[len_of_number--] = '\0';
	// if (n == 0)
	//     return (free(allocated), ft_strdup("0"));
	// else if(n == -2147483648)
	//     return (free(allocated), ft_strdup("-2147483648"));
	// else
	if(n < 0)
	{
		allocated[0] = '-';
		n *= -1;
		ft_fill(allocated, len_of_number, n);
	}
	else
		ft_fill(allocated, len_of_number, n);
	return(allocated);
}
*/