
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: ISC
 */

 

 
 
 
 
 
 
 
 


#ifndef _UNIFORM_REO_STATUS_HEADER_H_
#define _UNIFORM_REO_STATUS_HEADER_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_DWORDS_UNIFORM_REO_STATUS_HEADER 2


struct uniform_reo_status_header {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t reo_status_number                                       : 16,  
                      cmd_execution_time                                      : 10,  
                      reo_cmd_execution_status                                :  2,  
                      reserved_0a                                             :  4;  
             uint32_t timestamp                                               : 32;  
#else
             uint32_t reserved_0a                                             :  4,  
                      reo_cmd_execution_status                                :  2,  
                      cmd_execution_time                                      : 10,  
                      reo_status_number                                       : 16;  
             uint32_t timestamp                                               : 32;  
#endif
};


 

#define UNIFORM_REO_STATUS_HEADER_REO_STATUS_NUMBER_OFFSET                          0x00000000
#define UNIFORM_REO_STATUS_HEADER_REO_STATUS_NUMBER_LSB                             0
#define UNIFORM_REO_STATUS_HEADER_REO_STATUS_NUMBER_MSB                             15
#define UNIFORM_REO_STATUS_HEADER_REO_STATUS_NUMBER_MASK                            0x0000ffff


 

#define UNIFORM_REO_STATUS_HEADER_CMD_EXECUTION_TIME_OFFSET                         0x00000000
#define UNIFORM_REO_STATUS_HEADER_CMD_EXECUTION_TIME_LSB                            16
#define UNIFORM_REO_STATUS_HEADER_CMD_EXECUTION_TIME_MSB                            25
#define UNIFORM_REO_STATUS_HEADER_CMD_EXECUTION_TIME_MASK                           0x03ff0000


 

#define UNIFORM_REO_STATUS_HEADER_REO_CMD_EXECUTION_STATUS_OFFSET                   0x00000000
#define UNIFORM_REO_STATUS_HEADER_REO_CMD_EXECUTION_STATUS_LSB                      26
#define UNIFORM_REO_STATUS_HEADER_REO_CMD_EXECUTION_STATUS_MSB                      27
#define UNIFORM_REO_STATUS_HEADER_REO_CMD_EXECUTION_STATUS_MASK                     0x0c000000


 

#define UNIFORM_REO_STATUS_HEADER_RESERVED_0A_OFFSET                                0x00000000
#define UNIFORM_REO_STATUS_HEADER_RESERVED_0A_LSB                                   28
#define UNIFORM_REO_STATUS_HEADER_RESERVED_0A_MSB                                   31
#define UNIFORM_REO_STATUS_HEADER_RESERVED_0A_MASK                                  0xf0000000


 

#define UNIFORM_REO_STATUS_HEADER_TIMESTAMP_OFFSET                                  0x00000004
#define UNIFORM_REO_STATUS_HEADER_TIMESTAMP_LSB                                     0
#define UNIFORM_REO_STATUS_HEADER_TIMESTAMP_MSB                                     31
#define UNIFORM_REO_STATUS_HEADER_TIMESTAMP_MASK                                    0xffffffff



#endif    
