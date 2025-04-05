int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int nbr;

	if (nb < 0 || nb == 0 || nb == 1)
		return (0);
	nbr = 2;
	while (nbr <= nb / 2)
	{
		if (nb % nbr == 0)
			return (0);
		nbr++;
	}
	return (1);
}
