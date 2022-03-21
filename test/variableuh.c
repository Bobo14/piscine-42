#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{

	*div = a/b;

	*mod = a%b;


}

int main()
{	
	int a;
	int b;
	a = 35;
	b = 12;
	int *ptrdiv;
	int *ptrmod;
	int sumdiv;
	int summod;

	ptrdiv = &sumdiv;
	ptrmod = &summod;

	ft_div_mod(a, b, ptrdiv, ptrmod);
	printf("%d ----------- %d\n", *ptrdiv, *ptrmod);
	return (0);
}


//88888888888888888888888888888888888
/*
int	main()
{
	int	a;
	int	b;
	int	*nb;

	a = 18;

	*nb = a;
	
	//printf("%d", *nb); //print value pointer origin
	//nb = &a;
	printf("%p\n", nb); //print adress
	//nb = &b;
	printf("%p\n", nb); //print adress
}
*/
// 88888888888888888888888888888888888

/*
void	ft_is_negative(int n)
{
	int i;
	int j;

	i = 'N';
	j = 'P';

	if (i <= j)
		write(1, &i, 1);
	else
		write(1, &j, 1);
}

int	main()
{
	ft_is_negative(-9);
}
*/

// 888888888888888888888888888888

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char i;
	char j;
	i = 'a';
	j = 'z';

	while (i <= j)
	{	
		ft_putchar(i);
		i++;
	}
}

int	 main()
{
	ft_print_alphabet();
}
*/

//888888888888888888888888888

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int	main()
{
	ft_putchar('B');
	ft_putchar('\n');
	return (0);
}*/

//888888888888888888888888888

/*int	main()
{
	write(1, "123456789", 9);
	return (0);
}*/
