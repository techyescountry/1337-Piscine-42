#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power > 0)
    {
        return (nb * ft_recursive_power(nb, power - 1));
    }
    return (power < 0 ? 0 : 1);
}

int main(void)
{
    printf("%i", ft_recursive_power(17, 5));
}