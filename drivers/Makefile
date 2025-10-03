# SPDX-License-Identifier: (GPL-2.0+ OR MIT)

obj-y					+= tty/
obj-$(CONFIG_AMLOGIC_GKI_TOOL)		+= gki_tool/
obj-n					+= debug/
obj-$(CONFIG_AMLOGIC_MEMORY_DEBUG)	+= memory_debug/
obj-$(CONFIG_AMLOGIC_SECMON)		+= secmon/
obj-y					+= clk/
obj-$(CONFIG_AMLOGIC_GPIO)		+= gpio/
obj-$(CONFIG_MAILBOX)			+= mailbox/
obj-$(CONFIG_AMLOGIC_PWM)		+= pwm/
obj-y					+= power/
obj-$(CONFIG_AMLOGIC_CPU_INFO)		+= cpu_info/
obj-$(CONFIG_AMLOGIC_MESON_CPUFREQ)	+= cpufreq/
obj-$(CONFIG_AMLOGIC_RESET_MESON)	+= reset/
obj-$(CONFIG_AMLOGIC_EFUSE_UNIFYKEY)	+= efuse_unifykey/
obj-$(CONFIG_AMLOGIC_MMC_MESON_GX)	+= mmc/
obj-y					+= i2c/
obj-$(CONFIG_SPI_N)			+= spi/
obj-y					+= char/
obj-$(CONFIG_AMLOGIC_TEE)		+= tee/
obj-$(CONFIG_AMLOGIC_AMLTEE)		+= aml_tee/
obj-$(CONFIG_AMLOGIC_TRUSTED_KEYS)	+= aml_trusted_keys/
obj-$(CONFIG_AMLOGIC_GX_SUSPEND)	+= pm/
obj-$(CONFIG_INPUT_N)			+= input/
obj-$(CONFIG_AMLOGIC_MESON_GXBB_WATCHDOG)	+= watchdog/
obj-y					+= dvb/
obj-n					+= dvb_ci/
obj-$(CONFIG_AMLOGIC_MEDIA_ENABLE)	+= media/
obj-$(CONFIG_AMLOGIC_ADC)		+= iio/
obj-$(CONFIG_THERMAL)			+= thermal/
obj-$(CONFIG_AMLOGIC_USB)		+= usb/
obj-$(CONFIG_AMLOGIC_IRBLASTER_N)		+= irblaster/
obj-$(CONFIG_AMLOGIC_DRM)		+= drm/
obj-$(CONFIG_AMLOGIC_CRYPTO_DMA_N)	+= crypto/
obj-$(CONFIG_RTC_LIB_N)			+= rtc/
obj-y					+= pci/
obj-$(CONFIG_AMLOGIC_SOC_INFO)		+= soc_info/
obj-$(CONFIG_AMLOGIC_HOST_DRIVER_N)	+= host/
obj-$(CONFIG_AMLOGIC_WIRELESS_N)		+= wireless/
obj-$(CONFIG_AMLOGIC_LED)		+= led/
obj-$(CONFIG_AMLOGIC_INPHY)		+= net/
obj-$(CONFIG_AMLOGIC_MTD_COMMON)	+= mtd/common/
obj-$(CONFIG_AMLOGIC_MTD_SPI_NAND)	+= mtd/spinand/
obj-$(CONFIG_AMLOGIC_MTD_NAND)		+= mtd/nand/
obj-$(CONFIG_AMLOGIC_FREERTOS)		+= freertos/
obj-$(CONFIG_AMLOGIC_JTAG_MESON_N)	+= jtag/
obj-n					+= memory_ext/
obj-$(CONFIG_AMLOGIC_HWSPINLOCK)	+= hwspinlock/
obj-y					+= android/
obj-$(CONFIG_AMLOGIC_YAFFS_FS)		+= yaffs2/
obj-$(CONFIG_AMLOGIC_MFD_PMIC6B)	+= mfd/
obj-$(CONFIG_AMLOGIC_REGULATOR_PMIC6B)	+= regulator/
obj-$(CONFIG_AMLOGIC_AUDIO_BRIDGE)	+= audiobridge/
obj-$(CONFIG_AMLOGIC_MEDIA_ALGORITHM)	+= algorithm/
obj-y        				+= dvb/
obj-$(CONFIG_AMLOGIC_DRM)		+= drm/
obj-y              			+= pci/
obj-$(CONFIG_AMLOGIC_LED)		+= led/
obj-y              			+= firmware/
obj-$(CONFIG_AMLOGIC_SOC_TIMESTAMP)	+= timestamp/
obj-$(CONFIG_AMLOGIC_SECKEY)		+= seckey/
obj-n	+= media_modules/
obj-$(CONFIG_AMLOGIC_AML_ISP)		+= amlisp/
obj-$(CONFIG_AMLOGIC_ARM_ISP)		+= armisp/
obj-n					+= armisp-g12b/
obj-$(CONFIG_AMLOGIC_NPU)		+= npu/
obj-m					+= adla/
obj-$(CONFIG_AMLOGIC_USBCAM)		+= dvb_usbci/
obj-y	+= misc/
obj-y	+= gpu/arm/

KBUILD_CFLAGS_MODULE += $(GKI_EXT_KERNEL_MODULE_PREDEFINE)
all:
	$(MAKE) -C $(KERNEL_SRC) M=$(M) modules $(GKI_EXT_KERNEL_MODULE_CONFIG)

modules_install:
	$(MAKE) -C $(KERNEL_SRC) M=$(M) modules_install

clean:
	$(MAKE) -C $(KERNEL_SRC) M=$(M) clean
