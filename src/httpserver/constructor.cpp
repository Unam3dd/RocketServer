/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:47:54 by stales            #+#    #+#             */
/*   Updated: 2023/03/04 01:26:30 by sam0verfl0w      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "http_server.hpp"
#include "http_utils.hpp"

HttpServer::HttpServer(void): _port(0) {}

HttpServer::HttpServer(const std::string& ip, port_t port)
{
	(ip.empty() || (IS_BAD_IP(ip)) ? _address = "0.0.0.0" : _address = ip);
	_port = port;
}

HttpServer::HttpServer(const HttpServer& h)
{
	if (this == &h) return ;
	*this = h;
}
