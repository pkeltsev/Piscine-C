/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 08:22:37 by qhusler           #+#    #+#             */
/*   Updated: 2015/10/17 08:46:41 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	dest[0] = src[0];
	while (src && src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}