/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:39:43 by vbaron            #+#    #+#             */
/*   Updated: 2021/09/08 14:45:30 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void error(t_general *mini, int e)
{
	(void)mini;
	if (e == 1)
		printf("Error\nToo many arguments\n");
	exit(0);
}
