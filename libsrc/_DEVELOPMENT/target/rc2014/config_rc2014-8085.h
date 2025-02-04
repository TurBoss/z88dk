





#ifndef __CONFIG_Z88DK_H_
#define __CONFIG_Z88DK_H_

// Automatically Generated at Library Build Time














#undef  __Z88DK
#define __Z88DK  2200












#undef  __RC2014
#define __RC2014  1

#define __IO_DIO_PORT  0x00
#define __IO_CF_8_BIT  0x01
#define __IO_CF_PORT_BASE  0x10
#define __IO_PIO_PORT_BASE  0x20












#undef  __8085
#define __8085  0x01

#define __CPU_INFO  0x00













#define __IO_ACIA_CONTROL_REGISTER    0x80
#define __IO_ACIA_STATUS_REGISTER  0x80
#define __IO_ACIA_DATA_REGISTER    0x81

#define __IO_ACIA_CR_CLK_DIV_01   0x00
#define __IO_ACIA_CR_CLK_DIV_16   0x01
#define __IO_ACIA_CR_CLK_DIV_64   0x02
#define __IO_ACIA_CR_RESET        0x03

#define __IO_ACIA_CR_7E2          0x00
#define __IO_ACIA_CR_7O2          0x04
#define __IO_ACIA_CR_7E1          0x08
#define __IO_ACIA_CR_7O1          0x0C
#define __IO_ACIA_CR_8N2          0x10
#define __IO_ACIA_CR_8N1          0x14
#define __IO_ACIA_CR_8E1          0x18
#define __IO_ACIA_CR_8O1          0x1C

#define __IO_ACIA_CR_TDI_RTS0     0x00
#define __IO_ACIA_CR_TEI_RTS0     0x20
#define __IO_ACIA_CR_TDI_RTS1     0x40
#define __IO_ACIA_CR_TDI_BRK      0x60
   
#define __IO_ACIA_CR_TEI_MASK     0x60

#define __IO_ACIA_CR_REI          0x80

#define __IO_ACIA_SR_RDRF         0x01
#define __IO_ACIA_SR_TDRE         0x02
#define __IO_ACIA_SR_DCD          0x04
#define __IO_ACIA_SR_CTS          0x08
#define __IO_ACIA_SR_FE           0x10
#define __IO_ACIA_SR_OVRN         0x20
#define __IO_ACIA_SR_PE           0x40
#define __IO_ACIA_SR_IRQ          0x80

#define __IO_ACIA_RX_SIZE      0x100
#define __IO_ACIA_RX_FULLISH   0xf0
#define __IO_ACIA_RX_EMPTYISH 0x08
#define __IO_ACIA_TX_SIZE      0x10












#define __IO_SIOA_CONTROL_REGISTER  0x80
#define __IO_SIOA_DATA_REGISTER     0x81
#define __IO_SIOB_CONTROL_REGISTER  0x82
#define __IO_SIOB_DATA_REGISTER     0x83

#define __IO_SIO_WR0_NULL     0x00

#define __IO_SIO_WR0_R0     0x00
#define __IO_SIO_WR0_R1     0x01
#define __IO_SIO_WR0_R2     0x02
#define __IO_SIO_WR0_R3     0x03
#define __IO_SIO_WR0_R4     0x04
#define __IO_SIO_WR0_R5     0x05
#define __IO_SIO_WR0_R6     0x06
#define __IO_SIO_WR0_R7     0x07

#define __IO_SIO_WR0_SDLC_ABORT     0x08
#define __IO_SIO_WR0_EXT_INT_RESET     0x10
#define __IO_SIO_WR0_CHANNEL_RESET     0x18
#define __IO_SIO_WR0_RX_INT_FIRST_REENABLE     0x20
#define __IO_SIO_WR0_TX_INT_PENDING_RESET     0x28
#define __IO_SIO_WR0_ERROR_RESET     0x30
#define __IO_SIO_WR0_A_INT_RETURN     0x38

