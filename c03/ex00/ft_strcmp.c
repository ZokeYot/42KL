/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <zyot@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:24:52 by root              #+#    #+#             */
/*   Updated: 2022/04/14 12:44:23 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strcmp(char *s1, char *s2)
{
	int counter;

	counter = 0;
	while (s1[counter] == s2[counter] && (s1[counter] != '\0' || s2[counter] != '\0'))
	{
	       counter++;
	}
	return (s1[counter] - s2[counter]);
}
