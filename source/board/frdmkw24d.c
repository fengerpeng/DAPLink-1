/**
 * @file    frdmkw24d.c
 * @brief   board ID for the NXP FRDM-KW24D board
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2009-2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "target_board.h"
#include "target_family.h"

extern target_cfg_t target_device;

const board_info_t g_board_info = {
    .infoVersion = 0x0,
    .board_id = "0250",
    .family_id = NXP_KINETIS_K_SERIES_FAMILY_ID,
    .daplink_url_name =       "PRODINFOHTM",
    .daplink_drive_name = 	"FRDM-KW24D",
    .daplink_target_url = "http://www.nxp.com/frdm-kw24d",
    .target_cfg = &target_device,
};