#define __IO_SIO_WR0_RX_CRC_RESET     0x40
#define __IO_SIO_WR0_TX_CRC_RESET     0x80
#define __IO_SIO_WR0_TX_EOM_RESET     0xC0

#define __IO_SIO_WR1_EXT_INT_ENABLE     0x01
#define __IO_SIO_WR1_TX_INT_ENABLE     0x02
#define __IO_SIO_WR1_B_STATUS_VECTOR     0x04

#define __IO_SIO_WR1_RX_INT_NONE     0x00
#define __IO_SIO_WR1_RX_INT_FIRST     0x08
#define __IO_SIO_WR1_RX_INT_ALL_EXCL_SPECIAL     0x10
#define __IO_SIO_WR1_RX_INT_ALL     0x18

#define __IO_SIO_WR1_WAIT_READY_RX     0x20
#define __IO_SIO_WR1_WAIT_READY_READY     0x40
#define __IO_SIO_WR1_WAIT_READY_ENABLE     0x80

#define __IO_SIO_WR3_RX_ENABLE     0x01
#define __IO_SIO_WR3_RX_SYNC_LOAD_INHIBIT     0x02
#define __IO_SIO_WR3_SDLC_ADDRESS_SEARCH     0x04
#define __IO_SIO_WR3_SDLC_RX_CRC     0x08
#define __IO_SIO_WR3_HUNT_PHASE_ENABLE     0x10
#define __IO_SIO_WR3_AUTO_ENABLES     0x20

#define __IO_SIO_WR3_RX_5BIT     0x00
#define __IO_SIO_WR3_RX_7BIT     0x40
#define __IO_SIO_WR3_RX_6BIT     0x80
#define __IO_SIO_WR3_RX_8BIT     0xC0

#define __IO_SIO_WR4_PARITY_NONE     0x00
#define __IO_SIO_WR4_PARITY_ENABLE     0x01
#define __IO_SIO_WR4_PARITY_EVEN     0x02

#define __IO_SIO_WR4_SYNC_MODE     0x00
#define __IO_SIO_WR4_STOP_1     0x04
#define __IO_SIO_WR4_STOP_3HALF     0x08
#define __IO_SIO_WR4_STOP_2     0x0C

#define __IO_SIO_WR4_SYNC_8BIT     0x00
#define __IO_SIO_WR4_SYNC_16BIT     0x10
#define __IO_SIO_WR4_SYNC_SDLC     0x20
#define __IO_SIO_WR4_SYNC_EXTERN     0x30

#define __IO_SIO_WR4_CLK_DIV_01     0x00
#define __IO_SIO_WR4_CLK_DIV_16     0x40
#define __IO_SIO_WR4_CLK_DIV_32     0x80
#define __IO_SIO_WR4_CLK_DIV_64     0xC0

#define __IO_SIO_WR5_TX_CRC_ENABLE     0x01
#define __IO_SIO_WR5_RTS     0x02
#define __IO_SIO_WR5_SDLC_CRC_16     0x04
#define __IO_SIO_WR5_TX_ENABLE     0x08
#define __IO_SIO_WR5_TX_BREAK     0x10

#define __IO_SIO_WR5_TX_5BIT     0x00
#define __IO_SIO_WR5_TX_7BIT     0x20
#define __IO_SIO_WR5_TX_6BIT     0x40
#define __IO_SIO_WR5_TX_8BIT     0x60

#define __IO_SIO_WR5_TX_DTR     0x80

#define __IO_SIO_RR0_RX_CHAR     0x01
#define __IO_SIO_RR0_A_INT_PENDING     0x02
#define __IO_SIO_RR0_TX_EMPTY     0x04
#define __IO_SIO_RR0_DCD     0x08
#define __IO_SIO_RR0_SYNC     0x10
#define __IO_SIO_RR0_CTS     0x20
#define __IO_SIO_RR0_TX_EOM     0x40
#define __IO_SIO_RR0_RX_BREAK     0x80

