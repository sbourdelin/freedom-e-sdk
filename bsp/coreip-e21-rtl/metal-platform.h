/* Copyright 2019 SiFive, Inc */
/* SPDX-License-Identifier: Apache-2.0 */
/* ----------------------------------- */
/* [XXXXX] 20-05-2019 14-26-10        */
/* ----------------------------------- */

#ifndef COREIP_E21_RTL__METAL_PLATFORM_H
#define COREIP_E21_RTL__METAL_PLATFORM_H

/* From pmp@0 */
#define METAL_RISCV_PMP_0_NUM_REGIONS 8UL

#define METAL_RISCV_PMP

/* From interrupt_controller@2000000 */
#define METAL_SIFIVE_CLIC0_2000000_BASE_ADDRESS 33554432UL
#define METAL_SIFIVE_CLIC0_0_BASE_ADDRESS 33554432UL
#define METAL_SIFIVE_CLIC0_2000000_SIZE 16777216UL
#define METAL_SIFIVE_CLIC0_0_SIZE 16777216UL
#define METAL_SIFIVE_CLIC0_2000000_SIFIVE_NUMINTS 143UL
#define METAL_SIFIVE_CLIC0_0_SIFIVE_NUMINTS 143UL
#define METAL_SIFIVE_CLIC0_2000000_SIFIVE_NUMLEVELS 16UL
#define METAL_SIFIVE_CLIC0_0_SIFIVE_NUMLEVELS 16UL
#define METAL_SIFIVE_CLIC0_2000000_SIFIVE_NUMINTBITS 2UL
#define METAL_SIFIVE_CLIC0_0_SIFIVE_NUMINTBITS 2UL

#define METAL_SIFIVE_CLIC0
#define METAL_SIFIVE_CLIC0_MSIP_BASE 0UL
#define METAL_SIFIVE_CLIC0_MTIMECMP_BASE 16384UL
#define METAL_SIFIVE_CLIC0_MTIME 49144UL
#define METAL_SIFIVE_CLIC0_CLICINTIP_BASE 0UL
#define METAL_SIFIVE_CLIC0_CLICINTIE_BASE 1024UL
#define METAL_SIFIVE_CLIC0_CLICINTCTL_BASE 2048UL
#define METAL_SIFIVE_CLIC0_CLICCFG 3072UL
#define METAL_SIFIVE_CLIC0_MMODE_APERTURE 8388608UL
#define METAL_SIFIVE_CLIC0_HSMODE_APERTURE 10485760UL
#define METAL_SIFIVE_CLIC0_SMODE_APERTURE 12582912UL
#define METAL_SIFIVE_CLIC0_UMODE_APERTURE 14680064UL

/* From local_external_interrupts_0 */

#define METAL_SIFIVE_LOCAL_EXTERNAL_INTERRUPTS0

/* From teststatus@4000 */
#define METAL_SIFIVE_TEST0_4000_BASE_ADDRESS 16384UL
#define METAL_SIFIVE_TEST0_0_BASE_ADDRESS 16384UL
#define METAL_SIFIVE_TEST0_4000_SIZE 4096UL
#define METAL_SIFIVE_TEST0_0_SIZE 4096UL

#define METAL_SIFIVE_TEST0
#define METAL_SIFIVE_TEST0_FINISHER_OFFSET 0UL

#endif /* COREIP_E21_RTL__METAL_PLATFORM_H*/
