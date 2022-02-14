/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:31:21 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/09 15:31:44 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *c)
{
 int i;

 i = 0;
 while (str[i] != '\0')
 {
  i++;
 }
 return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
 int i;
 int j;

 j = 0;
 i = ft_strlen(dest);
 if (size - ft_strlen(dest) - 1 > 0)
 {
  while (i < size - ft_strlen(dest) && src[j] != '\0')
  {
   dest[i] = src[j];
   i++;
   j++;
  }
  dest[i] = '\0';
 }
 return (ft_strlen(src) + ft_strlen(dest));
}