#define __IO_SIO_RR1_TX_ALL_SENT     0x01

#define __IO_SIO_RR1_SDLC_RESIDUE_CODE_0     0x02
#define __IO_SIO_RR1_SDLC_RESIDUE_CODE_1     0x04
#define __IO_SIO_RR1_SDLC_RESIDUE_CODE_2     0x08

#define __IO_SIO_RR1_RX_PARITY_ERROR     0x10
#define __IO_SIO_RR1_RX_OVERRUN     0x20
#define __IO_SIO_RR1_RX_FRAMING_ERROR     0x40
#define __IO_SIO_RR1_SDLC_EOF     0x80

#define __IO_SIO_RX_SIZE        0x80
#define __IO_SIO_RX_FULLISH     0x70
#define __IO_SIO_RX_EMPTYISH    0x08
#define __IO_SIO_TX_SIZE        0x10












#define __IO_PIO_PORT_A  0x20
#define __IO_PIO_PORT_B  0x21
#define __IO_PIO_PORT_C  0x22
#define __IO_PIO_CONTROL  0x23

#define __IO_PIO_CNTL_00  0x80
#define __IO_PIO_CNTL_01  0x81
#define __IO_PIO_CNTL_02  0x82
#define __IO_PIO_CNTL_03  0x83

#define __IO_PIO_CNTL_04  0x88
#define __IO_PIO_CNTL_05  0x89
#define __IO_PIO_CNTL_06  0x8A
#define __IO_PIO_CNTL_07  0x8B

#define __IO_PIO_CNTL_08  0x90
#define __IO_PIO_CNTL_09  0x91
#define __IO_PIO_CNTL_10  0x92
#define __IO_PIO_CNTL_11  0x83

#define __IO_PIO_CNTL_12  0x98
#define __IO_PIO_CNTL_13  0x99
#define __IO_PIO_CNTL_14  0x9A
#define __IO_PIO_CNTL_15  0x9B












#define __IO_CF_IDE_DATA  0x10
#define __IO_CF_IDE_ERROR  0x11
#define __IO_CF_IDE_FEATURE  0x11
#define __IO_CF_IDE_SEC_CNT  0x12
#define __IO_CF_IDE_SECTOR  0x13
#define __IO_CF_IDE_CYL_LSB  0x14
#define __IO_CF_IDE_CYL_MSB  0x15
#define __IO_CF_IDE_HEAD  0x16
#define __IO_CF_IDE_COMMAND  0x17
#define __IO_CF_IDE_STATUS  0x17

#define __IO_CF_IDE_CONTROL  0x1e
#define __IO_CF_IDE_ALT_STATUS  0x1e

#define __IO_CF_IDE_LBA0  0x13
#define __IO_CF_IDE_LBA1  0x14
#define __IO_CF_IDE_LBA2  0x15
#define __IO_CF_IDE_LBA3  0x16













#define __IO_PIO_IDE_LSB  0x20
#define __IO_PIO_IDE_MSB  0x21
#define __IO_PIO_IDE_CTL  0x22
#define __IO_PIO_IDE_CONFIG  0x23
#define __IO_PIO_IDE_RD  0x92
#define __IO_PIO_IDE_WR  0x80

#define __IO_PIO_IDE_A0_LINE  0x01
#define __IO_PIO_IDE_A1_LINE  0x02
#define __IO_PIO_IDE_A2_LINE  0x04
#define __IO_PIO_IDE_CS0_LINE  0x08
#define __IO_PIO_IDE_CS1_LINE  0x10
#define __IO_PIO_IDE_WR_LINE  0x20
#define __IO_PIO_IDE_RD_LINE  0x40
#define __IO_PIO_IDE_RST_LINE  0x80

