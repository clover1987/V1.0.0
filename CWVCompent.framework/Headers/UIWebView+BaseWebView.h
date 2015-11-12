//
//  UIWebView+BaseWebView.h
//  TKApp
//
//  Created by liubao on 14-12-10.
//  Copyright (c) 2014年 liubao. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  @Author 刘宝, 2014-12-10 17:12:44
 *
 *  webView
 */
@interface UIWebView (BaseWebView)<UIWebViewDelegate,UIGestureRecognizerDelegate>

/**
 *  @Author 刘宝, 2014-12-11 13:12:50
 *
 *  加载图片名称
 */
@property (nonatomic,copy)NSString *loadingImg;

/**
 *  @Author 刘宝, 2014-12-11 13:12:50
 *
 *  是否正在加载
 */
@property (nonatomic,readonly)BOOL isLoading;

/**
 *  @Author 刘宝, 2015-04-10 16:04:26
 *
 *  webView手势
 */
@property (nonatomic,readonly)UITapGestureRecognizer *tapGestureRecognizer;

/**
 *  @Author 刘宝, 2015-04-10 16:04:26
 *
 *  webView手势
 */
@property (nonatomic,readonly)UILongPressGestureRecognizer *longGestureRecognizer;

/**
 *  @Author 刘宝, 2015-10-12 22:10:28
 *
 *  js对象名称
 */
@property (nonatomic,copy,readonly)NSString *jsCallBackName;

/**
 *  @Author 刘宝, 2014-12-11 12:12:37
 *
 *  隐藏上下滚动时出边界的后面的黑色的阴影
 */
-(void)hideGradientBackground;

/**
 *  @Author 刘宝, 2015-09-30 17:09:39
 *
 *  更新名称
 */
-(void)updateName:(NSString *)name;

@end