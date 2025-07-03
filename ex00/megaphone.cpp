/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:05:52 by yel-bouk          #+#    #+#             */
/*   Updated: 2025/06/30 16:31:49 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>


int	main(int argc, char *argv[]) {
	if(argc > 1)
	{
		int i;
		for(i = 1; i < argc; i++)
		{
			int j;
			for(j = 0; argv[i][j]; j++)
			{
				std::cout << (char)std::toupper(argv[i][j]);
			}
			std::cout << " ";
		}
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	return 0;
}