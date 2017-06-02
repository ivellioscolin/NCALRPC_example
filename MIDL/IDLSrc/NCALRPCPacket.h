#pragma once

#ifndef __NCALRPC_ESCAPE_H__
#define __NCALRPC_ESCAPE_H__

#include <stdint.h>

typedef struct _NCALRPC_PACKET_1
{
    uint32_t inSize;
}NCALRPC_PACKET_1, *PNCALRPC_PACKET_1;

typedef struct _NCALRPC_PACKET_2
{
    uint32_t outSize;
}NCALRPC_PACKET_2, *PNCALRPC_PACKET_2;

#endif // __NCALRPC_ESCAPE_H__