/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:41:39 by root              #+#    #+#             */
/*   Updated: 2022/04/21 23:19:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb,(power - 1)));
	if (power == 0)
		return (1)l;
	if (power < 0)
		return (0);
	return (result);
}
