//
//  TKBaseService.h
//  TKApp
//
//  Created by liubao on 14-11-24.
//  Copyright (c) 2014年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TKServiceDelegate.h"
#import "TKServiceFilterDelegate.h"

/**
 *  @Author 刘宝, 2014-11-24 23:11:06
 *
 *  基础服务类
 */
@interface TKBaseService : NSObject<TKServiceDelegate,TKServiceFilterDelegate>
/**
 *  @Author 刘宝, 2014-11-26 13:11:14
 *
 *  服务器拦截器代理对象
 */
@property(nonatomic,weak)id<TKServiceFilterDelegate> filterDelegate;

@end
