/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:26:07 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/25 15:08:08 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
char *ft_strcpy(char *dest, char *src)
{
  int i;
  i=0;
  while(src[i] != '\0')
  {
    dest[i]=src[i];
    i++;
  }

  dest[i] = '\0';
  return (dest);
}
int main(void)
{
    char dest[]="test";
    char src[]="test";
    printf("%s\n",ft_strcpy(dest,src));
    return(0);
}

