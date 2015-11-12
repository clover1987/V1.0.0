//
//  TKMd5Helper.h
//  TKUtil
//
//  Created by liubao on 14-11-6.
//  Copyright (c) 2014年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  MD5帮组类
 */
@interface TKMd5Helper : NSObject

/**
 *  MD5摘要算法
 *
 *  @param str 要编码的字符串
 *
 *  @return 编码后的字符串
 */
+(NSString *)md5Encrypt:(NSString *)str;

@end
