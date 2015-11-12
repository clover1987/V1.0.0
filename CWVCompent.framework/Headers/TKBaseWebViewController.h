//
//  TKBaseWebViewController.h
//  TKAppBase_V1
//
//  Created by liubao on 15-4-10.
//  Copyright (c) 2015年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TKBaseViewController.h"
#import "TKJSCallBackManager.h"

/**
 *  @Author 刘宝, 2015-04-10 12:04:39
 *
 *  自定义webview控制器，用于拦截系统键盘，支持自定义原生键盘
 */
@interface TKBaseWebViewController : TKBaseViewController

/**
 *  @Author 刘宝, 2015-07-27 16:07:43
 *
 *  是否使用思迪自定义键盘(默认是YES)
 */
@property(nonatomic,assign)BOOL isUseTKKeyboard;

/**
 *  @Author 刘宝, 2015-07-29 09:07:54
 *
 *  是否支持统一登录，支持统一登录的话，每次切换webview模块时候，会主动调用一次js的50113功能号，进行模块初始化检测
 *  这个属性可以解决以前需要reload页面的问题，默认是NO
 */
@property(nonatomic,assign)BOOL isUseSSO;

/**
 *  @Author 刘宝, 2015-09-23 13:09:33
 *
 *  是否需要进行模块初始化检测的备用条件,这个和isUseSSO配合使用,在isUseSSO是Yes，并且isNeedReInitJSModule也是Yes的情况下，才会主动调用一次js的50113功能号，进行模块初始化检测,默认是YES
 */
@property(nonatomic,assign)BOOL isNeedReInitJSModule;

/**
 *  @Author 刘宝, 2015-07-27 17:07:53
 *
 *  webView的地址，服务器端的格式如:http://www.baidu.com?name=lubao
                  本地端的格式如:www/m/mall/index.html#!/business/index.html
 */
@property(nonatomic,copy)NSString *webViewUrl;

/**
 *  @Author 刘宝, 2015-07-27 17:07:19
 *
 *  状态栏样式
 */
@property(nonatomic,assign) UIStatusBarStyle statusBarStyle;

/**
 *  @Author 刘宝, 2015-07-28 13:07:00
 *
 *  状态栏背景颜色
 */
@property(nonatomic,retain)UIColor *statusBarBgColor;

/**
 *  @Author 刘宝, 2015-08-24 18:08:34
 *
 *  状态栏背景图片
 */
@property(nonatomic,retain)UIImage *statusBarBgImage;

/**
 *  @Author 刘宝, 2015-07-27 17:07:24
 *
 *  浏览器
 */
@property(nonatomic,readonly)UIWebView *webView;

/**
 *  @Author 刘宝, 2015-09-29 21:09:53
 *
 *  js对象
 */
@property(nonatomic,readonly)JSCallBack *jsCallBack;

/**
 *  @Author 刘宝, 2015-08-06 10:08:33
 *
 *  H5是否加载完成
 */
@property(nonatomic,readonly)BOOL isH5LoadFinish;

/**
 *  @Author 刘宝, 2015-10-13 14:10:30
 *
 *  浏览器的名称
 */
@property(nonatomic,copy)NSString *webViewName;

/**
 *  @Author 刘宝, 2015-07-27 18:07:42
 *
 *  进行WebView预加载
 */
-(void)prepareLoadWebView;

/**
 *  @Author 刘宝, 2015-08-06 10:08:22
 *
 *  h5加载完成自动触发函数
 */
-(void)h5LoadFinish;

@end
