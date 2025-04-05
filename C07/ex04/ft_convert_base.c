// char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
// {
	
// }

int	ft_baselen(char *str)
{
	int count;
	while (str[count])
		count++;
	return (count);
}

int	ft_basecheck(char *str)
{
	int	i;
	int	j;
	
	i = -1;
	while (str[++i])
	{
		if (str[i] == 43 || str[i] == 45 || str[i] == 32
		 || (str[i] >= 9 && str[i] <= 13))
			return (0);
		j = i;
		while (str[++j])
		{
			if (str[i] == str[j])
				return (0);
		}
	}
	return (1);
}

