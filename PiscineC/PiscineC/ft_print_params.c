/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:41:11 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/25 18:52:51 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            while (*argv[i])
            {
                write(1, argv[i], 1);
                argv[i]++;
            }
        write(1, "\n", 1);
        i++;
        }
    }
}
