/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:08:34 by root              #+#    #+#             */
/*   Updated: 2022/04/14 22:00:20 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = nb ;
	if (power == 0)
		return (1);
	if (power < 0 )
		return (0);
	while (power > 1)
	{
		result *= nb ;
		power--;
	}
	return (result);
}
