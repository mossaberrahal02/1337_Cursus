/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:52:45 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/16 16:53:07 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/push_swap.h"

int main2(int ac, char **av)
{
    char **av2 = args(ac, av);
    check_args(ac, av2);

    ft_freee(av2);
    return 0;
}
int main(int ac, char **av)
{
    main2(ac, av);
    // system("leaks push_swap");
}