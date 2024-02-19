#include <stdio.h>

int ft_find_next_prime(int nb)
{
    int i = 2;
    if (nb <= 2)
        return (2);
    while (i <= nb / i)
    {
        if (nb % i == 0)
        {
            nb++;
            i = 2;
        }
        else
        {
            i++;
        }
    }
    return (nb);
}

int main(void)
{
    printf("%i", ft_find_next_prime(2114748360));
}