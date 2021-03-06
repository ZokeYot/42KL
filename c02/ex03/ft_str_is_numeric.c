/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:25:38 by root              #+#    #+#             */
/*   Updated: 2022/04/14 11:32:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int counter;

	counter = 0;
	while(str[counter] != '\0')
	{
		if (!(str[counter] >= 48 && str[counter] <= 57))
			return (0);
		counter++;
	}
	return (1);
}
