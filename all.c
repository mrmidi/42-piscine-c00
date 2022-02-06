#include <stdio.h>
#include <unistd.h>

void    ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;

	while (i < 10)
	{
		//printf("%d", i);
		j = 0;
		while (j < 10)
		{
			if (i < j) {
				k = 0;
				while (k < 10)
				{
					if (i < j && j < k) {
						printf("%d%d%d\n", i, j, k);
					}
					k++;
				}
			}
			j++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}


void    ft_print_alphabet(void)
{
	char c;

	c = 'a';
	while (c < 123)
	{
		write(1, &c, 1);
		c++;
	}
}

void    ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while (c > 96)
	{
		write(1, &c, 1);
		c--;
	}
}

void    ft_print_numbers(void)
{
	char c;

	c = '0';
	while (c <= 57)
	{
		write(1, &c, 1);
		c++;
	}
}

void    ft_is_negative(int n)
{
	char result;

	result = 'P';
	if (n < 0) {
		result = 'N';
	}
	write(1, &result, 1);
}

int main() {
	ft_print_comb();
	//ft_putstr("hello world");
	//ft_print_alphabet();
	//ft_print_reverse_alphabet();
	//ft_print_numbers();
	//ft_is_negative(10);
	//printf("Hello, World!\n");
	return 0;
}

