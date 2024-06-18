/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <mpierrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:51:45 by mpierrot          #+#    #+#             */
/*   Updated: 2024/06/18 14:53:13 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *concat(const char *s1, const char *s2, const char sep)
{
	size_t i;
	char *result;

	result = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 2, 1);
	if (!result)
		return (NULL);
	i = 0;
	while (*s1)
		result[i++] = *s1++;
	result[i++] = sep;
	while (*s2)
		result[i++] = *s2++;
	result[i] = '\0';
	return (result);
}