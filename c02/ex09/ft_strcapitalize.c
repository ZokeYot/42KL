/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:02:44 by root              #+#    #+#             */
/*   Updated: 2022/04/14 12:22:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int counter;

	counter = 0;
	while(str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			str[counter] += 32;
		counter++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int counter;
	int counter2;

	counter = 0 ;
	counter = 1 ;
	ft_strlowcase(str);
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			if (counter == 1 )
				str[counter] -= 32;
			counter2 = 0 ;
		}
		else if (str[counter] >= '0' && str[counter] <= '9')
			counter2 = 0;
		else 
			counter2 = 1;
		counter++;
	}
	return (str);
}
