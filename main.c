/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <fmanetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 19:47:43 by fmanetti          #+#    #+#             */
/*   Updated: 2020/04/14 13:34:06 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int     main()
{

    double x = 3.376477;


	printf(" --- Return : %d - PRINTF\n", printf("%# -4.4f", x));
	ft_printf(" --- Return : %d - FT_PRINTF\n", ft_printf("%# -4.4f", x));
   // printf(" --- Return : %d\n", printf("%.10f", x));
		// PRINT(" --- Return : %d\n", PRINT("%0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d));
		// PRINT(" --- Return : %d\n", PRINT("%-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d));
		// PRINT(" --- Return : %d\n", PRINT("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d));

    return (0);
}
