//
//  TKCertLib.h
//  TKCertLib
//
//  Created by chensj on 14-2-26.
//  Copyright (c) 2014年 chensj. All rights reserved.
//  
/**
 使用示例：
 
 1，在程序运行期间需要load一次（程序初始化时load）：
 //[TKCertLib loadLicense:@"5FC35BF40FF544B01AFCFCB61CE52BAF7B6B2BACC45AEF1C4B288D2C63D34B2823950A3A73DF6B841C8B969F4F3221B853FCC9024842DB24"];
 
 2,创建p10
 //NSMutableString *p10 = [NSMutableString string];
 //int ret =[[TKCertLib share] createPKCS10:p10 pwd:@"123456"];
 //NSLog(@"--------------PKCS10:\n%@",p10);
 
 3,下载证书签名
 // [[TKCertLib share] importCert:@"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"];
 
 // NSString *ret =[[TKCertLib share] sign:@"thinkive1000" target:nil signType:TK_SIGN_TYPE_DETACH];
 // NSLog(@"----------ret-----------\n%@",ret);
 
 */
#import <Foundation/Foundation.h>

#define TK_algorithm_MD5 @"md5"
#define TK_algorithm_SHA1 @"sha1"

#define TK_SIGN_TYPE_ATTACH 1  //暂不支持
#define TK_SIGN_TYPE_DETACH 2
#define TK_SIGN_TYPE_RAW 3   //暂不支持

///error def
#define ERR_CERT_UNDEF 99

#define ERR_CREATEP10_OK 0
#define ERR_CREATEP10_GENERATE 1
#define ERR_CREATEP10_SAVE 2
#define ERR_CREATEP10_READ 3

#define ERR_IMPORT_OK 0
#define ERR_IMPORT_PARSE 1
#define ERR_IMPORT_VERIFY 2

struct stuSUBJECT//个体信息
{
    char C[128];//国家
    char ST[128];//省份
    char L[128];//城市
    char O[128];//组织
    char OU[128];//组织部门
    char CN[128];//个人信息
    char MAIL[128];//电子邮件
    char PMAIL[128];//安全电子邮件
    char T[128];//头衔
    char D[128];//描述
    char G[128];//曾用名
    char I[128];//描述
    char NAME[128];//描述
    char S[128];//描述
    char QUAL[128];//描述
    char STN[128];//没有结构的名称
    char PW[128];//挑战密码
    char ADD[128];//无结构地址
    
    
};

@interface TKCertLib : NSObject

+(void)loadLicense:(NSString*)license;

+(TKCertLib*)share;

/**
 生成P10
 return ERR_CREATEP10_XX，p10为pkcs10.
 */
-(int)createPKCS10:(NSMutableString *)p10 pwd:(NSString *)pwd userID:(NSString *)userid;

/**
 安装证书
 return ERR_IMPORT_XX
 */
-(int)importCert:(NSString*)content userID:(NSString*)userid;

/**
 签名
 return 空则签名失败，否则返回签名后base64信息
 */
-(NSString*)sign:(NSString*)sourceStr signType:(int)sType userID:(NSString*)userid;

/**
 *  @Author 刘宝, 2015-07-17 14:07:41
 *
 *  删除证书
 *
 *  @param userid
 */
-(void)clearAllCer :(NSString *)userid;

@end
