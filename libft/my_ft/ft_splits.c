/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:09:26 by adylewsk          #+#    #+#             */
/*   Updated: 2021/06/08 16:57:54 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	int	ft_nbrword(char *str, char *cutter)
{
	int	i;
	int	nb_word;

	i = 0;
	nb_word = 0;
	while (str[i])
	{
		if (!ft_strchr(cutter, str[i])
			&& (ft_strchr(cutter, str[i + 1]) || !str[i + 1]))
			nb_word++;
		i++;
	}
	return (nb_word);
}

static	int	ft_strlenpart(char *str, char *cutter)
{
	int	i;

	i = 0;
	while (str[i] && !ft_strchr(cutter, str[i]))
		i++;
	return (i);
}

static	char	*ft_strduppart(char **src, char *cutter)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = malloc(sizeof(char) * (ft_strlenpart(*src, cutter) + 1));
	if (!cpy)
		return (FALSE);
	while (**src && !ft_strchr(cutter, **src))
	{
		cpy[i] = **src;
		*src += 1;
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}

char	**ft_splits(char const *str, char *cutter)
{
	int		i;
	char	**tab;
	char	*save;

	i = 0;
	save = (char *)str;
	if (!save)
		return (NULL);
	tab = ft_calloc(ft_nbrword(str, cutter) + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	if (save && *save && !ft_strchr(cutter, *save))
		tab[i] = ft_strduppart(&save, cutter);
	if (tab[i] != 0)
		i++;
	while (save && *save && ft_strchr(cutter, *save))
	{
		save++;
		if (*save && !ft_strchr(cutter, *save))
		{
			tab[i] = ft_strduppart(&save, cutter);
			i++;
		}
	}
	return (tab);
}
