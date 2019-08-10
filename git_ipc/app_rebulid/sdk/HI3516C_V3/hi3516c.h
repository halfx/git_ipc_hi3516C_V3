
#ifndef HI3516C_H_
#define HI3516C_H_
#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <libgen.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <pthread.h>
#include <assert.h>
#include <linux/i2c-dev.h>
#include <linux/i2c.h>

#include "hi_type.h"

#include "hi_common.h"
#include "hi_comm_sys.h"
#include "hi_comm_vb.h"
#include "hi_comm_vi.h"
#include "hi_comm_vo.h"
#include "hi_comm_venc.h"
#include "hi_comm_vpss.h"
//#include "hi_comm_vdec.h"
//#include "hi_comm_vda.h"
#include "hi_comm_ive.h"
#include "hi_comm_region.h"
#include "hi_comm_adec.h"
#include "hi_comm_aenc.h"
#include "hi_comm_ai.h"
#include "hi_comm_ao.h"
#include "hi_comm_aio.h"
#include "hi_defines.h"
#include "hi_comm_sns.h"
#include "hi_sns_ctrl.h"
#include "hi_mipi.h"

#include "mpi_sys.h"
#include "mpi_vb.h"
#include "mpi_vi.h"
#include "mpi_vo.h"
#include "mpi_venc.h"
#include "mpi_vpss.h"
//#include "mpi_vdec.h"
//#include "mpi_vda.h"
#include "mpi_ive.h"
#include "mpi_region.h"
#include "mpi_adec.h"
#include "mpi_aenc.h"
#include "mpi_ai.h"
#include "mpi_ao.h"
#include "mpi_isp.h"
#include "mpi_ae.h"
#include "mpi_awb.h"
#include "mpi_af.h"


// audio in
#define HI_AIN_DEV (0)
#define HI_AIN_CH (0)
#define HI_AOUT_DEV (0)
#define HI_AOUT_CH (0)
// mmz zone name
#define HI_MMZ_ZONE_NAME0 (NULL)
#define HI_MMZ_ZONE_NAME1 HI_MMZ_ZONE_NAME0

#define kHI_RTC_APB_BASE_ADDR (0x20060000UL)
#define kHI_RTC_APB_SPI_CLK_DIV (kHI_RTC_APB_BASE_ADDR + 0x0000UL)
#define kHI_RTC_APB_SPI_RW (kHI_RTC_APB_BASE_ADDR + 0x0004UL)
#define kHI_RTC_APB_SPI_CONVER_T (kHI_RTC_APB_BASE_ADDR + 0x0080UL)
#define kHI_RTC_APB_SPI_CRC_EN (kHI_RTC_APB_BASE_ADDR + 0x0084UL)
#define kHI_RTC_APB_SPI_INT_MASK (kHI_RTC_APB_BASE_ADDR + 0x0088UL)
#define kHI_RTC_APB_SPI_INT_CLEAR (kHI_RTC_APB_BASE_ADDR + 0x008cUL)
#define kHI_RTC_APB_SPI_BUSY (kHI_RTC_APB_BASE_ADDR + 0x0090UL)
#define kHI_RTC_APB_SPI_INT_RAW (kHI_RTC_APB_BASE_ADDR + 0x0094UL)
#define kHI_RTC_APB_SPI_INT_TCAP (kHI_RTC_APB_BASE_ADDR + 0x0098UL)
#define kHI_RTC_APB_SPI_T_VALUE (kHI_RTC_APB_BASE_ADDR + 0x009cUL)
#define kHI_RTC_APB_SPI_FILTER_NUM (kHI_RTC_APB_BASE_ADDR + 0x00a0UL)

//======================================
#define MAIN_RESOLUTION  "/media/conf/main_resolution"
//======================================

#define AUDIO_PTNUMPERFRM   (320)
#define AUDIO_AAC_PTNUMPERFRM   (1024)

extern const char *sdk_strerror(HI_S32 const errno);
extern void hi3521_mmz_zone_assign(MOD_ID_E const module_id, HI_S32 const dev_id, HI_S32 const chn_id, const char* mmz_zone_name);


//Define by yang 2017/11/08
#define EXT_STREAM_BAND_VPSS_CHANNEL (2)

#define VPSS_CHN_MAIN_STREAM  1
#define VPSS_CHN_SUB_STREAM   3

#define VPSS_CHN_MAIN_JPEG  1
#define VPSS_CHN_SUB_JPEG 4

#define HI_MD_VPSS_CHN  5


#ifdef __cplusplus
};
#endif
#endif //HI3518E_H_

