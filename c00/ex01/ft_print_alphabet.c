/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyot <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:28:33 by zyot              #+#    #+#             */
/*   Updated: 2022/04/13 14:10:07 by zyot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	something;

	something = 'a';
	while (something <= 'z')
	{
		write(1, &something, 1);
		something++;
	}
}
