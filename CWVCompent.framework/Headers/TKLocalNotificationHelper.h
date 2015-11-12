//
//  TKLocalNotificationHelper.h
//  TKUtil_V1
//
//  Created by liubao on 14-11-10.
//  Copyright (c) 2014年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  本地消息帮组类
 */
@interface TKLocalNotificationHelper : NSObject

/**
 *  发送本地消息通知
 *
 *  @param fireDate 时间
 *  @param title   标题
 *  @param msg     内容
 */
+(void)sendNotification:(NSDate*)fireDate title:(NSString*)title msg:(NSString*)msg;

/**
 *  发送本地消息通知
 *
 *  @param fireDate   时间
 *  @param title     标题
 *  @param msg       内容
 *  @param viewTitle 查看标题
 */
+(void)sendNotification:(NSDate*)fireDate title:(NSString*)title msg:(NSString*)msg viewTitle:(NSString*)viewTitle;

/**
 *  发送本地消息通知
 *
 *  @param fireDate   时间
 *  @param title     标题
 *  @param msg       内容
 *  @param viewTitle 查看标题
 *  @param dataDic   携带的数据
 */
+(void)sendNotification:(NSDate*)fireDate title:(NSString*)title msg:(NSString*)msg viewTitle:(NSString*)viewTitle userInfo:(NSDictionary*)dataDic;

/**
 *  取消所有
 */
+(void)cancelAll;

@end
