int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	des;

	if (!tab || !f)
		return (0);
	if (length <= 1)
		return (1);
	i = 0;
	asc = 1;
	des = 1;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) < 0)
			asc = 0;
		if (f(tab[i], tab[i + 1]) > 0)
			des = 0;
		i++;
	}
	return (asc || des);
}

int	ft_compare(int a, int b)
{
	return (a - b);
}

#include <stdio.h>

int	main(void)
{
	int	tab1[] = {1, 2, 3, 124, 22333};
	int	tab2[] = {2, 1, 364, 365, 368};
	int	tab3[] = {5, 4, 3, 3, 2, 2, 1};

	printf ("%d\n", ft_is_sort(tab1, 5, &ft_compare));
	printf ("%d\n", ft_is_sort(tab2, 5, &ft_compare));
	printf ("%d\n", ft_is_sort(tab3, 7, &ft_compare));
	return (0);
}
