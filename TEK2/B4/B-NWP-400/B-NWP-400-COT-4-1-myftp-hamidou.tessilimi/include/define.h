/*
** EPITECH PROJECT, 2021
** myftp
** File description:
** define
*/

#ifndef DEFINE_H
#define DEFINE_H

#define MAX_PORT 65535
#define BUFF_SIZE 512
#define CMD_SIZE 4

#define CRLF "\r\n"
#define M_120 "120 Service ready in nnn minutes."CRLF
#define M_125 "125 Data connection already open; transfer starting."CRLF
#define M_150 "150 File status okay; about to open data connection."CRLF
#define M_200 "200 Command okay."CRLF
#define M_214 "214 Help message."CRLF
#define M_214_N "CDUP CWD DELE HELP LIST NOOP PASS PASV PORT PWD \
                    QUIT RETR STOR USER."CRLF
#define M_220 "220 Service ready for new user."CRLF
#define M_221 "221 Service closing control connection."CRLF
#define M_226 "226 Closing data connection."CRLF
#define M_227 "227 Entering Passive Mode (h1,h2,h3,h4,p1,p2)."CRLF
#define M_230 "230 User logged in, proceed."CRLF
#define M_250 "250 Requested file action okay, completed."CRLF
#define M_257 "257 pathname created."CRLF
#define M_331 "331 User name okay, need password."CRLF
#define M_332 "332 Need account for login."CRLF
#define M_XXX "xxx Error (RFC compliant)"CRLF
#define M_500 "500 Wrong command."CRLF
#define M_530 "530 Not logged in."CRLF
#define M_550 "550 Requested action not taken. File unavailable."CRLF

#endif /* !DEFINE_H */