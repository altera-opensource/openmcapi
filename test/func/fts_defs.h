/*
 * Copyright (c) 2010, Mentor Graphics Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of the <ORGANIZATION> nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/************************************************************************
*
*   FILENAME
*
*       fts_defs.h
*
*
*************************************************************************/

#ifndef _MCAPI_FTS_H_
#define _MCAPI_FTS_H_

#include <stdio.h>
#include <mcapi.h>
#include <openmcapi.h>
#include "mgmt_svc.h"

/* XXX MUST match the number of buffers used in the transport. */
#define TEST_BUF_COUNT             128

/****** Begin User Configurable Section.  ******/
/****** These values must match on all nodes ******/

/* The node ID of this node. */
#define FUNC_FRONTEND_NODE_ID   0

/* The node ID of the foreign node. */
#define FUNC_BACKEND_NODE_ID    1

/* The node IDs for the transmit and receive nodes. */
#define MCAPI_TX_NODE_ID        0
#define MCAPI_RX_NODE_ID        0

#define MCAPI_FTS_TIMEOUT       5000

/**** End User Configurable Section. */

#define timeout_assert(start, secs) \
    if ((MCAPID_Time() - start) > secs) { \
        printf("timeout at %s:%d\n", __FILE__, __LINE__); \
        break; \
    }

#define general_assert(c) \
    if (!(c)) { \
        printf("assertion failed at %s:%d\n", __FILE__, __LINE__); \
    }

#define status_assert_code(s,c) \
    if (s != c) { \
        printf("status: expected %d, got %d at %s:%d\n", c, s, __FILE__, \
               __LINE__); \
    } \
    /* we reported any error here, so don't report it later too. */ \
    s = MCAPI_SUCCESS

#define status_assert(s) status_assert_code(s,MCAPI_SUCCESS)

#define MCAPI_MASTER_NODE_ID    0

#define MCAPI_FTS_8BIT_SCALAR  255
#define MCAPI_FTS_16BIT_SCALAR 65535
#define MCAPI_FTS_32BIT_SCALAR 2000000000
#define MCAPI_FTS_64BIT_SCALAR 2000000000

mcapi_status_t MCAPI_FTS_Specify_Scalar_Size(MCAPID_STRUCT *mcapi_struct,
                                             mcapi_uint32_t scalar_size);

MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_3_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_3_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_3_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_4_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_4_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_4_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_5_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_5_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_6_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_6_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_6_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_6_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_6_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_7_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_7_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_7_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_7_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_8_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_9_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_9_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_9_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_10_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_10_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_10_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_11_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_11_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_11_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_12_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_12_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_12_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_13_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_13_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_13_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_6);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_7);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_8);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_9);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_10);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_11);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_12);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_13);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_14);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_14_15);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_15_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_15_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_15_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_15_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_15_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_16_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_16_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_16_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_16_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_16_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_17_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_17_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_17_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_18_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_18_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_18_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_19_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_19_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_19_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_20_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_20_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_20_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_21_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_21_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_21_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_22_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_22_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_22_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_23_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_23_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_23_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_23_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_23_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_23_6);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_23_7);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_24_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_24_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_24_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_24_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_24_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_24_6);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_24_7);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_6);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_7);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_8);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_9);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_10);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_11);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_12);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_13);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_14);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_25_15);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_26_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_26_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_26_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_26_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_26_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_27_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_27_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_27_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_27_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_27_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_27_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_27_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_28_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_28_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_29_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_29_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_29_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_30_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_30_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_30_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_31_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_31_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_31_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_31_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_31_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_31_6);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_31_7);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_32_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_32_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_32_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_32_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_32_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_32_6);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_32_7);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_6);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_7);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_8);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_9);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_10);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_11);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_12);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_13);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_14);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_15);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_16);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_17);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_18);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_19);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_20);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_21);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_22);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_23);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_24);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_25);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_26);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_27);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_28);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_29);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_30);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_31);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_32);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_33);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_34);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_35);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_36);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_33_37);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_6);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_7);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_8);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_9);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_10);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_11);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_12);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_13);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_14);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_15);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_16);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_17);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_18);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_19);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_20);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_21);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_22);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_23);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_24);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_25);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_26);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_27);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_28);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_29);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_30);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_31);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_32);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_33);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_34);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_35);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_36);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_37);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_34_38);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_6);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_7);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_8);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_9);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_10);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_11);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_12);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_13);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_14);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_15);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_16);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_17);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_18);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_19);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_20);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_21);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_22);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_23);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_24);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_25);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_26);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_27);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_28);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_29);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_30);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_31);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_32);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_33);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_34);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_35);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_36);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_37);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_38);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_39);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_40);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_41);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_42);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_43);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_44);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_45);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_46);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_47);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_48);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_49);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_50);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_51);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_52);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_53);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_54);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_55);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_56);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_57);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_58);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_59);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_60);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_61);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_62);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_63);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_64);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_65);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_35_66);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_36_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_36_2);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_36_3);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_36_4);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_36_5);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_36_6);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_36_7);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_36_8);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Tx_2_37_1);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Msg_Echo_Server);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Pkt_Server);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Scl_Server);
MCAPI_THREAD_ENTRY(MCAPI_FTS_Local_Services);

#endif /* _MCAPI_FTS_H_ */
