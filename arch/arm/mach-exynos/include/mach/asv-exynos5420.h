/* linux/arch/arm/mach-exynos/include/mach/asv-exynos5420.h
*
* Copyright (c) 2012 Samsung Electronics Co., Ltd.
*              http://www.samsung.com/
*
* EXYNOS5420 - Adoptive Support Voltage Header file
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_EXYNOS5420_ASV_H
#define __ASM_ARCH_EXYNOS5420_ASV_H __FILE__

#define ARM_DVFS_LEVEL_NR		(18)
#define ARM_ASV_GRP_NR			(15)
#define ARM_MAX_VOLT			(1362500)

#define INT_DVFS_LEVEL_NR		(10)

#define INT_ASV_GRP_NR			(15)
#define INT_MAX_VOLT			(1212500)
#define G3D_DVFS_LEVEL_NR		(10)
#define G3D_ASV_GRP_NR			(15)
#define G3D_MAX_VOLT			(1150000)
#define MIF_DVFS_LEVEL_NR		(10)
#define MIF_ASV_GRP_NR			(15)
#define MIF_MAX_VOLT			(1025000)
#define KFC_DVFS_LEVEL_NR		(13)
#define KFC_ASV_GRP_NR			(15)
#define KFC_MAX_VOLT			(1312500)

static unsigned int refer_table_get_asv[2][ARM_ASV_GRP_NR] = {
	{ 0, 11, 15, 20, 24, 29, 36, 43, 52, 63, 76, 91, 100, 110, 999},
	{ 0, 65, 69, 72, 74, 76, 78, 80, 82, 84, 87, 89,  91,  92, 999},
};

static unsigned int refer_use_table_get_asv[2][ARM_ASV_GRP_NR] = {
	{ 0, 1,  1,  1,  1,  1,  1,  1,  1,  1,   1,   1,   1},
	{ 0, 1,  1,  1,  1,  1,  1,  1,  1,  1,   1,   1,   1},
};

static unsigned int arm_asv_abb_info[ARM_ASV_GRP_NR] = {
	ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,
};

static unsigned int int_asv_abb_info[INT_ASV_GRP_NR] = {
#if !defined(CONFIG_SUPPORT_WQXGA)
	ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,
#else
	ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_X130, ABB_X130, ABB_X130, ABB_X130, ABB_X130, ABB_X130, ABB_X130, ABB_X130,
#endif
};

static unsigned int mif_asv_abb_info[MIF_ASV_GRP_NR] = {
	ABB_X130  , ABB_X130  , ABB_X130  , ABB_X130  , ABB_X130  , ABB_X130  , ABB_X130  , ABB_X130  , ABB_X130  , ABB_X130  , ABB_X130  , ABB_X130  , ABB_X130  , ABB_X130  , ABB_X130  ,
};

static unsigned int g3d_asv_abb_info[G3D_ASV_GRP_NR] = {
	ABB_X080  , ABB_X080  , ABB_X080  , ABB_X080  , ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,
};

static unsigned int kfc_asv_abb_info[KFC_ASV_GRP_NR] = {
	ABB_X080  , ABB_X080  , ABB_X080  , ABB_X080  , ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,
};

static unsigned int arm_asv_volt_info_evt1[ARM_DVFS_LEVEL_NR][ARM_ASV_GRP_NR + 1] = {
	{ 1900000, 1300000, 1287500, 1262500, 1237500, 1225000, 1212500, 1200000, 1187500, 1175000, 1162500, 1150000, 1137500, 1125000, 1112500, 1112500},
	{ 1800000, 1225000, 1212500, 1200000, 1187500, 1175000, 1162500, 1150000, 1137500, 1125000, 1112500, 1100000, 1087500, 1075000, 1062500, 1062500},
	{ 1700000, 1187500, 1175000, 1162500, 1150000, 1137500, 1125000, 1112500, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1025000},
	{ 1600000, 1150000, 1137500, 1125000, 1112500, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  987500},
	{ 1500000, 1112500, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  950000},
	{ 1400000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  925000},
	{ 1300000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  900000},
	{ 1200000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000},
	{ 1100000, 1012500, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000},
	{ 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  900000,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  800000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  700000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  600000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  500000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  400000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  300000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  200000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
};

static unsigned int kfc_asv_volt_info_evt1[KFC_DVFS_LEVEL_NR][KFC_ASV_GRP_NR + 1] = {
	{ 1400000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{ 1300000, 1250000, 1237500, 1225000, 1212500, 1212500, 1200000, 1187500, 1175000, 1162500, 1150000, 1137500, 1125000, 1112500, 1100000, 1100000},
	{ 1200000, 1187500, 1175000, 1162500, 1150000, 1150000, 1137500, 1125000, 1112500, 1100000, 1087500, 1075000, 1062500, 1050000, 1050000, 1050000},
	{ 1100000, 1137500, 1125000, 1112500, 1100000, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000, 1000000, 1000000},
	{ 1000000, 1087500, 1075000, 1062500, 1050000, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  950000,  950000},
	{  900000, 1050000, 1037500, 1025000, 1012500, 1012500, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  912500,  912500},
	{  800000, 1012500, 1000000,  987500,  975000,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000},
	{  700000,  975000,  962500,  950000,  937500,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  600000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  500000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  400000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  300000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{  200000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
};

static unsigned int int_asv_volt_info_evt1[INT_DVFS_LEVEL_NR][INT_ASV_GRP_NR + 1] = {
#if !defined(CONFIG_SUPPORT_WQXGA)
	{ 600000, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  900000,  900000,  912500,  900000,  900000,  900000},
	{ 500000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  887500,  875000,  862500,  850000,  850000,  850000,  850000},
	{ 480000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  887500,  875000,  862500,  850000,  850000,  850000,  850000},
	{ 460000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  887500,  875000,  862500,  850000,  850000,  850000,  850000},
	{ 440000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  887500,  875000,  862500,  850000,  850000,  850000,  850000},
	{ 400000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  887500,  875000,  862500,  850000,  850000,  850000,  850000},
	{ 333000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  887500,  875000,  862500,  850000,  850000,  850000,  850000},
	{ 222000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  887500,  875000,  862500,  850000,  850000,  850000,  850000},
	{ 111000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  887500,  875000,  862500,  850000,  850000,  850000,  850000},
	{  83000,  875000,  862500,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
#else
	{ 600000, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000},
	{ 500000, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000},
	{ 480000,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{ 460000,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{ 440000,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{ 400000,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{ 333000,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{ 222000,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{ 133000,  887500,  875000,  862500,  862500,  862500,  862500,  862500,  875000,  875000,  875000,  875000,  875000,  875000,  875000,  875000},
#endif
};

static unsigned int mif_asv_volt_info_evt1[MIF_DVFS_LEVEL_NR][MIF_ASV_GRP_NR + 1] = {
	{ 933000, 1025000,  1012500, 1000000, 987500,  975000,  962500,  950000,  950000,  937500,  937500,  925000,  925000,  925000,  925000,  925000},
	{ 800000, 1000000,  987500,  975000,  962500,  962500,  950000,  950000,  937500,  937500,  925000,  925000,  925000,  925000,  925000,  925000},
	{ 733000, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  887500,  875000,  875000,  875000,  875000,  875000},
	{ 667000,  962500,  950000,  937500,  925000,  912500,  900000,  887500,  875000,  862500,  850000,  837500,  837500,  837500,  837500,  837500},
	{ 533000,  900000,  887500,  875000,  862500,  850000,  837500,  825000,  812500,  800000,  787500,  787500,  775000,  775000,  775000,  775000},
	{ 400000,  837500,  825000,  812500,  800000,  787500,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000},
	{ 266000,  825000,  812500,  800000,  787500,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000},
	{ 200000,  825000,  812500,  800000,  787500,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000},
	{ 160000,  825000,  812500,  800000,  787500,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000},
	{ 133000,  825000,  812500,  800000,  787500,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000,  775000},
};

static unsigned int g3d_asv_volt_info_evt1[G3D_DVFS_LEVEL_NR][G3D_ASV_GRP_NR + 1] = {
    { 733000, 1150000, 1100000, 1100000,  1037500, 1037500, 1025000, 1012500, 1000000, 987500,  975000,  962500,  950000,  937500,  925000,  925000},
    { 667000, 1062500, 1060000, 1050000,  1050000, 1032500, 1000000, 987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  900000},
    { 600000, 1050000, 1050000, 1050000,  1012500, 1012500, 1000000, 987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  900000},
	{ 533000, 1025000, 1012500, 1000000,  987500,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  887500,  875000,  875000},
	{ 480000,  987500,  975000,  962500,  950000,  950000,  937500,  925000,  912500,  900000,  887500,  875000,  862500,  850000,  837500,  837500},
	{ 420000,  950000,  937500,  925000,  912500,  912500,  900000,  887500,  875000,  862500,  850000,  837500,  825000,  812500,  800000,  800000},
	{ 350000,  900000,  887500,  875000,  862500,  862500,  850000,  837500,  825000,  812500,  800000,  787500,  775000,  762500,  750000,  750000},
	{ 266000,  850000,  837500,  825000,  812500,  812500,  800000,  787500,  775000,  762500,  750000,  750000,  750000,  750000,  750000,  750000},
	{ 177000,  812500,  800000,  787500,  775000,  775000,  762500,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000},
	{ 100000,  812500,  800000,  787500,  775000,  775000,  762500,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000},
};

static unsigned int mif_sram_asv_volt_info_evt1[1][MIF_ASV_GRP_NR] = {
	{         1000000,  975000,  975000,  950000,  950000,  950000,  950000,  925000,  925000,  925000,  925000,  925000,  925000,  925000,  925000},
};

static unsigned int g3d_sram_asv_volt_info_evt1[1][G3D_ASV_GRP_NR] = {
	{         1025000, 1000000, 1000000,  975000,  975000,  975000,  950000,  950000,  925000,  925000,  900000,  900000,  900000,  900000,  900000},
};

#endif /* EXYNOS5420_ASV_H */
