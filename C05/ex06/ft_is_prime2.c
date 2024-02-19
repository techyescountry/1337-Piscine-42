#include <stdio.h>

int ft_is_prime(int nb)
{
    int i = 2;
    if (nb <= 1)
        return (0);
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    printf("%i", ft_is_prime(871949720));
}