/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:39:37 by root              #+#    #+#             */
/*   Updated: 2022/04/14 11:43:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 0 && str[counter] <= 31)
			return (0);
		counter++;
	}
	return (1);
}
