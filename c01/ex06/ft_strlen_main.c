/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:23:44 by root              #+#    #+#             */
/*   Updated: 2022/04/14 10:33:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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

int main()
{ 
	char * something;
	
	something = "Hello World";
	int letterCounter = ft_strlen(something);
	printf("%d" , letterCounter);
}
