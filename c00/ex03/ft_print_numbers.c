/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyot <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:29:07 by zyot              #+#    #+#             */
/*   Updated: 2022/04/13 14:19:14 by zyot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	something;

	something = 0;
	while (something <= 100)
	{
		write(1, &something, 1);
		something++;
	}
}
