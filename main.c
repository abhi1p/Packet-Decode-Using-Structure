/*
 * main.c
 *
 *  Created on: 04-Jul-2022
 *      Author: PC
 */

#include"packet.h"
#include<stdio.h>
int main()
{
	packet_u p1;
//	unsigned int sequence;
	printf("Enter 32 bit sequence in hex: ");
	scanf("%x",&p1.data);
	printf("Sequence is %x\n",p1.data);

//	p1.crc=(sequence & 3);
//	p1.status=(uint8_t)(sequence>>2)&1;
//	printf("Status: %u",p1.status);
//	p1.payload=(uint16_t)(sequence>>14)&0xfff;
//	p1.bat=(uint8_t)(sequence>>17)&7;
//	p1.sensor=(uint8_t)(sequence>>20)&7;
//	p1.longAddr=(uint8_t)(sequence>>28)&0xff;
//	p1.shortAddr=(uint8_t)(sequence>>30)&3;
//	p1.addrMode=(uint8_t)(sequence)>>31&1;


	printf("CRC= %x\n",p1.p.crc);
	printf("Status= %x\n",p1.p.status);
	printf("Payload= %x\n",p1.p.payload);
	printf("Bat= %x\n",p1.p.bat);
	printf("Sensor= %x\n",p1.p.sensor);
	printf("Long Address= %x\n",p1.p.longAddr);
	printf("Short Address= %x\n",p1.p.shortAddr);
	printf("Address mode= %x\n",p1.p.addrMode);
	return 0;

}
