/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banguyen <banguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:59:53 by banguyen          #+#    #+#             */
/*   Updated: 2024/02/21 15:22:17 by banguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Function prototypes
int	ft_strlen(char *str);
int	ft_check_base(char *base);
int	ft_atoi_base_helper(char *str, char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_get_result_len(int num, char *base_to)
{
	int	base_to_len;
	int	result_len;
	int	temp;

	base_to_len = ft_strlen(base_to);
	result_len = 0;
	temp = num;
	if (num < 0)
	{
		result_len++;
		temp = -temp;
	}
	while (temp > 0)
	{
		result_len++;
		temp /= base_to_len;
	}
	return (result_len);
}

char	*ft_allocate_result(int result_len)
{
	char	*result;

	result = (char *)malloc((result_len + 1) * sizeof(char));
	result[result_len] = '\0';
	return (result);
}

void	ft_fill_result(int num, int result_len, char *base_to, char *result)
{
	int	base_to_len;
	int	temp;

	base_to_len = ft_strlen(base_to);
	if (num == 0)
	{
		result[0] = base_to[0];
		return ;
	}
	if (num < 0)
	{
		result[0] = '-';
		temp = -num;
	}
	else
		temp = num;
	while (temp > 0)
	{
		result_len--;
		result[result_len] = base_to[temp % base_to_len];
		temp /= base_to_len;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	int		result_len;
	char	*result;

	num = ft_atoi_base(nbr, base_from);
	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	result_len = ft_get_result_len(num, base_to);
	result = ft_allocate_result(result_len);
	ft_fill_result(num, result_len, base_to, result);
	return (result);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void test_ft_check_base()
// {
// 	char base1[] = "01";
// 	char base2[] = "0123456789ABCDEF";
// 	char base3[] = "0123456789abcdef9";
// 	char base4[] = "01234-56789";
// 	char base5[] = "0123456789+";
// 	int check1 = ft_check_base(base1);
// 	int check2 = ft_check_base(base2);
// 	int check3 = ft_check_base(base3);
// 	int check4 = ft_check_base(base4);
// 	int check5 = ft_check_base(base5);

// 	printf("Check base '%s': %d\n", base1, check1);
// 	printf("Check base '%s': %d\n", base2, check2);
// 	printf("Check base '%s': %d\n", base3, check3);
// 	printf("Check base '%s': %d\n", base4, check4);
// 	printf("Check base '%s': %d\n\n", base5, check5);
// }

void test_ft_atoi_base()
{
	char str1[] = "   +--101010";
	char str2[] = "-123";
	char str3[] = "FF";
	char base1[] = "01";
	char base2[] = "0123456789";
	char base3[] = "0123456789ABCDEF";
	
	int num1 = ft_atoi_base(str1, base1);
	int num2 = ft_atoi_base(str2, base2);
	int num3 = ft_atoi_base(str3, base3);
	
	printf("Number '%s' in base '%s': %d\n", str1, base1, num1);
	printf("Number '%s' in base '%s': %d\n", str2, base2, num2);
	printf("Number '%s' in base '%s': %d\n\n", str3, base3, num3);
}

void test_ft_convert_base()
{
	char nbr1[] = "     +---+--101010daww9237289";
	char nbr2[] = "42";
	char nbr3[] = "FF";
	char base_from1[] = "01";
	char base_from2[] = "0123456789";
	char base_from3[] = "0123456789ABCDEF";
	char base_to1[] = "0123456789";
	char base_to2[] = "01";
	char base_to3[] = "0123456789";
	
	char *result1 = ft_convert_base(nbr1, base_from1, base_to1);
	char *result2 = ft_convert_base(nbr2, base_from2, base_to2);
	char *result3 = ft_convert_base(nbr3, base_from3, base_to3);
	
	printf("Convert '%s' from base '%s' to base '%s': %s\n",
	 nbr1, base_from1, base_to1, result1);
	printf("Convert '%s' from base '%s' to base '%s': %s\n",
	 nbr2, base_from2, base_to2, result2);
	printf("Convert '%s' from base '%s' to base '%s': %s\n\n",
	 nbr3, base_from3, base_to3, result3);

	free(result1);
	free(result2);
	free(result3);
}

int main() {
	// test_ft_check_base();
	test_ft_atoi_base();
	test_ft_convert_base();
	return 0;
} */