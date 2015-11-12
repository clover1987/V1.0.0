//
//  TKDeviceHelper.h
//  TKUtil
//
//  Created by liubao on 14-10-31.
//  Copyright (c) 2014年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TKDevice.h"

//extern NSString *CTSettingCopyMyPhoneNumber();

#define IFPGA_NAMESTRING                @"iFPGA"

#define IPHONE_1G_NAMESTRING            @"iPhone 1G"
#define IPHONE_3G_NAMESTRING            @"iPhone 3G"
#define IPHONE_3GS_NAMESTRING           @"iPhone 3GS"
#define IPHONE_4_NAMESTRING             @"iPhone 4"
#define IPHONE_4S_NAMESTRING            @"iPhone 4S"
#define IPHONE_5_NAMESTRING             @"iPhone 5"
#define IPHONE_5C_NAMESTRING            @"iPhone 5C"
#define IPHONE_5S_NAMESTRING            @"iPhone 5S"
#define IPHONE_6_NAMESTRING             @"iPhone 6"
#define IPHONE_6PLUS_NAMESTRING         @"iPhone 6PLUS"
#define IPHONE_6S_NAMESTRING            @"iPhone 6S"

#define IPHONE_UNKNOWN_NAMESTRING       @"Unknown iPhone"

#define IPOD_1G_NAMESTRING              @"iPod touch 1G"
#define IPOD_2G_NAMESTRING              @"iPod touch 2G"
#define IPOD_3G_NAMESTRING              @"iPod touch 3G"
#define IPOD_4G_NAMESTRING              @"iPod touch 4G"
#define IPOD_5G_NAMESTRING              @"iPod touch 5G"
#define IPOD_6G_NAMESTRING              @"iPod touch 6G"
#define IPOD_7G_NAMESTRING              @"iPod touch 7G"
#define IPOD_8G_NAMESTRING              @"iPod touch 8G"
#define IPOD_9G_NAMESTRING              @"iPod touch 9G"
#define IPOD_UNKNOWN_NAMESTRING         @"Unknown iPod"

#define IPAD_1G_NAMESTRING              @"iPad 1G"
#define IPAD_2G_NAMESTRING              @"iPad 2G"
#define IPAD_3G_NAMESTRING              @"iPad 3G"
#define IPAD_4G_NAMESTRING              @"iPad 4G"
#define IPAD_5G_NAMESTRING              @"iPad 5G"
#define IPAD_6G_NAMESTRING              @"iPad 6G"
#define IPAD_7G_NAMESTRING              @"iPad 7G"
#define IPAD_8G_NAMESTRING              @"iPad 8G"
#define IPAD_9G_NAMESTRING              @"iPad 9G"
#define IPAD_UNKNOWN_NAMESTRING         @"Unknown iPad"

#define APPLETV_2G_NAMESTRING           @"Apple TV 2G"
#define APPLETV_3G_NAMESTRING           @"Apple TV 3G"
#define APPLETV_4G_NAMESTRING           @"Apple TV 4G"
#define APPLETV_UNKNOWN_NAMESTRING      @"Unknown Apple TV"

#define IOS_FAMILY_UNKNOWN_DEVICE       @"Unknown iOS device"

#define SIMULATOR_NAMESTRING            @"iPhone Simulator"
#define SIMULATOR_IPHONE_NAMESTRING     @"iPhone Simulator"
#define SIMULATOR_IPAD_NAMESTRING       @"iPad Simulator"
#define SIMULATOR_APPLETV_NAMESTRING    @"Apple TV Simulator"

//iPhone 3G 以后各代的CPU型号和频率
#define IPHONE_3G_CPUTYPE               @"ARM11"
#define IPHONE_3G_CPUFREQUENCY          @"412MHz"
#define IPHONE_3GS_CPUTYPE              @"ARM Cortex A8"
#define IPHONE_3GS_CPUFREQUENCY         @"600MHz"
#define IPHONE_4_CPUTYPE                @"Apple A4"
#define IPHONE_4_CPUFREQUENCY           @"1GMHz"
#define IPHONE_4S_CPUTYPE               @"Apple A5 Double Core"
#define IPHONE_4S_CPUFREQUENCY          @"800MHz"

//iPod touch 4G 的CPU型号和频率
#define IPOD_4G_CPUTYPE                 @"Apple A4"
#define IPOD_4G_CPUFREQUENCY            @"800MHz"

#define IOS_CPUTYPE_UNKNOWN             @"Unknown CPU type"
#define IOS_CPUFREQUENCY_UNKNOWN        @"Unknown CPU frequency"

