/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:37:09 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/06 20:37:09 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
