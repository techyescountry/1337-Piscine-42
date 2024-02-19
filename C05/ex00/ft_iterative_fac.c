/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_fac.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:22:23 by marvin            #+#    #+#             */
/*   Updated: 2024/02/17 21:22:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int ft_iterative_factorial(int nb)
{
    unsigned int result = 1;
    while (nb > 0)
    {
        result *= nb--;
    }
    return (nb < 0 ? 0 : result);
}

// int main(void)
// {
//     printf("%i", ft_iterative_factorial(5));
// }
