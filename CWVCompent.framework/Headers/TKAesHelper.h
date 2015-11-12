//
//  TKAesHelper.h
//  TKUtil
//
//  Created by liubao on 14-11-6.
//  Copyright (c) 2014年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  AES帮助类
 */
@interface TKAesHelper : NSObject

/**
 *  Aes加密
 *
 *  @param string 字符串
 *  @param key    秘钥
 *
 *  @return 加密后的字符串
 */
+(NSString *)stringWithAesEncryptString:(NSString *)string withKey:(NSString *)key;

/**
 *  Aes加密
 *
 *  @param string 字符串
 *  @param key    秘钥
 *
 *  @return 加密后的数据
 */
+(NSData *)dataWithAesEncryptString:(NSString *)string withKey:(NSString *)key;

/**
 *  Aes加密
 *
 *  @param data 数据
 *  @param key    秘钥
 *
 *  @return 加密后的数据
 */
+(NSData *)dataWithAesEncryptData:(NSData *)data withKey:(NSString *)key;

/**
 *  Aes解密
 *
 *  @param string 字符串
 *  @param key    秘钥
 *
 *  @return 解密后的字符串
 */
+(NSString *)stringWithAesDecryptString:(NSString *)string withKey:(NSString *)key;

/**
 *  Aes解密
 *
 *  @param string 字符串
 *  @param key    秘钥
 *
 *  @return 解密后的数据
 */
+(NSData *)dataWithAesDecryptString:(NSString *)string withKey:(NSString *)key;

/**
 *  Aes解密
 *
 *  @param data 数据
 *  @param key    秘钥
 *
 *  @return 解密后的数据
 */
+(NSData *)dataWithAesDecryptData:(NSData *)data withKey:(NSString *)key;

@end
