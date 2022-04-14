/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:58:36 by root              #+#    #+#             */
/*   Updated: 2022/04/14 22:00:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int	nb)
{
		int	result;
		
		result = 1;
		if (nb > 0)
		{
			result *= nb * ft_recursive_factorial(nb - 1);
			nb -= 1;
		}
		if (nb < 0)
			return (0);
		return (result);
}
