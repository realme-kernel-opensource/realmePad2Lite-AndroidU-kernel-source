/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

#ifndef __IMX355_23021_EEPROM_H__
#define __IMX355_23021_EEPROM_H__

#include "kd_camera_typedef.h"
#include "kd_eeprom_oplus.h"
#include "adaptor-subdrv.h"

void imx355_read_SPC_23021(struct subdrv_ctx *ctx, u8 *data);
void imx355_read_DCC_23021(struct subdrv_ctx *ctx,
        kal_uint16 addr, u8 *data, kal_uint32 size);
bool imx355_read_eeprom_23021(struct subdrv_ctx *ctx, kal_uint16 addr, BYTE *data, int size);
unsigned int read_imx355_eeprom_info_23021(struct subdrv_ctx *ctx, kal_uint16 meta_id,
                     BYTE *data, int size);
#endif

