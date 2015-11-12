//
//  TKNetHelper.h
//  TKUtil
//
//  Created by liubao on 14-11-7.
//  Copyright (c) 2014年 liubao. All rights reserved.
//

/**
 *  移动网络运营商
 */
typedef enum{
    /**
     *  中国移动
     */
    China_Mobile,
    /**
     *  中国联通
     */
    China_Unicom,
    /**
     *  中国电信
     */
    China_Telecom,
    /**
     *  中国铁通
     */
    China_Tietong,
    /**
     *  未定义的
     */
    China_UnDefined
}PhoneOperator;

/**
 *  网络类型
 */
typedef enum{
    /**
     *  无网络
     */
    Network_No,
    /**
     *  2G
     */
    Network_2G,
    /**
     *  3G
     */
    Network_3G,
    /**
     *  4G
     */
    Network_4G,
    /**
     *  wifi
     */
    Network_WIFI,
    /**
     *  WWAN
     */
    Network_WWAN,
    /**
     *  未知
     */
    Network_UnDefined
}Network_Type;

#import <Foundation/Foundation.h>

/**
 *  网络帮组类
 */
@interface TKNetHelper : NSObject

/**
 *  是否可以连接上网络
 *
 *  @return 是，否
 */
+(BOOL)isConnectionAvailable;

/**
 *  获取手机网络运营商
 *
 *  @return 网络运营商
 */
+(PhoneOperator)getPhoneOperator;

/**
 *  根据状态栏获取网络类型
 *
 *  @return 网络类型
 */
+(Network_Type)getNetworkTypeByStatusBar;

/**
 *  根据网络检测状态获取网络类型
 *
 *  @return 网络类型
 */
+(Network_Type)getNetworkType;

/**
 *  @Author 刘宝, 2015-04-20 19:04:50
 *
 *  获取IP
 *
 *  @return 手机设备ip地址
 */
+(NSString *)getIP;
@end
