#include <unistd.h>
#include "ft_putchar.c"
int	ft_lenstr(char *s)
{
	int	len;

	len = 0;
	while (*(s + len))
		len++;
	return (len);
}


void	ft_putstr(char *hello )
{
	int i;
	
	i = 0;
	while (hello[i])
	{
		ft_putchar(hello[i]);
		i++;
	}
	//write(1, hello, ft_lenstr(hello));
	write(1, "\n", 1);
}

int	main(int agc, char **agv)
{
	int	i;

	i = 1;
	while (i < agc)
		ft_putstr(agv[i++]);
	return(0);
}

