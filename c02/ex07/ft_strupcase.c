/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:50:43 by root              #+#    #+#             */
/*   Updated: 2022/04/14 12:00:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if(str[counter] >= 'a' && str[counter] <= 'z')
			str[counter] -= 32 ;
		counter++;
	}
	return (str);
}
