//
//  TKASIHttpDao.h
//  TKApp
//
//  Created by liubao on 14-11-24.
//  Copyright (c) 2014年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TKBaseDao.h"
#import "ASIHTTPRequestDelegate.h"
#import "ASIProgressDelegate.h"
#import "TKServiceDelegate.h"

/**
 *  @Author 刘宝, 2015-07-25 18:07:58
 *
 *  统一登陆coockie
 */
#define MEM_OAUTH_CLIENT_INFO @"sso_client_info"

/**
 *  @Author 刘宝, 2014-11-24 22:11:04
 *
 *  同步，异步Http请求
 */
@interface TKASIHttpDao : TKBaseDao<ASIHTTPRequestDelegate,ASIProgressDelegate>

/**
 *  @Author 刘宝, 2014-11-25 15:11:20
 *
 *  单例模式
 *
 *  @return 单例
 */
+(TKASIHttpDao *)shareInstance;

@end
