/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam0verfl0w <stales@student.42angouleme.f  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 01:41:25 by sam0verfl0w       #+#    #+#             */
/*   Updated: 2023/03/13 19:58:52 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "http_server.hpp"
#include "http_colors.hpp"
#include "http_config.hpp"
#include "webserver_help.hpp"
#include <iostream>

int main(int ac, char **av)
{
	(void)ac, (void)av;
	help(ac, av);
	
	HttpServerConfig	config(av[1]);

	return (0);
}
