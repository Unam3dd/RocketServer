/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   http_request_config.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:17:45 by stales            #+#    #+#             */
/*   Updated: 2023/03/13 19:01:18 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HTTP_REQUEST_CONFIG_HPP
#define HTTP_REQUEST_CONFIG_HPP

class HttpRequestConfig
{
	public:
		HttpRequestConfig(void);
		HttpRequestConfig(const HttpRequestConfig& c);
		~HttpRequestConfig(void);
};

#endif
