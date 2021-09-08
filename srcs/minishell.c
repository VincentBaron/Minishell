/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:42:42 by vbaron            #+#    #+#             */
/*   Updated: 2021/09/08 15:47:34 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/minishell.h"

int main(int ac, char **av, char **env)
{
	t_general mini;

	(void)av;
	(void)env;
	if (ac > 1)
		error(&mini, 1);
	set_vars(&mini);
	while (1)
	{
		if (mini.show_prompt == 1)
			display_prompt(&mini);
		parse(&mini);
	}
	return(0);
}
