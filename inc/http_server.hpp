/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   http_server.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:43:55 by stales            #+#    #+#             */
/*   Updated: 2023/03/04 01:26:46 by sam0verfl0w      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HTTP_SERVER_HPP
#define HTTP_SERVER_HPP

#include "socket.hpp"
#include <ostream>

/*
 * @class HttpServer
 * @Note Orthodox Form
 */
class HttpServer
{
	/*
	 * @brief Public Methods
	 */
	public:
		/*********************************************************************
		* @brief    Default Constructor of HttpServer class
		*********************************************************************/
		HttpServer(void);

		/*********************************************************************
		*
		* @brief    Overloaded IP and Port constructor of HttpServer class
		*
		* @param    ip:	const std::string& like (127.0.0.1)
		* @param    port:	unsigned short	port (HTTP_PORT|8080, etc...)
		*
		*********************************************************************/
		HttpServer(const std::string& ip, port_t port);
		
		/*********************************************************************
		* @brief    Copy Constructor of HttpServer class
		*
		* @param   h:	reference to a HttpServer 
		*********************************************************************/
		HttpServer(const HttpServer& h);

		/*********************************************************************
		* @brief    Assignement Operator of HttpServer class
		*
		* @param   h: refernce to a HttpServer 
		*********************************************************************/
		HttpServer &operator=(const HttpServer& h);

		/*********************************************************************
		* @brief    Default Destructor of HttpServer class
		*********************************************************************/
		~HttpServer(void);

		/*********************************************************************
		*
		* @brief    Getter of _address attributes
		* @return   Address used by Server
		*
		*********************************************************************/
		const std::string&	getAddress(void) const;

		/*********************************************************************
		*
		* @brief    Getter of _IP attributes
		* @return   Ip Used by server
		*
		*********************************************************************/
		const std::string&	getIP(void) const;

		/*********************************************************************
		*
		* @brief    Getter of _address attributes
		* @return   Port Used by server
		*
		*********************************************************************/
		port_t			getPort(void) const;
	
	/*
	 * @brief Privates Attributes
	 */
	private:

		/* @brief address like 127.0.0.1 */
		std::string	_ip;
		/* @brief port unsigned short 0-65535 */
		port_t		_port;
};

#endif
