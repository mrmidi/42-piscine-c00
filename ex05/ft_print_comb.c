/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:46:30 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/08 17:46:30 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_putcomb(int i, int j, int k)
{
	char	str[6];

	str[0] = '0' + i;
	str[1] = '0' + j;
	str[2] = '0' + k;
	str[3] = ',';
	str[4] = ' ';
	str[5] = '\0';
	if ((i == 7) && (j == 8) && (k == 9))
	{
		str[3] = '\0';
	}
	ft_putstr(str);
}

void	ft_while(int i, int j)
{
	int	k;

	k = 0;
	while (k < 10)
	{
		if (i < j && j < k)
		{
			ft_putcomb(i, j, k);
		}
		k++;
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i < j)
			{
				ft_while(i, j);
			}
			j++;
		}
		i++;
	}
}
