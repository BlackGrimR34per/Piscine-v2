// char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
// {
	
// }
#include <stdio.h>
#include <unistd.h>
int		ft_baselen(char *str);
int		ft_strchr(char c, char *str);
int		ft_strtonbr(char c, char *str, char *base);
void	ft_putchar(char c);

int ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		nbr;
	
	nbr = 0;
	sign = 1;
	while (*str >= 9 && *str <= 13 || *str == 32)
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while (ft_strchr(*str, base))
	{
		nbr += ft_strtonbr(*str, str, base);
		str++;
	}
	return (nbr * sign);
}

int	ft_strchr(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

int	ft_strtonbr(char c, char *str, char *base)
{
	int	index;
	int	nb;
	int base_length;
	int	str_length;
	
	index = -1;
	str_length = 0;
	base_length = ft_baselen(base);
	while (str[str_length] && ft_strchr(str[str_length], base))
		str_length++;
	while (base[++index])
		if (c == base[index])
			break ;
	nb = index;
	while (--str_length)
		nb *= base_length;
	return (nb);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	count;
	
	count = ft_baselen(base);
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr >= count)
	{
		printf("yes");
		ft_putnbr_base(nbr / count, base);
		nbr %= count;
	}
	if (nbr < count)
	{
		ft_putchar(base[nbr]);
	}
	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	// ft_atoi_base("", "0123456789ABCDEF");
	// printf("%d\n", ft_atoi_base("ABXCX", "0123456789ABCDEF"));
	ft_putnbr_base(10, "0123456789ABCDEF");
}