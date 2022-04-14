/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:50:19 by root              #+#    #+#             */
/*   Updated: 2022/04/14 11:06:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int something;
	int something2;
	int swap;

	something = 0;
	something = size - 1;
	while ( something < (size / 2))
	{
		swap = tab [something];
		tab [something] = tab[something2];
		tab [something2] = swap;
		something++;
	}
}
