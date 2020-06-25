/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:11:56 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/25 15:44:47 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	i = 0;
	while(i < n && src[i] != '0')
	{
		*(dest + i) = *(src + 1);
		i++;
	}	
	while(i < n)
	   *(dest + i++) = '\0';
return dest;	
}



