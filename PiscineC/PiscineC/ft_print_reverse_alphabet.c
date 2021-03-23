/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 20:02:25 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/17 09:49:35 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
    char letter;

    letter = 'z';
    while (letter >= 'a')
    {
        write(1, &letter, 1);
        letter--;
    }
}
