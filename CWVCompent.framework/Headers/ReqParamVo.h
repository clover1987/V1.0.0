//
//  ReqParamVo.h
//  TKApp
//
//  Created by liubao on 14-11-24.
//  Copyright (c) 2014年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LoadInfo.h"

/**
 *  @Author 刘宝, 2014-11-26 10:11:11
 *
 *  Dao的类型
 */
typedef enum{
    DaoType_Http = 0,
    DaoType_Javascript = 1,
    DaoType_WebService = 2,
    DaoType_BUSV1 = 3,
    DaoType_BUSV2 = 4,
    DaoType_QUOTEV3 = 5
}DaoType;

/**
 *  @Author 刘宝, 2015-09-15 09:09:21
 *
 *  Dao请求模式
 */
typedef enum{
    /**
     *  @Author 刘宝, 2015-09-15 09:09:57
     *
     *  短连接
     */
    DaoMode_Short = 0,
    /**
     *  @Author 刘宝, 2015-09-15 09:09:12
     *
     *  长连接
     */
    DaoMode_Long = 1
}DaoMode;

/**
 *  @Author 刘宝, 2015-09-08 20:09:29
 *
 *  上传代理
 */
@protocol TKUploadDelegate <NSObject>

@optional

/**
 *  @Author 刘宝, 2015-09-08 20:09:03
 *
 *  显示进度百分比
 *
 *  @param newProgress
 */
- (void)showProgress:(float)newProgress;

/**
 *  @Author 刘宝, 2015-09-08 20:09:28
 *
 *  显示上传进度数据
 *
 *  @param loadInfo
 */
- (void)showProgressData:(LoadInfo *)loadInfo;

@end

/**
 *  请求对象
 */
@interface ReqParamVo : DynModel

/**
 *  流水号
 */
@property (nonatomic,copy)NSString *flowNo;

/**
 *  是否post请求
 */
@property (nonatomic,assign)BOOL isPost;

/**
 *  请求对象
 */
@property (nonatomic,retain)NSMutableDictionary *reqParam;

/**
 *  URL地址
 */
@property (nonatomic,copy)NSString *url;

/**
 *  是否调试
 */
@property (nonatomic,assign,setter = setIsDebug:,getter = isDebug)BOOL isDebug;

/**
 *  调用开始时间
 */
@property (nonatomic,assign)NSTimeInterval beginTime;

/**
 *  是否异步
 */
@property (nonatomic,assign)BOOL isAsync;

/**
 *  请求的协议
 */
@property (nonatomic,assign)DaoType protocol;

/**
 *  是否显示缓冲效果
 */
@property (nonatomic,assign)BOOL isShowWait;

/**
 *  @Author 刘宝, 2015-05-04 20:05:21
 *
 *  是否显示网络缓冲效果
 */
@property (nonatomic,assign)BOOL isShowNetworkWait;

/**
 *  缓冲效果的文字
 */
@property (nonatomic,copy)NSString *waitTip;

/**
 *  是否返回list数据
 */
@property (nonatomic,assign)BOOL isReturnList;

/**
 *  请求组号,如果是javascript请求，传对应浏览器对象的名称
 */
@property (nonatomic,copy)NSString *group;

/**
 *  数据处理函数
 */
@property (nonatomic,weak)id processDataFunc;

/**
 *  请求的头
 */
@property (nonatomic,retain)NSArray *fileds;

/**
 *  @Author 刘宝, 2014-11-26 22:11:51
 *
 *  扩展字段对象，目前javascript协议的时候传的是WebView对象，其他后面在定义
 */
@property (nonatomic,retain)id userInfo;

/**
 *  @Author 刘宝, 2014-11-25 17:11:31
 *
 *  数据服务代理对象
 */
@property(nonatomic,weak) id serviceDelegate;

/**
 *  @Author 刘宝, 2015-09-08 20:09:34
 *
 *  上传代理
 */
@property(nonatomic,weak)id<TKUploadDelegate> uploadDelegate;

/**
 *  @Author 刘宝, 2015-04-21 19:04:36
 *
 *  是否缓存
 */
@property(nonatomic,assign)BOOL isCache;

/**
 *  @Author 刘宝, 2015-04-22 10:04:46
 *
 *  是否上传文件
 */
@property(nonatomic,assign)BOOL isUpload;

/**
 *  @Author 刘宝, 2015-09-15 09:09:41
 *
 *  Dao请求模式,目前针对2进制socket协议有效，支持长短连接
 */
@property(nonatomic,assign)DaoMode daoMode;

/**
 *  @Author 刘宝, 2015-10-09 21:10:15
 *
 *  缓存时间，单位是秒
 */
@property(nonatomic,assign)NSInteger cacheTime;

/**
 *  @Author 刘宝, 2015-10-12 12:10:16
 *
 *  缓存类型
 */
@property(nonatomic,assign)CacheType cacheType;

/**
 *  @Author 刘宝, 2015-10-09 21:10:55
 *
 *  请求超时时间，单位秒
 */
@property(nonatomic,assign)NSInteger timeOut;

/**
 *  @Author 刘宝, 2015-10-26 13:10:56
 *
 *  自定义dao的实现类名称
 */
@property(nonatomic,copy)NSString *daoName;

@end
