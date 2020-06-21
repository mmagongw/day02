/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:43:19 by mmagongw          #+#    #+#             */
/*   Updated: 2020/06/21 10:55:56 by mmagongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void    ft_print_alphabet(void)
{
    char ch;

    ch = 'a';
    while (ch <= 'z')
    {
        ft_putchar(ch);
        ch++;
    }
}

int     main()
{
    ft_print_alphabet();
    return (0);
}
