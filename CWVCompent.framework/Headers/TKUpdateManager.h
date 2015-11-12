//
//  TKUpdateManager.h
//  TKApp
//
//  Created by liubao on 15-2-3.
//  Copyright (c) 2015年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DownloadDelegate.h"
/**
 *  @Author 刘宝, 2015-04-30 12:04:22
 *
 *  是否第一次装软件:软件升级重装，软件卸载重装,软件第一次装 等都算第一次
 */
#define CACHE_ISFIRSTINSTALL @"isFirstInstall"

/**
 *  @Author 刘宝, 2015-04-30 12:04:36
 *
 *  最近一次存储的app的版本号
 */
#define CACHE_APP_VERSION @"appVersion"

/**
 *  @Author 刘宝, 2015-10-29 18:10:02
 *
 *  APP关于H5的加载地址模式(0:安全沙箱，1:安装包)
 */
#define MEM_APP_H5_PATHMODE @"appH5PathMode"

/**
 *  @Author 刘宝, 2015-06-05 12:06:41
 *
 *  下载完成通知
 *
 */
#define NOTE_UPDATE_SUCCESS @"update_success"

/**
 *  @Author 刘宝, 2015-06-05 12:06:41
 *
 *  下载失败通知
 *
 */
#define NOTE_UPDATE_FAILED @"update_failed"

/**
 *  @Author 刘宝, 2015-02-03 16:02:19
 *
 *  下载组件
 */
@interface TKUpdateManager : NSObject<DownloadDelegate,UIAlertViewDelegate>

/**
 *  @Author 刘宝, 2015-02-04 14:02:27
 *
 *  初始化H5的环境
 */
-(void)initH5Context;

/**
 *  @Author 刘宝, 2015-02-03 18:02:30
 *
 *  单例模式
 *
 *  @return
 */
+(TKUpdateManager *)shareInstance;

/**
 *  @Author 刘宝, 2015-02-03 19:02:29
 *
 *  加载的容器
 */
@property(nonatomic,retain)UIView *contentView;

/**
 *  @Author 刘宝, 2015-02-03 16:02:31
 *
 *  更新服务器H5版本
 *
 *  @param url 下载地址
 *  @param version 展示版本号
 *  @param newVersionSn 版本下载内部序号
 *  @param isUpdateH5 是否更新H5
 *  @param tip 显示的提示框
 */
-(void)updateSoftware:(NSString *)url newVersion:(NSString *)version newVersionSn:(NSString *)versionSn isUpdateH5:(BOOL)isUpdateH5 tip:(NSString *)tip;

/**
 *  @Author 刘宝, 2015-02-03 16:02:31
 *
 *  更新服务器H5版本
 *
 *  @param url 下载地址
 *  @param version 展示版本号
 *  @param newVersionSn 版本下载内部序号
 *  @param isUpdateH5 是否更新H5
 */
-(void)updateSoftware:(NSString *)url newVersion:(NSString *)version newVersionSn:(NSString *)versionSn isUpdateH5:(BOOL)isUpdateH5;

@end