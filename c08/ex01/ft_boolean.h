/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:10:35 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/17 16:00:30 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#define EVEN(nb) ((nb % 2 == 0) ? 1 : 0)
#include <unistd.h>

typedef int t_bool;
int SUCCESS = 0;
char ODD_MSG[36] = "I have an odd number of arguments.\n";
char EVEN_MSG[37] = "I have an even number of arguments.\n";
int TRUE = 1;
int FALSE = 0;

#endif