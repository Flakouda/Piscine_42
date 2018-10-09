/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 16:09:00 by florientako       #+#    #+#             */
/*   Updated: 2018/10/09 12:08:59 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char*dest, char *src, unsigned int n);
char			*ft_strstr(char *str, char *to_find);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, int nb);
unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putnbr_base(int nbr, char *base);
int				ft_atoi_base(char *str, char *base);
void			ft_putstr_non_printable(char *str);
void			*ft_prtint_memory(void	*addr, unsigned int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	/*	Test ex00	*/
	
	/*
	printf("Your answer is : %s\n", ft_strcpy(argv[2], argv[1]));
	printf("The good one is : %s\n", strcpy(argv[2], argv[1]));
	*/

	/*	Test ex01	*/

	/*
	printf("Your answer is : %s\n", ft_strncpy(argv[2], argv[1], atoi(argv[3])));
	printf("The good one is : %s\n", strncpy(argv[2], argv[1], atoi(argv[3])));
	*/

	/*	Test ex02	*/

	/*
	printf("Your answer is : %s\n", ft_strstr(argv[1], argv[2]));
	printf("The good one is : %s\n", strstr(argv[1], argv[2]));
	*/

	/*	Test ex03	*/

	/*
	printf("Your answer is : %d\n", ft_strcmp(argv[1], argv[2]));
	printf("The good one is : %d\n", strcmp(argv[1], argv[2]));
	*/

	/*	Test ex04	*/

	/*
	printf("Your answer is : %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("The good one is : %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	*/

	/*	Test ex05	*/

	/*
	printf("%s\n", ft_strupcase(argv[1]));
	*/

	/*	Test ex06	*/

	/*
	printf("%s\n", ft_strlowcase(argv[1]));
	*/
	
	/*	Test ex07	*/

	/*
	printf("%s\n", ft_strcapitalize(argv[1]));
	*/

	/*	Test ex08	*/

	/*
	printf("%d\n", ft_str_is_alpha(argv[1]));
	*/

	/*	Test ex09	*/

	/*
	printf("%d\n", ft_str_is_numeric(argv[1]));
	*/

	/*	Test ex10	*/

	/*
	printf("%d\n", ft_str_is_lowercase(argv[1]));
	*/

	/*	Test ex11	*/

	/*
	printf("%d\n", ft_str_is_uppercase(argv[1]));
	*/

	/*	Test ex12	*/

	/*
	printf("%d\n", ft_str_is_printable(argv[1]));
	*/

	/*	Test ex13	*/

	/*
	const char	src1[10] = "abc";
	char		dest1[10] = "123";
	char		src[10] = "abc";
	char		dest[10] = "123";

	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest1, src1));
	*/

	/*	Test ex14	*/

	/*
	const char	src1[10] = "abc";
	char		dest1[10] = "123";
	char		src[10] = "abc";
	char		dest[10] = "123";

	printf("%s\n", ft_strncat(dest, src, atoi(argv[1])));
	printf("%s\n", strncat(dest1, src1, atoi(argv[1])));
	*/

	/*	Test ex15	*/

	/*
	size_t			n;
	const char		src1[10] = "abc";
	char			dest1[10] = "123";

	unsigned int	nb;
	char			src[10] = "abc";
	char			dest[10] = "123";

	n = 2;
	nb = 2;
	printf("%d\n", ft_strlcat(dest, src, nb));
	printf("%d\n", strlcat(dest1, src1, n));
	*/

	/*	Test ex16	*/

	/*
	size_t			n;
	const char		src1[10] = "abc";
	char			dest1[10] = "123";

	unsigned int	nb;
	char			src[10] = "abc";
	char			dest[10] = "123";

	n = 2;
	nb = 2;
	printf("%d\n", ft_strlcpy(dest, src, nb));
	printf("%d\n", strlcpy(dest1, src1, n));
	*/

	/*	Test ex17	*/

	/*
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	*/

	/*	Test ex17	*/

	/*
	ft_atoi_base(atoi(argv[1]), argv[2]);
	*/

	return (0);
}

