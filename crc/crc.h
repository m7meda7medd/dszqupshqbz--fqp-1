#ifndef CRC_HEADER_H
    #define CRC_HEADER_H

#include "crc_typedefs.h"
#include <stdio.h>
#include <stdint.h>

#define DEFAULT_POLY_VAL 0xEDB88320
#define DEFAULT_INIT_VAL 0xFFFFFFFF 

uint32_t CRC32_Init(CRC_Handle_t* hcrc);

uint32_t CRC32_Calculate(CRC_Handle_t* hcrc,uint8_t * data, uint32_t length);

uint8_t CRC32_Check(uint8_t* buffer,uint32_t* buffer_size){
    
}

void CRC32_ResetCRC(CRC_Handle_t* hcrc);

#endif 