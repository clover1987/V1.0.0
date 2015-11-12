//
//  TKCommonService.h
//  TKApp
//
//  Created by liubao on 14-11-26.
//  Copyright (c) 2014年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TKBaseService.h"

/**
 *  @Author 刘宝, 2014-11-26 18:11:45
 *
 *  通用基础Service
 */
@interface TKCommonService :TKBaseService

/**
 *  @Author 刘宝, 2014-11-26 16:11:56
 *
 *  构建初始化请求对象
 */
-(ReqParamVo *)createReqParamVo;

/**
 *  @Author 刘宝, 2014-11-25 23:11:12
 *
 *  请求服务
 *
 *  @param reqParamVo   请求对象
 *  @param callBackFunc 回调函数
 *  @param isReturnList 是否返回List
 *  @param isRunInMainThread 回调函数是否在主线程上
 */
-(void)invoke:(ReqParamVo *)reqParamVo callBackFunc:(CallBackFunc)callBackFunc isReturnList:(BOOL)isReturnList isRunInMainThread:(BOOL)isRunInMainThread;

/**
 *  @Author 刘宝, 2014-11-25 23:11:12
 *
 *  请求服务
 *
 *  @param reqParamVo   请求对象
 *  @param callBackFunc 回调函数
 *  @param isRunInMainThread 回调函数是否在主线程上
 */
-(void)invoke:(ReqParamVo *)reqParamVo callBackFunc:(CallBackFunc)callBackFunc isRunInMainThread:(BOOL)isRunInMainThread;

/**
 *  @Author 刘宝, 2015-04-21 00:04:56
 *
 *  IOS调用JS
 *
 *  @param webViewName webView
 *  @param param       参数
 */
-(void)iosCallJs:(NSString *)webViewName param:(NSMutableDictionary *)param;

/**
 *  @Author 刘宝, 2015-04-22 10:04:09
 *
 *  IOS调用JS
 *
 *  @param webViewName webView 名称
 *  @param function    函数名称
 *  @param param       Json格式的JS入参
 */
-(void)iosCallJs:(NSString *)webViewName function:(NSString *)function param:(NSMutableDictionary *)param;

/**
 *  @Author 刘宝, 2015-04-22 10:04:53
 *
 *  IOS调用JS
 *
 *  @param webViewName webView 名称
 *  @param function    函数名称
 *  @param params      多个JS入参用,分割的，这里用数组表示
 */
-(void)iosCallJs:(NSString *)webViewName function:(NSString *)function params:(NSArray *)params;

/**
 *  @Author 刘宝, 2015-07-16 03:07:15
 *
 *  检测版本更新
 *
 *  @param url          检测地址
 *  @param callBackFunc 回调函数
 */
-(void)checkVersionUpdate:(NSString *)url callBackFunc:(CallBackFunc)callBackFunc;

/**
 *  @Author 刘宝, 2015-07-16 03:07:15
 *
 *  检测服务器列表更新
 *
 *  @param url          检测地址 例如：http://127.0.0.1:8080/servlet/json
 *  @param callBackFunc 回调函数
 */
-(void)checkServerXmlUpdate:(NSString *)url callBackFunc:(CallBackFunc)callBackFunc;

@end
