/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 22:50:33 by lbenamer          #+#    #+#             */
/*   Updated: 2017/07/14 22:50:39 by lbenamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"
#include "../vizu/vizu.h"

t_pcs		*place_max(t_pcs *pcs)
{
	while (pcs->next)
		pcs = pcs->next;
	return (pcs);
}

void		free_pcs(t_pcs *pcs)
{
	free(pcs->r);
	free(pcs);
}

int			checkops(int option)
{
	return (option & g_ops.all);
}

void		i_color(void)
{
	init_pair(1, COLOR_GREEN, COLOR_BLACK);
	init_pair(2, COLOR_BLUE, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	init_pair(4, COLOR_YELLOW, COLOR_BLACK);
}

int			nb_process(t_dt *dt)
{
	int ret;

	ret = 0;
	if (dt)
		while (dt && ++ret)
			dt = dt->next;
	return (ret);
}
