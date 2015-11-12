//
//  GesturePasswordView.h
//  GesturePassword
//
//  Created by hb on 14-8-23.
//  Copyright (c) 2014年 黑と白の印记. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GesturePasswordTouchDelegate.h"
#import "GesturePasswordButtonDelegate.h"
#import "TentacleView.h"

/**
 *  @Author 刘宝, 2015-04-14 10:04:55
 *
 *  手势的界面
 */
@interface GesturePasswordView : UIView<GesturePasswordTouchDelegate,GesturePasswordButtonDelegate>

/**
 *  @Author 刘宝, 2015-04-14 09:04:52
 *
 *  初始化
 *
 *  @param frame 大小区域
 *  @param type 手势密码风格
 *  @param innerCircle 是否初始显示中心小圆
 *
 *  @return
 */
-(id)initWithFrame:(CGRect)frame style:(GesturePasswordType)type innerCircle:(BOOL)innerCircle;

/**
 *  @Author 刘宝, 2015-04-14 11:04:57
 *
 *  按钮事件处理代理
 */
@property (nonatomic,weak) id<GesturePasswordButtonDelegate> buttonDelegate;

/**
 *  @Author 刘宝, 2015-04-14 11:04:57
 *
 *  触摸滑动事件处理代理
 */
@property (nonatomic,weak) id<GesturePasswordTouchDelegate> touchDelegate;

/**
 *  @Author 刘宝, 2015-04-14 11:04:40
 *
 *  显示的用户图片
 */
@property (nonatomic,retain) UIImage *userImage;

/**
 *  @Author 刘宝, 2015-04-14 11:04:26
 *
 *  显示用户的账号信息
 */
@property (nonatomic,copy) NSString *userAccount;

/**
 *  @Author 刘宝, 2015-01-30 14:01:22
 *
 *  清理初始化原始手势界面
 */
- (void)resetGesturePassword;

/**
 *  @Author 刘宝, 2015-04-15 19:04:20
 *
 *  设置用户状态
 *
 *  @param state
 */
- (void)setUserState:(NSString *)state errorFlag:(BOOL)errorFlag;

/**
 *  @Author 刘宝, 2015-04-16 09:04:18
 *
 *  设置头部手势密码小图
 *
 *  @param password 密码
 */
- (void)setTitleGesturePassword:(NSString *)password;

@end
