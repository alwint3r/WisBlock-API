/**
 * @file at_cmd.h
 * @author Taylor Lee (taylor.lee@rakwireless.com)
 * @brief AT command parsing includes & defines
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifdef NRF52_SERIES

#include "WisBlock-API.h"

#ifndef __AT_H__
#define __AT_H__

#define AT_PRINTF(...)                  \
	Serial.printf(__VA_ARGS__);         \
	if (g_ble_uart_is_connected)        \
	{                                   \
		g_ble_uart.printf(__VA_ARGS__); \
	}
#endif

#define AT_ERROR "+CME ERROR:"
#define ATCMD_SIZE 160
#define ATQUERY_SIZE 128

#define AT_ERRNO_NOSUPP (1)
#define AT_ERRNO_NOALLOW (2)
#define AT_ERRNO_PARA_VAL (5)
#define AT_ERRNO_PARA_NUM (6)
#define AT_ERRNO_SYS (8)
#define AT_CB_PRINT (0xFF)

#endif