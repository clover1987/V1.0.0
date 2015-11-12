//
//  TKImageCropperManager.h
//  TKAppBase_V1
//
//  Created by liubao on 15-7-23.
//  Copyright (c) 2015年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef enum {
    /**
     *  @Author 刘宝, 2015-07-23 14:07:31
     *
     *  简单剪切版本
     */
    ImageCropperMode_Simple = 0,
    
    /**
     *  @Author 刘宝, 2015-07-23 14:07:04
     *
     *  加强剪切版本
     */
    ImageCropperMode_Strong = 1,
    
    /**
     *  @Author 刘宝, 2015-07-23 14:07:17
     *
     *  综合功能版本
     */
    ImageCropperMode_All = 2
}ImageCropperMode;

/**
 *  @Author 刘宝, 2015-07-23 16:07:20
 *
 *  代理类
 */
@protocol TKImageCropperManagerDelegate <NSObject>

/**
 *  @Author 刘宝, 2015-07-23 16:07:04
 *
 *  处理最后的图片
 *
 *  @param image
 */
-(void)processCropperImage:(UIImage *)image;

@end

/**
 *  @Author 刘宝, 2015-07-23 10:07:08
 *
 *  图片上传管理器
 */
@interface TKImageCropperManager : NSObject

/**
 *  @Author 刘宝, 2015-07-23 14:07:10
 *
 *  模式，默认为简单剪切模式
 */
@property(nonatomic,assign)ImageCropperMode imageCropperMode;

/**
 *  @Author 刘宝, 2015-07-23 16:07:58
 *
 *  代理
 */
@property(nonatomic,weak)id<TKImageCropperManagerDelegate> delegate;

/**
 *  @Author 刘宝, 2015-02-03 18:02:30
 *
 *  单例模式
 *
 *  @return
 */
+(TKImageCropperManager *)shareInstance;

/**
 *  @Author 刘宝, 2015-07-23 10:07:08
 *
 *  显示选择菜单
 */
-(void)showChoiceSheet;

/**
 *  @Author 刘宝, 2015-07-23 15:07:30
 *
 *  直接编辑图片
 *
 *  @param image
 */
-(void)editImage:(UIImage *)image;

@end
