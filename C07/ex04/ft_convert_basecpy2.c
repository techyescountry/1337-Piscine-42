/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banguyen <banguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:59:43 by banguyen          #+#    #+#             */
/*   Updated: 2024/02/21 15:20:46 by banguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	i = 0;
	while (i < base_len)
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base_helper(char *str, char *base)
{
	int	result;
	int	base_len;
	int	i;

	result = 0;
	base_len = ft_strlen(base);
	while (*str)
	{
		i = 0;
		while (i < base_len)
		{
			if (*str == base[i])
			{
				result = result * base_len + i;
				break ;
			}
			i++;
		}
		if (i == base_len)
			break ;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (!ft_check_base(base))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = ft_atoi_base_helper(str, base);
	return (result * sign);
}
