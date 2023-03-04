/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructors.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam0verfl0w <stales@student.42angouleme.f  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 02:09:31 by sam0verfl0w       #+#    #+#             */
/*   Updated: 2023/03/04 12:27:55 by sam0verfl0w      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "http_config.hpp"

HttpConfig::HttpConfig(void) {}

HttpConfig::HttpConfig(const std::string& filename)
{
	if (!this->open(filename))
		return ;
}

HttpConfig::HttpConfig(const HttpConfig& c)
{
	if (this == &c) return ;
	*this = c;
}

