/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_events.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaiko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:52:27 by omaiko            #+#    #+#             */
/*   Updated: 2018/11/23 15:53:00 by omaiko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <kift.h>

char	*choose_events(void)
{
	system("sh ../scripts/events.script");
	return (ft_strdup("Events near you.\n"));
}
