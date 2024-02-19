#include <stdio.h>

int ft_fibo(int index)
{
    if (index > 1)
    {
        return (ft_fibo(index - 1) + ft_fibo(index - 2));
    }
    return (index < 0 ? -1 : index);
}

int main(void)
{
    printf("%i", ft_fibo(7));
}