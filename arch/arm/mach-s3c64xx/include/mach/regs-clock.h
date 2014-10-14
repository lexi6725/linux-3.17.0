/* arch/arm/plat-s3c64xx/include/plat/regs-clock.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *	http://armlinux.simtec.co.uk/
 *
 * S3C64XX clock register definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __PLAT_REGS_CLOCK_H
#define __PLAT_REGS_CLOCK_H __FILE__

/*
 * FIXME: Remove remaining definitions
 */

#define S3C_CLKREG(x)		(S3C_VA_SYS + (x))

#define S3C_APLL_LOCK		S3C_CLKREG(0x00)
#define S3C_MPLL_LOCK		S3C_CLKREG(0x04)
#define S3C_EPLL_LOCK		S3C_CLKREG(0x08)
#define S3C_APLL_CON		S3C_CLKREG(0x0C)
#define S3C_MPLL_CON		S3C_CLKREG(0x10)
#define S3C_EPLL_CON0		S3C_CLKREG(0x14)
#define S3C_EPLL_CON1		S3C_CLKREG(0x18)
#define S3C_CLK_SRC		S3C_CLKREG(0x1C)
#define S3C_CLK_DIV0		S3C_CLKREG(0x20)
#define S3C_CLK_DIV1		S3C_CLKREG(0x24)
#define S3C_CLK_DIV2		S3C_CLKREG(0x28)
#define S3C_CLK_OUT		S3C_CLKREG(0x2C)
#define S3C_HCLK_GATE		S3C_CLKREG(0x30)
#define S3C_PCLK_GATE		S3C_CLKREG(0x34)
#define S3C_SCLK_GATE		S3C_CLKREG(0x38)
#define S3C_MEM0_GATE		S3C_CLKREG(0x3C)
#define S3C_NORMAL_CFG		S3C_CLKREG(0x810)
#define S3C_BLK_PWR_STAT	S3C_CLKREG(0x90C)
#define S3C6410_CLK_SRC2	S3C_CLKREG(0x10C)
#define S3C_MEM_SYS_CFG		S3C_CLKREG(0x120)

/* HCLK GATE Registers */
#define S3C_CLKCON_HCLK_3DSE	(1<<31)
#define S3C_CLKCON_HCLK_UHOST	(1<<29)
#define S3C_CLKCON_HCLK_SECUR	(1<<28)
#define S3C_CLKCON_HCLK_SDMA1	(1<<27)
#define S3C_CLKCON_HCLK_SDMA0	(1<<26)
#define S3C_CLKCON_HCLK_IROM	(1<<25)
#define S3C_CLKCON_HCLK_DDR1	(1<<24)
#define S3C_CLKCON_HCLK_DDR0	(1<<23)
#define S3C_CLKCON_HCLK_MEM1	(1<<22)
#define S3C_CLKCON_HCLK_MEM0	(1<<21)
#define S3C_CLKCON_HCLK_USB	(1<<20)
#define S3C_CLKCON_HCLK_HSMMC2	(1<<19)
#define S3C_CLKCON_HCLK_HSMMC1	(1<<18)
#define S3C_CLKCON_HCLK_HSMMC0	(1<<17)
#define S3C_CLKCON_HCLK_MDP	(1<<16)
#define S3C_CLKCON_HCLK_DHOST	(1<<15)
#define S3C_CLKCON_HCLK_IHOST	(1<<14)
#define S3C_CLKCON_HCLK_DMA1	(1<<13)
#define S3C_CLKCON_HCLK_DMA0	(1<<12)
#define S3C_CLKCON_HCLK_JPEG	(1<<11)
#define S3C_CLKCON_HCLK_CAMIF	(1<<10)
#define S3C_CLKCON_HCLK_SCALER	(1<<9)
#define S3C_CLKCON_HCLK_2D	(1<<8)
#define S3C_CLKCON_HCLK_TV	(1<<7)
#define S3C_CLKCON_HCLK_POST0	(1<<5)
#define S3C_CLKCON_HCLK_ROT	(1<<4)
#define S3C_CLKCON_HCLK_LCD	(1<<3)
#define S3C_CLKCON_HCLK_TZIC	(1<<2)
#define S3C_CLKCON_HCLK_INTC	(1<<1)
#define S3C_CLKCON_HCLK_MFC	(1<<0)

/* PCLK GATE Registers */
#define S3C_CLKCON_PCLK_UART3		(1<<4)
#define S3C_CLKCON_PCLK_UART2		(1<<3)
#define S3C_CLKCON_PCLK_UART1		(1<<2)
#define S3C_CLKCON_PCLK_UART0		(1<<1)

/* MEM_SYS_CFG */
#define MEM_SYS_CFG_INDEP_CF		0x4000
#define MEM_SYS_CFG_EBI_FIX_PRI_CFCON	0x30

#endif /* _PLAT_REGS_CLOCK_H */
