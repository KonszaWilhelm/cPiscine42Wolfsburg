 /* ************************************************************************** */
 /*                                                                            */
 /*                                                        :::      ::::::::   */
 /*   ft_print_program_name.c                            :+:      :+:    :+:   */
 /*                                                    +:+ +:+         +:+     */
 /*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
 /*                                                +#+#+#+#+#+   +#+           */
 /*   Created: 2021/02/25 16:55:08 by wprisaca          #+#    #+#             */
 /*   Updated: 2021/02/25 18:40:33 by wprisaca         ###   ########.fr       */
 /*                                                                            */
 /* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
    if (argc == 1)
    {
        while (*argv[0])
        {
            write(1, argv[0], 1);
            argv[0]++;
        }
        write(1, "\n", 1);
    }
}
