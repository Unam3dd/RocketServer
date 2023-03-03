#pragma once
#ifndef HTTP_UTILS_HPP
#define HTTP_UTILS_HPP

#include <string>

//////////////////////////////////
//
//	       DEFINES
//
/////////////////////////////////

#define IS_BAD_IP(x) (check_format_ip(x) == false)

/*
 * @brief Check format of Ipv4 address
 *
 * @param ip: const std::string& like "127.0.0.1"
 *
 * @return true if is valid else is false
 */
bool	check_format_ip(const std::string& ip);

#endif