#define __IO_PIO_IDE_DATA  0x08
#define __IO_PIO_IDE_ERROR  0x9
#define __IO_PIO_IDE_FEATURE  0x9
#define __IO_PIO_IDE_SEC_CNT  0xa
#define __IO_PIO_IDE_SECTOR  0xb
#define __IO_PIO_IDE_CYL_LSB  0xc
#define __IO_PIO_IDE_CYL_MSB  0xd
#define __IO_PIO_IDE_HEAD  0xe
#define __IO_PIO_IDE_COMMAND  0xf
#define __IO_PIO_IDE_STATUS  0xf

#define __IO_PIO_IDE_CONTROL  0x16
#define __IO_PIO_IDE_ALT_STATUS  0x16

#define __IO_PIO_IDE_LBA0  0xb
#define __IO_PIO_IDE_LBA1  0xc
#define __IO_PIO_IDE_LBA2  0xd
#define __IO_PIO_IDE_LBA3  0xe

#define __IDE_CMD_READ  0x20
#define __IDE_CMD_WRITE  0x30

#define __IDE_CMD_STANDBY  0xE0
#define __IDE_CMD_IDLE  0xE1
#define __IDE_CMD_SLEEP  0xE6
#define __IDE_CMD_CACHE_FLUSH  0xE7
#define __IDE_CMD_ID  0xEC
#define __IDE_CMD_FEATURE  0xEF













#define __IO_RAM_TOGGLE  0x30
#define __IO_ROM_TOGGLE  0x38
#define __IO_RAM_SHADOW_BASE  0x58

#define __IO_RAM_SHADOW_AVAILABLE  0x00













#define __BF_CIO  0x00
#define __BF_CIOIN  0x0
#define __BF_CIOOUT  0x1
#define __BF_CIOIST  0x2
#define __BF_CIOOST  0x3
#define __BF_CIOINIT  0x4
#define __BF_CIOQUERY  0x5
#define __BF_CIODEVICE  0x6

#define __BF_DIO  0x10
#define __BF_DIOSTATUS  0x10
#define __BF_DIORESET  0x11
#define __BF_DIOSEEK  0x12
#define __BF_DIOREAD  0x13
#define __BF_DIOWRITE  0x14
#define __BF_DIOVERIFY  0x15
#define __BF_DIOFORMAT  0x16
#define __BF_DIODEVICE  0x17
#define __BF_DIOMEDIA  0x18
#define __BF_DIODEFMED  0x19
#define __BF_DIOCAP  0x1a
#define __BF_DIOGEOM  0x1b

#define __BF_RTC  0x20
#define __BF_RTCGETTIM  0x20
#define __BF_RTCSETTIM  0x21
#define __BF_RTCGETBYT  0x22
#define __BF_RTCSETBYT  0x23
#define __BF_RTCGETBLK  0x24
#define __BF_RTCSETBLK  0x25

#define __BF_EMU  0x30

#define __BF_VDA  0x40
#define __BF_VDAINI  0x40
#define __BF_VDAQRY  0x41
#define __BF_VDARES  0x42
#define __BF_VDADEV  0x43
#define __BF_VDASCS  0x44
#define __BF_VDASCP  0x45
#define __BF_VDASAT  0x46
#define __BF_VDASCO  0x47
#define __BF_VDAWRC  0x48
#define __BF_VDAFIL  0x49
#define __BF_VDACPY  0x4a
#define __BF_VDASCR  0x4b
#define __BF_VDAKST  0x4c
#define __BF_VDAKFL  0x4d
#define __BF_VDAKRD  0x4e

#define __BF_SYS  0xF0
#define __BF_SYSRESET  0xf0
#define __BF_SYSVER  0xf1
#define __BF_SYSSETBNK  0xf2
#define __BF_SYSGETBNK  0xf3
#define __BF_SYSSETCPY  0xf4
#define __BF_SYSBNKCPY  0xf5
#define __BF_SYSALLOC  0xf6
#define __BF_SYSFREE  0xf7
#define __BF_SYSGET  0xf8
#define __BF_SYSSET  0xf9
#define __BF_SYSPEEK  0xfa
#define __BF_SYSPOKE  0xfb
#define __BF_SYSINT  0xfc

