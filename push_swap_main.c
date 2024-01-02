/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:57:26 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/02 18:39:08 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortalgorithm(t_list *data)
{
	if (data->lena == 1)
		return ;
	else
	{
		algorithmtwo(data);
	}
}

int	main(int argc, char **argv)
{
	t_list	*data;

	if (argc < 2)
		return (0);
	data = malloc(sizeof(t_list));
	if (errorcontrol1(argv) == 0)
	{
		freestruct(data);
		return (0);
	}
	argstotext(data, argv);
	if (errorcontrol2(data) == 0 || errorcontrol3(data) == 0)
	{
		freestruct(data);
		return (0);
	}
	data->a = malloc(sizeof(int) * data->lena);
	data->b = malloc(sizeof(int) * 0);
	placea(data);
	sortalgorithm(data);
	return (0);
}
