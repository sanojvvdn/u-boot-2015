/*
 * (C) Copyright 2009
 * Stefano Babic, DENX Software Engineering, sbabic@denx.de.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <asm/imx-common/sys_proto.h>

/* OTP related functionality */
int imx_otp_read_one_u32(u32, u32 *);
int imx_otp_blow_one_u32(u32, u32, u32 *);
void enable_otp_clk(unsigned char);
