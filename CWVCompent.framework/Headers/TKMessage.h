//
//  TKMessage.h
//  TKApp
//
//  Created by liubao on 14-12-1.
//  Copyright (c) 2014年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TKUtil.h"

/**
 *  @Author 刘宝, 2014-12-09 16:12:05
 *
 *  消息模块
 */
@interface TKMessage : DynModel

/**
 *  @Author 刘宝, 2014-12-01 10:12:22
 *
 *  消息Id-------功能号
 */
@property(nonatomic,copy)NSString *messageId;

/**
 *  @Author 刘宝, 2014-12-01 10:12:48
 *
 *  消息内容
 */
@property(nonatomic,retain)NSMutableDictionary *messageBody;

/**
 *  @Author 刘宝, 2014-12-09 16:12:54
 *
 *  接收消息的模块名称
 */
@property(nonatomic,retain)NSString *moduleName;

/**
 *  @Author 刘宝, 2014-12-01 10:12:02
 *
 *  备用字段
 */
@property(nonatomic,retain)NSMutableDictionary *userInfo;

@end
