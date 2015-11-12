//
//  TKRsaHelper.h
//  TKUtil_V1
//
//  Created by liubao on 15-7-14.
//  Copyright (c) 2015年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  @Author 刘宝, 2015-07-14 13:07:46
 *
 *  RSA加解密
 */
@interface TKRsaHelper : NSObject

/**
 *  @Author 刘宝, 2015-07-14 13:07:06
 *
 *  RSA公钥加密，对应要用RSA私钥解密
 *
 *  @param content 内容
 *  @param pubExpd 公钥部分
 *  @param module  加密模块
 *
 *  @return 加密后内容
 */
+(NSString *)rsaPublicKeyEncryptString:(NSString *)content pubExpd:(NSString *)pubExpd module:(NSString *)module;

/**
 *  @Author 刘宝, 2015-07-14 13:07:02
 *
 *  RSA私钥解密
 *
 *  @param content  内容
 *  @param pubExpd  公钥部分
 *  @param privExpd 私钥部分
 *  @param module   加密模块
 *
 *  @return 解密后内容
 */
+(NSString *)rsaPrivateKeyDecryptString:(NSString *)content pubExpd:(NSString *)pubExpd privExpd:(NSString *)privExpd module:(NSString *)module;

/**
 *  @Author 刘宝, 2015-07-14 13:07:41
 *
 *  RSA私钥加密
 *
 *  @param content  内容
 *  @param pubExpd  公钥部分
 *  @param privExpd 私钥部分
 *  @param module   加密模块
 *
 *  @return 加密后内容
 */
+(NSString *)rsaPrivateKeyEncryptString:(NSString *)content pubExpd:(NSString *)pubExpd privExpd:(NSString *)privExpd module:(NSString *)module;

/**
 *  @Author 刘宝, 2015-07-14 13:07:17
 *
 *  RSA公钥解密
 *
 *  @param content 内容
 *  @param pubExpd 公钥部分
 *  @param module  加密模块
 *
 *  @return 解密后内容
 */
+(NSString *)rsaPublicKeyDecryptString:(NSString *)content pubExpd:(NSString *)pubExpd module:(NSString *)module;

/**
 *  @Author 刘宝, 2015-07-14 14:07:11
 *
 *  利用证书公钥进行加密
 *
 *  @param content 内容
 *  @param certContent 证书内容Base64
 *
 *  @return 加密的内容
 */
+(NSString *)rsaEncryptString:(NSString *)content certContent:(NSString *)certContent;

@end
