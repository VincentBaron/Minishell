/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:39:15 by vbaron            #+#    #+#             */
/*   Updated: 2021/09/08 16:07:15 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void parse(t_general *mini)
{
	int i;

	i = 0;
	get_next_line(STDIN, &mini->input);
	if (mini->input)
	{
		while (mini->input[i])
		{
			if (mini->input[i] == 10)
				mini->show_prompt = 1;
			i++;
		}
	}
	
}