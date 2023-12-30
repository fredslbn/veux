
/* Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

 
 
 
 
 
 
 


#ifndef _MACTX_U_SIG_EHT_SU_MU_H_
#define _MACTX_U_SIG_EHT_SU_MU_H_
#if !defined(__ASSEMBLER__)
#endif

#include "u_sig_eht_su_mu_info.h"
#define NUM_OF_DWORDS_MACTX_U_SIG_EHT_SU_MU 2

#define NUM_OF_QWORDS_MACTX_U_SIG_EHT_SU_MU 1


struct mactx_u_sig_eht_su_mu {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   u_sig_eht_su_mu_info                                      mactx_u_sig_eht_su_mu_info_details;
#else
             struct   u_sig_eht_su_mu_info                                      mactx_u_sig_eht_su_mu_info_details;
#endif
};


 


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_PHY_VERSION_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_PHY_VERSION_LSB    0
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_PHY_VERSION_MSB    2
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_PHY_VERSION_MASK   0x0000000000000007


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_TRANSMIT_BW_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_TRANSMIT_BW_LSB    3
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_TRANSMIT_BW_MSB    5
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_TRANSMIT_BW_MASK   0x0000000000000038


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_DL_UL_FLAG_OFFSET  0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_DL_UL_FLAG_LSB     6
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_DL_UL_FLAG_MSB     6
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_DL_UL_FLAG_MASK    0x0000000000000040


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_BSS_COLOR_ID_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_BSS_COLOR_ID_LSB   7
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_BSS_COLOR_ID_MSB   12
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_BSS_COLOR_ID_MASK  0x0000000000001f80


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_TXOP_DURATION_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_TXOP_DURATION_LSB  13
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_TXOP_DURATION_MSB  19
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_TXOP_DURATION_MASK 0x00000000000fe000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_DISREGARD_0A_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_DISREGARD_0A_LSB   20
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_DISREGARD_0A_MSB   24
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_DISREGARD_0A_MASK  0x0000000001f00000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_VALIDATE_0B_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_VALIDATE_0B_LSB    25
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_VALIDATE_0B_MSB    25
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_VALIDATE_0B_MASK   0x0000000002000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RESERVED_0C_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RESERVED_0C_LSB    26
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RESERVED_0C_MSB    31
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RESERVED_0C_MASK   0x00000000fc000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_EHT_PPDU_SIG_CMN_TYPE_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_EHT_PPDU_SIG_CMN_TYPE_LSB 32
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_EHT_PPDU_SIG_CMN_TYPE_MSB 33
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_EHT_PPDU_SIG_CMN_TYPE_MASK 0x0000000300000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_VALIDATE_1A_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_VALIDATE_1A_LSB    34
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_VALIDATE_1A_MSB    34
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_VALIDATE_1A_MASK   0x0000000400000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_PUNCTURED_CHANNEL_INFORMATION_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_PUNCTURED_CHANNEL_INFORMATION_LSB 35
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_PUNCTURED_CHANNEL_INFORMATION_MSB 39
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_PUNCTURED_CHANNEL_INFORMATION_MASK 0x000000f800000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_VALIDATE_1B_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_VALIDATE_1B_LSB    40
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_VALIDATE_1B_MSB    40
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_VALIDATE_1B_MASK   0x0000010000000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_MCS_OF_EHT_SIG_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_MCS_OF_EHT_SIG_LSB 41
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_MCS_OF_EHT_SIG_MSB 42
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_MCS_OF_EHT_SIG_MASK 0x0000060000000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_NUM_EHT_SIG_SYMBOLS_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_NUM_EHT_SIG_SYMBOLS_LSB 43
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_NUM_EHT_SIG_SYMBOLS_MSB 47
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_NUM_EHT_SIG_SYMBOLS_MASK 0x0000f80000000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_CRC_OFFSET         0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_CRC_LSB            48
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_CRC_MSB            51
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_CRC_MASK           0x000f000000000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_TAIL_OFFSET        0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_TAIL_LSB           52
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_TAIL_MSB           57
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_TAIL_MASK          0x03f0000000000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_DOT11AX_SU_EXTENDED_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_DOT11AX_SU_EXTENDED_LSB 58
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_DOT11AX_SU_EXTENDED_MSB 58
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_DOT11AX_SU_EXTENDED_MASK 0x0400000000000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RESERVED_1D_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RESERVED_1D_LSB    59
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RESERVED_1D_MSB    61
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RESERVED_1D_MASK   0x3800000000000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RX_NDP_OFFSET      0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RX_NDP_LSB         62
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RX_NDP_MSB         62
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RX_NDP_MASK        0x4000000000000000


 

#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_LSB 63
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MSB 63
#define MACTX_U_SIG_EHT_SU_MU_MACTX_U_SIG_EHT_SU_MU_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MASK 0x8000000000000000



#endif    
