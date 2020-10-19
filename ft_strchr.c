/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 17:32:32 by gbroccol          #+#    #+#             */
/*   Updated: 2020/05/09 18:42:47 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int n)
{
	while (*s != (char)n && *s != '\0')
		s++;
	if (*s == (char)n)
		return ((char *)s);
	return (NULL);
}
