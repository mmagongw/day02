/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:57:54 by mmagongw          #+#    #+#             */
/*   Updated: 2020/06/23 16:11:22 by mmagongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c)


void ft_print_comb(void)

{
    int a, b, c;
    a = b = c = 0;

    while(a < 8) {
       while(b < 9) {
            while(c < 10) {
                if (a != b && b != c && a != c){
                    ft_putchar(a +'0');
                    ft_putchar(b +'0');
                    ft_putchar(c +'0');

                    if (a != 7) {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                }

                c++;
            }
           c = b+1;
           b++;
        }
        b = a+1;
        a++;
    }
}

