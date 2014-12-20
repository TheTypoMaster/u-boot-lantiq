/*
 * Copyright (C) 2014 Daniel Schwierzeck, daniel.schwierzeck@gmail.com
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __ARCH_DANUBE_CONFIG_H
#define __ARCH_DANUBE_CONFIG_H

/* CPU */
#define CONFIG_SYS_MIPS_TIMER_FREQ	166666667

/* RAM */
#define CONFIG_NR_DRAM_BANKS		1

/* SRAM */
#define CONFIG_SYS_SRAM_BASE		0xbe1a0000
#define CONFIG_SYS_SRAM_SIZE		0x10000

/* U-Boot */
#if defined(CONFIG_LANTIQ_BOOT_RAM)
#define CONFIG_SYS_TEXT_BASE		0xa0100000
#define CONFIG_SYS_INIT_SP_ADDR		0xa0104000
#define CONFIG_SKIP_LOWLEVEL_INIT
#endif

#endif /* __ARCH_DANUBE_CONFIG_H */
