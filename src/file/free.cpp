/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam0verfl0w <stales@student.42angouleme.f  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:56:58 by sam0verfl0w       #+#    #+#             */
/*   Updated: 2023/03/05 18:06:06 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"
#include "http_colors.hpp"
#include <iostream> 

void	File::free(void)
{
	if (_data) {
		delete []_data;
		_data = NULL;
	}
}
