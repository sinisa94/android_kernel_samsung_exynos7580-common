#ifndef FIMC_IS_EEPROM_FRONT_5E3_V001_H
#define FIMC_IS_EEPROM_FRONT_5E3_V001_H

/* Header referenced section */
#define EEP_HEADER_VERSION_START_ADDR_FRONT      0x30
#define EEP_HEADER_CAL_MAP_VER_START_ADDR_FRONT  0x40
#define EEP_HEADER_OEM_START_ADDR_FRONT          0x0
#define EEP_HEADER_OEM_END_ADDR_FRONT            0x4
#define EEP_HEADER_AWB_START_ADDR_FRONT          0x8
#define EEP_HEADER_AWB_END_ADDR_FRONT            0xC
#define EEP_HEADER_AP_SHADING_START_ADDR_FRONT	 0x18
#define EEP_HEADER_AP_SHADING_END_ADDR_FRONT	 0x1C
#define EEP_HEADER_PROJECT_NAME_START_ADDR_FRONT 0x4C

/* OEM referenced section */
#define EEP_OEM_VER_START_ADDR_FRONT             0x150

/* AWB referenced section */
#define EEP_AWB_VER_START_ADDR_FRONT             0x220

/* AP Shading referenced section */
#define EEP_AP_SHADING_VER_START_ADDR_FRONT      0X3B00

/* Checksum referenced section */
#define EEP_CHECKSUM_HEADER_ADDR_FRONT           0xFC
#define EEP_CHECKSUM_OEM_ADDR_FRONT              0x1FC
#define EEP_CHECKSUM_AWB_ADDR_FRONT              0x2FC
#define EEP_CHECKSUM_AP_SHADING_ADDR_FRONT       0x1FFC

/* etc section */
#define FIMC_IS_MAX_CAL_SIZE_FRONT               (8 * 1024)
#define HEADER_CRC32_LEN_FRONT                   (128)

#endif /* FIMC_IS_EEPROM_FRONT_5E3_V001_H */
