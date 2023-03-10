/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:13:50 by stales            #+#    #+#             */
/*   Updated: 2023/03/08 01:41:48 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "http_server.hpp"
#include "http_colors.hpp"
#include <iostream>

/*********************************************************************
*
* @brief    Listening on port
*
* @param	int:	backlog
*
* @return   true or false 
*
*********************************************************************/

bool	HttpServer::Listen(int backlog)
{
	_s.Listen(backlog);
	if (_s.isOnListening()) return (false);
	std::cout << SUCCESS << "http://" << this->_ip << ":" << this->_port << "/ " << std::endl;
	return (true);
}
