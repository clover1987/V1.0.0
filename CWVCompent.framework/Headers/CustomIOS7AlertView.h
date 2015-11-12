//
//  CustomIOS7AlertView.h
//  CustomIOS7AlertView
//
//  Created by Richard on 20/09/2013.
//  Copyright (c) 2013 Wimagguc.
//
//  Lincesed under The MIT License (MIT)
//  http://opensource.org/licenses/MIT
//

#import <UIKit/UIKit.h>

/**
 *  @Author 刘宝, 2014-12-15 10:12:09
 *
 *  弹窗口点击代理
 */
@protocol CustomIOS7AlertViewDelegate

/**
 *  @Author 刘宝, 2014-12-15 10:12:22
 *
 *  处理按钮点击事件
 *
 *  @param alertView   弹出层
 *  @param buttonIndex 按钮索引
 */
- (void)customIOS7dialogButtonTouchUpInside:(id)alertView clickedButtonAtIndex:(NSInteger)buttonIndex;

@end

/**
 *  @Author 刘宝, 2014-12-15 10:12:02
 *
 *  自定义弹出层
 */
@interface CustomIOS7AlertView : UIView<CustomIOS7AlertViewDelegate>

/**
 *  @Author 刘宝, 2014-12-15 10:12:16
 *
 *  父容器
 */
@property (nonatomic, retain) UIView *parentView;    // The parent view this 'dialog' is attached to
/**
 *  @Author 刘宝, 2014-12-15 10:12:44
 *
 *  弹出窗口容器
 */
@property (nonatomic, retain) UIView *dialogView;    // Dialog's container view

/**
 *  @Author 刘宝, 2014-12-15 10:12:57
 *
 *  自定义的内容组件
 */
@property (nonatomic, retain) UIView *containerView; // Container within the dialog (place your ui elements here)

/**
 *  @Author 刘宝, 2014-12-15 10:12:16
 *
 *  点击代理
 */
@property (nonatomic, assign) id<CustomIOS7AlertViewDelegate> delegate;

/**
 *  @Author 刘宝, 2014-12-15 10:12:25
 *
 *  按钮
 */
@property (nonatomic, retain) NSArray *buttonTitles;

/**
 *  @Author 刘宝, 2014-12-15 10:12:36
 *
 *  标题
 */
@property (nonatomic,copy)NSString *title;

/**
 *  @Author 刘宝, 2014-12-15 10:12:47
 *
 *  内容
 */
@property (nonatomic,copy)NSString *content;

/**
 *  @Author 刘宝, 2014-12-15 10:12:00
 *
 *  是否使用动画效果
 */
@property (nonatomic, assign) BOOL useMotionEffects;

/**
 *  @Author 刘宝, 2014-12-15 10:12:27
 *
 *  点击回调函数
 */
@property (copy) void (^onButtonTouchUpInside)(CustomIOS7AlertView *alertView, int buttonIndex) ;

- (id)init;

/*!
 DEPRECATED: Use the [CustomIOS7AlertView init] method without passing a parent view.
 */
- (id)initWithParentView: (UIView *)_parentView __attribute__ ((deprecated));

/**
 *  @Author 刘宝, 2014-12-15 10:12:46
 *
 *  显示
 */
- (void)show;

/**
 *  @Author 刘宝, 2014-12-15 10:12:58
 *
 *  关闭
 */
- (void)close;

- (IBAction)customIOS7dialogButtonTouchUpInside:(id)sender;

/**
 *  @Author 刘宝, 2014-12-15 10:12:12
 *
 *  设置回调函数
 *
 *  @param onButtonTouchUpInside <#onButtonTouchUpInside description#>
 */
- (void)setOnButtonTouchUpInside:(void (^)(CustomIOS7AlertView *alertView, int buttonIndex))onButtonTouchUpInside;

/**
 *  @Author 刘宝, 2014-12-15 10:12:07
 *
 *  屏幕翻转监听
 *
 *  @param notification
 */
- (void)deviceOrientationDidChange: (NSNotification *)notification;
- (void)dealloc;

@end
