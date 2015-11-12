//
//  TentacleView.h
//  GesturePassword
//
//  Created by hb on 14-8-23.
//  Copyright (c) 2014年 黑と白の印记. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "GesturePasswordTouchDelegate.h"
#import "UIView+TKBaseView.h"

/**
 手势密码类型
 */
typedef enum
{
    /**
     *  @Author 刘宝, 2015-04-14 14:04:19
     *
     *  设置
     */
    GesturePasswordType_Set,
    
    /**
     *  @Author 刘宝, 2015-04-14 14:04:26
     *
     *  验证
     */
    GesturePasswordType_Vertify,
    
    /**
     *  @Author 刘宝, 2015-06-09 21:06:13
     *
     *  取消
     */
    GesturePasswordType_Cancel,
    
    /**
     *  @Author 刘宝, 2015-10-30 00:10:34
     *
     *  修改
     */
    GesturePasswordType_Reset
    
} GesturePasswordType;

/**
 *  @Author 刘宝, 2015-01-30 14:01:24
 *
 *  手势内容组件
 */
@interface TentacleView : UIView

/**
 *  @Author 刘宝, 2015-04-14 09:04:52
 *
 *  手势密码触摸动作代理
 */
@property (nonatomic,weak) id<GesturePasswordTouchDelegate> delegate;

/**
 *  @Author 刘宝, 2015-04-14 09:04:52
 *
 *  初始化
 *
 *  @param frame 大小区域
 *  @param type 手势密码风格
 *  @param innerCircle 是否初始化显示中心小圆
 *
 *  @return 
 */
-(id)initWithFrame:(CGRect)frame style:(GesturePasswordType)type innerCircle:(BOOL)innerCircle;

/**
 *  @Author 刘宝, 2015-01-30 14:01:22
 *
 *  清理初始化原始手势界面
 */
- (void)resetGesturePassword;

@end
