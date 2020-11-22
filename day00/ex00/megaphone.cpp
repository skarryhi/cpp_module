/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarry <skarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:25:03 by skarry            #+#    #+#             */
/*   Updated: 2020/11/20 14:54:31 by skarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int     main(int ac, char *av[]) {
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for (int i = 1; av[i]; ++i) {
            for (int j = 0; av[i][j]; ++j)
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    av[i][j] -= 32;
            std::cout << av[i] << " ";
        }
    std::cout << std::endl;
    return 0;
}
