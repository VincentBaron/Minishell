/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:38:05 by vbaron            #+#    #+#             */
/*   Updated: 2021/09/08 16:04:20 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

# include <stdio.h>
# include <stdlib.h>
# include "../Libft/libft.h"

# define STDIN 0

typedef struct s_general
{
	int show_prompt;
	char *input;
}	t_general;

// display/
//////////display.c
void display_prompt(t_general *mini);
////////////////////////////////////////////////////////////
// error/
////////error.c
void error(t_general *mini, int e);
///////////////////////////////////////////////////////////
// exec/
///////exec.c
void set_vars(t_general *mini);
/////////////////////////////////////////////////////////////
// parse/
////////parse.c
void parse(t_general *mini);
///////get_next_line.c
int	get_next_line(int fd, char **out);
/////////////////////////////////////////////////////////////

#endif