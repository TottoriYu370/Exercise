int	ft_count(char *str)
{
	int	n;
	int	countn;

	n = 0;
	countn = 0;
	while (str[n] != '\0')
	{
		countn++;
		n++;
	}
	return (countn);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	count;
	int	m;
	int	j;
	char	*strtest;

	if (size == 0)
	{
		strtest = malloc (sizeof(char) * 1);
		if (!strtest)
			return (NULL);
		else
		{
			strtest[0] = '\0';
			return (strtest);
		}
	}
	i = 0;
	count = 0;
	while (i < size)
	{
		count = count + ft_count(strs[i]);
		i++;
	}
	count = count + (ft_count(sep) * (size - 1)) + 1;
	strtest = malloc (sizeof(char) * count);
	if (!strtest)
		return (NULL);
	i = 0;
	m = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			strtest[m] = strs[i][j];
			m++;
			j++;
		}
		if (i < (size - 1))
		{
			j = 0;
			while (sep[j] != '\0')
			{
				strtest [m] = sep[j];
				m++;
				j++;
			}
		}
		i++;
	}
	strtest[m] = '\0';
	return (strtest);
}

