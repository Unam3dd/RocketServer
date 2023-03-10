/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam0verfl0w <stales@student.42angouleme.f  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:11:10 by sam0verfl0w       #+#    #+#             */
/*   Updated: 2023/03/05 17:01:56 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"
#include "http_colors.hpp"
#include <iostream>
#include <unistd.h>
#include <cstring>

file_size_t	File::read(void)
{
	if (_fd < 0) {
		std::cerr << FAIL << " Bad file descriptor !" << std::endl;
		return (0);
	}

	_size = lseek(_fd, 0, SEEK_END);
	lseek(_fd, 0, SEEK_SET);

	_data = new (std::nothrow) char[_size+1];
	
	if (!_data) {
		std::cerr << FAIL << " Bad alloc or not enough memory !" << std::endl;
		return (0);
	}

	std::memset(_data, 0, _size+1);
	
	if (::read(_fd, _data, _size) != (ssize_t)_size) {
		std::cerr << FAIL << " During reading file descriptor !" << std::endl;
		return (0);
	}

	this->close();

	std::cout << SUCCESS << " " << this->_filename << " Mapped into heap memory !" << std::endl;

	return (_size);
}
