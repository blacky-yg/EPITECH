/*
** EPITECH PROJECT, 2021
** my_teams
** File description:
** sms_func.h
*/

#pragma once

#ifndef SMS_FUNC_H_
#define SMS_FUNC_H_

#include "struct.h"
#include "logging_server.h"

messag_e *create_sms(uuid_t _shipper, uuid_t _recipient, const char *_mess);
void append_sms_list(messag_e *_sms, messag_e **_sms_list);


#endif /* !SMS_FUNC_H_ */