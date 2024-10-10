


#include <stdio.h>
#include "crc.h"

CRC_Handle_t hcrc ; 

int main(){
hcrc.crc_initval = 0xffffffff ;
hcrc.crc_poly = 0xEDB88320 ;

CRC32_Init(&hcrc) ;
uint8_t buffer[] = {0x05,0x0D} ;
uint32_t crc_val ;  

crc_val = CRC32_Calculate(&hcrc, buffer,sizeof(buffer)/sizeof(buffer[0])) ;
printf("Calculated CRC = 0x%X",crc_val) ; 


}