//
//  TKMessageInvoke.h
//  TKApp
//
//  Created by liubao on 14-12-1.
//  Copyright (c) 2014年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResultVo.h"

/**
 界面切换动画效果
 */
typedef enum
{
    /**
     *  @Author 刘宝, 2015-03-31 15:03:32
     *
     *  无效果
     */
    TDAnimate_None,
    /**
     *  @Author 刘宝, 2015-03-31 15:03:39
     *
     *  从上往下
     */
    TDAnimate_UpToDown,
    /**
     *  @Author 刘宝, 2015-03-31 15:03:45
     *
     *  从下往上
     */
    TDAnimate_DownToUp,
    /**
     *  @Author 刘宝, 2015-03-31 15:03:52
     *
     *  渐变
     */
    TDAnimate_Fade,
    /**
     *  @Author 刘宝, 2015-03-31 15:03:58
     *
     *  从左向右
     */
    TDAnimate_LeftToRight,
    /**
     *  @Author 刘宝, 2015-03-31 15:03:04
     *
     *  从右向左
     */
    TDAnimate_RightToLeft
} TDAnimate;

/**
 *  @Author 刘宝, 2015-06-12 12:06:46
 *
 *  插件回调函数
 *
 *  @param param
 */
typedef void(^PluginCallBackFunc)(NSMutableDictionary *param);

/**
 *  @Author 刘宝, 2014-12-01 15:12:51
 *
 *  消息引擎处理
 */
@protocol TKAppInvokeDelegate <NSObject>

/**
 *  @Author 刘宝, 2014-12-24 13:12:16
 *
 *  调用插件
 *
 *  @param funcNo     功能号
 *  @param param      参数
 *  @param moduleName 模块名称
 *
 *  @return 
 */
-(ResultVo *)callPlugin:(NSString *)funcNo param:(id)param module:(NSString *)moduleName;

/**
 *  @Author 刘宝, 2014-12-24 13:12:16
 *
 *  调用插件
 *
 *  @param funcNo       功能号
 *  @param param        参数
 *  @param moduleName   模块名称
 *  @param callBackFunc 原生调用插件的回调函数
 *
 *  @return
 */
-(ResultVo *)callPlugin:(NSString *)funcNo param:(id)param module:(NSString *)moduleName callBackFunc:(PluginCallBackFunc)callBackFunc;

/**
 *  @Author 刘宝, 2014-12-09 21:12:58
 *
 *  页面跳转切换
 *
 *  @param pageCode   模块路径名称 例如xxxx/xxxx
 *  @param param      参数
 *  @param animate    切换动画
 */
-(void)invokeSwitchPage:(NSString *)pageCode param:(NSMutableDictionary *)param animate:(TDAnimate)animate;

/**
 *  @Author 刘宝, 2014-12-09 21:12:58
 *
 *  页面跳转切换
 *
 *  @param pageCode   模块路径名称 例如xxxx/xxxx
 *  @param param      参数
 */
-(void)invokeSwitchPage:(NSString *)pageCode param:(NSMutableDictionary *)param;

/**
 *  @Author 刘宝, 2015-06-11 10:06:37
 *
 *  页面跳转切换
 *
 *  @param srcPageCode   模块路径名称 例如xxxx/xxxx
 *  @param destPageCode  模块路径名称 例如xxxx/xxxx
 *  @param param         参数
 */
-(void)invokeSwitchPageFrom:(NSString *)srcPageCode to:(NSString *)destPageCode param:(NSMutableDictionary *)param;

/**
 *  @Author 刘宝, 2014-12-09 21:12:58
 *
 *  页面跳转切换
 *
 *  @param srcPageCode   模块路径名称 例如xxxx/xxxx
 *  @param destPageCode   模块路径名称 例如xxxx/xxxx
 *  @param param      参数
 *  @param animate    切换动画
 */
-(void)invokeSwitchPageFrom:(NSString *)srcPageCode to:(NSString *)destPageCode param:(NSMutableDictionary *)param animate:(TDAnimate)animate;

@end
