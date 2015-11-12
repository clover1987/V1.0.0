//
//  TKAppBaseDelegate.h
//  TKAppBase_V1
//
//  Created by liubao on 15-2-6.
//  Copyright (c) 2015年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  @Author 刘宝, 2015-04-30 10:04:31
 *
 *  设备推送Token
 *
 */
#define CACHE_DEVICETOKEN @"deviceToken"

/**
 *  @Author 刘宝, 2015-05-11 09:05:39
 *
 *  注册远程苹果推送成功
 *
 */
#define RegisterForRemoteNotifications_Success @"RegisterForRemoteNotifications_Success"

/**
 *  @Author 刘宝, 2015-05-11 09:05:39
 *
 *  注册远程苹果推送失败
 *
 */
#define RegisterForRemoteNotifications_Failed @"RegisterForRemoteNotifications_Failed"

/**
 *  @Author 刘宝, 2015-05-11 09:05:39
 *
 *  接收到远程苹果推送的信息
 *
 */
#define ReceiveForRemoteNotifications @"ReceiveForRemoteNotifications"

/**
 *  @Author 刘宝, 2015-02-06 15:02:30
 *
 *  应用代理
 */
@interface TKAppBaseDelegate : UIResponder <UIApplicationDelegate>

/**
 *  @Author 刘宝, 2015-02-06 15:02:17
 *
 *  主窗口
 */
@property (strong, nonatomic) UIWindow *window;

/**
 *  @Author 刘宝, 2015-04-23 11:04:46
 *
 *  断开苹果推送服务
 */
-(void)disConnectIosPushServer;

/**
 *  @Author 刘宝, 2015-09-25 12:09:43
 *
 *  连接苹果推送服务，根据ios7或以上调用不同的API进行注册
 */
-(void)connectIosPushServer;

@end
