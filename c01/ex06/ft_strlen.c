/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:23:44 by root              #+#    #+#             */
/*   Updated: 2022/04/14 10:29:20 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int counter;
	int length;
        
	counter = 0;
	while (str[counter] != '\0')
	{       
		length = counter + 1;
		counter++ ;
	}
	return (length);
}
