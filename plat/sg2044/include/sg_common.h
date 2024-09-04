#ifndef __SG_COMMON_H__
#define __SG_COMMON_H__

enum {
	CORE_TOP_MCU = 0,
	CORE_64CORE_RV,
	CORE_TPU_SCALAR0,
	CORE_TPU_SCALAR1,
	CORE_TPU_SCALAR2,
	CORE_TPU_SCALAR3,
	CORE_TPU_SCALAR4,
	CORE_TPU_SCALAR5,
	CORE_TPU_SCALAR6,
	CORE_TPU_SCALAR7,
};

enum cpu_board_type {
	BOARD_TYPE_2044R_EVB = 0x0,
	BOARD_TYPE_1690_PCIE = 0x1,
	BOARD_TYPE_1690_CPU = 0x2,
	BOARD_TYPE_1690_SOC = 0x3,
	BOARD_TYPE_2044R_X7 = 0x4,
	BOARD_TYPE_1690_SC11 = 0x5,
	BOARD_TYPE_1690_SE12 = 0x6,
	BOARD_TYPE_CPU_END,
};

#define ZSBL_IMAGE_OFFSET	0x1000000
#define KERNEL_IMAGE_OFFSET	0x200000
#define DTB_OFFSET	0x7000000
#define RAMFS_OFFSET	0xa000000
#define TP_SYS_OFFSET	0x10000000

uint64_t get_work_mode(void);
uint64_t get_core_type(void);

#endif
