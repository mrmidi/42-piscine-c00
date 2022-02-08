/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:40:20 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/08 13:10:05 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nbrhelper(int *nb)
{
	int		result;

	result = 0;
	if (*nb == -2147483648)
	{
		*nb += 1;
		*nb *= -1;
		result = 1;
	}
	else
	{
		*nb *= -1;
	}
	write(1, "-", 1);
	return (result);
}

void	ft_putnbr(int nb)
{
	char	buf[10];
	int		len;
	int		is_intmin;

	len = 0;
	if (nb != 0)
	{
		if (nb < 0)
		is_intmin = ft_nbrhelper(&nb);
		while (nb > 0)
		{
			buf[9 - len] = '0' + (nb % 10);
			nb /= 10;
			len++;
		}
		if (is_intmin)
		buf[9] = '8';
		write(1, buf + 10 - len, len);
	}
	else
	{
		write(1, "0", 1);
	}
}
