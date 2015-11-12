//
//  TKNetworkManager.h
//  TKApp
//
//  Created by liubao on 15-2-5.
//  Copyright (c) 2015年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResultVo.h"

/**
 *  @Author 刘宝, 2015-08-24 17:08:42
 *
 *  网络监听代理
 */
@protocol TKNetworkManagerDelegate <NSObject>

/**
 *  @Author 刘宝, 2015-08-24 17:08:15
 *
 *  测速结果
 *
 *  @param result
 */
-(void)pingTestResult:(ResultVo *)resultVo;

@end

/**
 *  @Author 刘宝, 2015-02-05 09:02:30
 *
 *  网络智能测速管理模块
 */
@interface TKNetworkManager : NSObject

/**
 *  @Author 刘宝, 2015-08-24 17:08:56
 *
 *  网络测速代理
 */
@property(nonatomic,weak)id<TKNetworkManagerDelegate> delegate;

/**
 *  @Author 刘宝, 2015-08-05 20:08:34
 *
 *  更新地址
 */
@property(nonatomic,copy)NSString *updateUrl;

/**
 *  @Author 刘宝, 2015-02-05 09:02:10
 *
 *  单例模式
 *
 *  @return
 */
+(TKNetworkManager*)shareInstance;

/**
 *  @Author 刘宝, 2015-04-13 12:04:16
 *
 *  设置服务站点映射列表
 *
 *  @param hostMap 服务站点映射对象
 */
-(void)setHostMap:(NSMutableDictionary *)hostMap;

/**
 *  @Author 刘宝, 2015-02-05 09:02:17
 *
 *  获取最快的网络环境
 *
 *  @param serverName 服务类别
 *
 *  @return 当前类别下最快的服务器地址
 */
-(NSString *)getFlastHost:(NSString *)serverName;

/**
 *  @Author 刘宝, 2015-02-05 14:02:02
 *
 *  开始测速
 */
-(void)startTest;

/**
 *  @Author 刘宝, 2015-08-24 10:08:20
 *
 *  测速某个站点下面的各个线路的速度
 *
 *  @param serverName
 */
-(void)startTest:(NSString *)serverName;

/**
 *  @Author 刘宝, 2015-08-24 17:08:29
 *
 *  设置自定义最快站点
 *
 *  @param serverName 服务名称
 *  @param host       最快站点
 */
-(void)setFlashHost:(NSString *)serverName host:(NSString *)host;

@end