typedef enum {
    UIDeviceUnknown,
    
    UIDeviceSimulator,
    UIDeviceSimulatoriPhone,
    UIDeviceSimulatoriPad,
    UIDeviceSimulatorAppleTV,
    
    UIDevice1GiPhone,
    UIDevice3GiPhone,
    UIDevice3GSiPhone,
    UIDevice4iPhone,
    UIDevice4SiPhone,
    UIDevice5iPhone,
    UIDevice5cPhone,
    UIDevice5sPhone,
    UIDevice6iPhone,
    UIDevice6sPhone,
    UIDevice6plusPhone,
    
    UIDevice1GiPod,
    UIDevice2GiPod,
    UIDevice3GiPod,
    UIDevice4GiPod,
    UIDevice5GiPod,
    UIDevice6GiPod,
    UIDevice7GiPod,
    UIDevice8GiPod,
    UIDevice9GiPod,
    
    UIDevice1GiPad,
    UIDevice2GiPad,
    UIDevice3GiPad,
    UIDevice4GiPad,
    UIDevice5GiPad,
    UIDevice6GiPad,
    UIDevice7GiPad,
    UIDevice8GiPad,
    UIDevice9GiPad,
    
    UIDeviceAppleTV2,
    UIDeviceAppleTV3,
    UIDeviceAppleTV4,
    
    UIDeviceUnknowniPhone,
    UIDeviceUnknowniPod,
    UIDeviceUnknowniPad,
    UIDeviceUnknownAppleTV,
    UIDeviceIFPGA,
    
} UIDevicePlatform;

typedef enum {
    UIDeviceFamilyiPhone,
    UIDeviceFamilyiPod,
    UIDeviceFamilyiPad,
    UIDeviceFamilyAppleTV,
    UIDeviceFamilyUnknown,
    
} UIDeviceFamily;

/**
 设备分辨率
 */
typedef enum {
    /**
     *iPhone 1,3,3GS 标准分辨率(320x480px)
     */
    UIDeviceResolution_iPhone3      = 1,
    /**
     *iPhone 4,4S 高清分辨率(640x960px)
     */
    UIDeviceResolution_iPhone4      = 2,
    /**
     *iPhone 5 高清分辨率(640x1136px)
     */
    UIDeviceResolution_iPhone5      = 3,
    /**
     *iPhone 6 高清分辨率(750x1134px)
     */
    UIDeviceResolution_iPhone6      = 4,
    /**
     *iPhone 6Plus 高清分辨率(1242x2208px)
     */
    UIDeviceResolution_iPhone6Plus  = 5,
    /**
     * iPad 1,2 标准分辨率(1024x768px)
     */
    UIDevice_iPadStandardRes        = 20,
    /**
     * iPad 3 High Resolution(2048x1536px)
     */
    UIDevice_iPadHiRes              = 21
}UIDeviceResolution;


/**
 *  设备相关帮助类
 */
@interface TKDeviceHelper : NSObject

/**
 *  获取系统设备磁盘空间信息
 *
 *  @return 系统设备磁盘空间信息
 */
+(TKDeviceSpace *)getDeviceSpace;

/**
 *  获取设备电池量
 *
 *  @return 设备电池信息
 */
+(NSString *)getDeviceBatteryPer;

/**
 *  获取设备cpu的情况
 *
 *  @return 设备cpu的信息
 */
+(TKDeviceCpu *)getDeviceCpu;

/**
 *  获取设备内存的情况
 *
 *  @return 设备内存的信息
 */
+(TKDeviceMemory *)getDeviceMemory;

/**
 *  获取设备的唯一性id，这里取MAC地址,大于7.0的取identifierForVendor
 *
 *  @return 设备平台信息
 */
+(NSString *) getDeviceMac;

/**
 *  获取系统设备平台(系统自带的，没经过处理翻译)
 *
 *  @return 系统设备平台
 */
+(NSString *)getDevicePlatform;

/**
 *  获取平台类型
 *
 *  @return 获取平台类型
 */
+(UIDevicePlatform)getDevicePlatformType;

/**
 *  获取平台类型名称
 *
 *  @return 获取平台类型类型
 */
+(NSString *)getDevicePlatformInfo;

/**
 *  设备是否越狱
 *
 *  @return 是，否
 */
+ (BOOL) isDeviceJailBreak;

/**
 *  是否有蓝牙
 *
 *  @return 是，否
 */
+ (BOOL) isDeviceHasbluetooth;

/**
 *  获取总线的频率
 *
 *  @return 总线的频率
 */
+ (NSString *)getDeviceBusFrequency;

/**
 *  获取设备手机号
 *
 *  @return 手机号
 */
+ (NSString *)getDevicePhone;

/**
 *  获取当前设备的分辨率
 *
 *  @return 对应的分辨率类型
 */
+ (UIDeviceResolution)getDeviceResoluation;

/**
 *  获取当前设备的分辨率
 *
 *  @return 对应的分辨率类型
 */
+ (NSString *)getDeviceResoluationDescription;

/**
 *  获取设备的uuid
 *
 *  @return 获取设备的uuid
 */
+ (NSString *)getDeviceUUID;

/**
 *  获取系统版本号
 *
 *  @return 系统版本号
 */
+(NSString *)getDeviceSysVersion;

@end
