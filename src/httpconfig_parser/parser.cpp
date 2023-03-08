/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:02:17 by stales            #+#    #+#             */
/*   Updated: 2023/03/07 17:07:03 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "http_config_parser.hpp"
#include <string.h>
#include <cstring>
#include <iostream>

bool	HttpConfigParser::Parse(const HttpConfig& c)
{
	if (!c.getData() || !c.length()) return (false);
	char	*tmp = const_cast<char*>(c.getData());
	(void)tmp;
	return (true);
}