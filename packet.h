/*
 * packet.h
 *
 *  Created on: 04-Jul-2022
 *      Author: PC
 */
#include<stdint.h>
#ifndef PACKET_H_
#define PACKET_H_

//typedef struct
//{
//	uint8_t crc;
//	uint8_t status;
//	uint16_t payload;
//	uint8_t bat;
//	uint8_t sensor;
//	uint8_t longAddr;
//	uint8_t shortAddr;
//	uint8_t addrMode;
//} packet;

typedef struct
{
	uint32_t crc:2;
	uint32_t status:1;
	uint32_t payload:12;
	uint32_t bat:3;
	uint32_t sensor:3;
	uint32_t longAddr:8;
	uint32_t shortAddr:2;
	uint32_t addrMode:1;
}packet_t;

typedef union
{
	uint32_t data;
	packet_t p;
}packet_u;
#endif /* PACKET_H_ */
