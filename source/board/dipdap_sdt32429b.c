/**
 * @file    dipdap_sdt32429b.c
 * @brief   board file for DIPDAP targeting STM32F429ZI
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2018, ARM Limited, All Rights Reserved
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

#include "target_family.h"
#include "target_board.h"

extern target_cfg_t target_device;

const board_info_t g_board_info = {
    .infoVersion = 0x0,
    .board_id = "3108",
    .family_id = STUB_HW_RESET_FAMILY_ID,
    .flags = kEnablePageErase,
    .daplink_url_name =       "MBED    HTM",
    .daplink_drive_name =       "DAPLINK    ",
    .daplink_target_url = "https://mbed.org/device/?code=@U?version=@V?target_id=@T",
    .target_cfg = &target_device,
};