#define __BF_SYSGET_CIOCNT  0x00
#define __BF_SYSGET_DIOCNT  0x10
#define __BF_SYSGET_VDACNT  0x40
#define __BF_SYSGET_TIMER  0xD0
#define __BF_SYSGET_SECS  0xD1
#define __BF_SYSGET_BOOTINFO  0xE0
#define __BF_SYSGET_CPUINFO  0xF0
#define __BF_SYSGET_MEMINFO  0xF1
#define __BF_SYSGET_BNKINFO  0xF2

#define __BF_SYSSET_TIMER  0xD0
#define __BF_SYSSET_SECS  0xD1
#define __BF_SYSSET_BOOTINFO  0xE0

#define __BF_SYSINT_INFO  0x00
#define __BF_SYSINT_GET  0x10
#define __BF_SYSINT_SET  0x20

#define __CIODEV_UART  0x00
#define __CIODEV_ASCI  0x10
#define __CIODEV_TERM  0x20
#define __CIODEV_PRPCON  0x30
#define __CIODEV_PPPCON  0x40
#define __CIODEV_SIO  0x50
#define __CIODEV_ACIA  0x60
#define __CIODEV_PIO  0x70
#define __CIODEV_UF  0x80
#define __CIODEV_CONSOLE  0xD0

#define __DIODEV_MD  0x00
#define __DIODEV_FD  0x10
#define __DIODEV_RF  0x20
#define __DIODEV_IDE  0x30
#define __DIODEV_ATAPI  0x40
#define __DIODEV_PPIDE  0x50
#define __DIODEV_SD  0x60
#define __DIODEV_PRPSD  0x70
#define __DIODEV_PPPSD  0x80
#define __DIODEV_HDSK  0x90

#define __VDADEV_VDU  0x00
#define __VDADEV_CVDU  0x10
#define __VDADEV_NEC  0x20
#define __VDADEV_TMS  0x30
#define __VDADEV_VGA  0x40

#define __EMUTYP_NONE  0x00
#define __EMUTYP_TTY  0x01
#define __EMUTYP_ANSI  0x02

#define __HBX_XFCDAT  0xffe0
#define __HB_CURBNK  0xffe0
#define __HB_INVBNK  0xffe1
#define __HB_SRCADR  0xffe2
#define __HB_SRCBNK  0xffe4
#define __HB_DSTADR  0xffe5
#define __HB_DSTBNK  0xffe7
#define __HB_CPYLEN  0xffe8

#define __HBX_XFCFNS  0xfff0
#define __HB_INVOKE  0xfff0
#define __HB_BNKSEL  0xfff3
#define __HB_BNKCPY  0xfff6
#define __HB_BNKCALL  0xfff9
#define __HB_IDENT  0xfffe












#define __CPM_RCON  1
#define __CPM_WCON  2
#define __CPM_RRDR  3
#define __CPM_WPUN  4
#define __CPM_WLST  5
#define __CPM_DCIO  6
#define __CPM_GIOB  7
#define __CPM_SIOB  8
#define __CPM_PRST  9
#define __CPM_RCOB  10
#define __CPM_ICON  11
#define __CPM_VERS  12
#define __CPM_RDS   13
#define __CPM_LGIN  14
#define __CPM_OPN   15
#define __CPM_CLS   16
#define __CPM_FFST  17
#define __CPM_FNXT  18
#define __CPM_DEL   19
#define __CPM_READ  20
#define __CPM_WRIT  21
#define __CPM_MAKE  22
#define __CPM_REN   23
#define __CPM_ILOG  24
#define __CPM_IDRV  25
#define __CPM_SDMA  26
#define __CPM_SUID  32
#define __CPM_RRAN  33
#define __CPM_WRAN  34
#define __CPM_CFS   35
#define __CPM_DSEG  51





#endif



