/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_fac.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:30:41 by marvin            #+#    #+#             */
/*   Updated: 2024/02/17 21:30:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb > 0)
    {
        return (nb * ft_recursive_factorial(nb - 1));
    }

    return (nb < 0 ? 0 : 1);
}

int main(void)
{
    printf("%i", ft_recursive_factorial(5));
}