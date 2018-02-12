#ifndef __BATTERY_DEBUG_H
#define __BATTERY_DEBUG_H __FILE__

#include <linux/err.h>
#include <linux/device.h>

#ifdef CONFIG_BATTERY_DEBUG

#define dev_battery_info(dev, fmt, arg...) dev_info(dev, fmt, ##arg)
#define dev_battery_err(dev, fmt, arg...) dev_err(dev, fmt, ##arg)
#define dev_battery_dbg(dev, fmt, arg...) dev_dbg(dev, fmt, ##arg)

#define pr_battery_info(fmt, arg...) pr_info(fmt, ##arg)
#define pr_battery_err(fmt, arg...) pr_err(fmt, ##arg)
#define pr_battery_debug(fmt, arg...) pr_debug(fmt, ##arg)

#else

#define dev_battery_info(dev, fmt, arg...) do { } while (0)
#define dev_battery_err(dev, fmt, arg...) do { } while (0)
#define dev_battery_dbg(dev, fmt, arg...) do { } while (0)
	
#define pr_battery_info(fmt, arg...) do { } while (0)
#define pr_battery_err(fmt, arg...) do { } while (0)
#define pr_battery_debug(fmt, arg...) do { } while (0)

#endif

#endif