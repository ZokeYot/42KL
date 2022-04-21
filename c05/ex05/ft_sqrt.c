/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 23:23:08 by root              #+#    #+#             */
/*   Updated: 2022/04/21 23:29:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long index;
	long b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
		return (1);
	index = 2;
	if( b >= 2)
	{
		while(index * index <= b)
		{
			if(index * index == b)
				return index;
			index++;
		
		}
	}
	return (0);		
}
