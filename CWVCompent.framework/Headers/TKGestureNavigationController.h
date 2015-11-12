//
//  MLNavigationController.h
//  MultiLayerNavigation
//
//  Created by Feather Chan on 13-4-12.
//  Copyright (c) 2013年 Feather Chan. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  @Author 刘宝, 2015-04-27 00:04:31
 *
 *  滑动返回导航栏
 */
@interface TKGestureNavigationController : UINavigationController<UIGestureRecognizerDelegate>

/**
 *  @Author 刘宝, 2015-04-27 00:04:27
 *
 *  是否可以滑动返回
 */
@property (nonatomic,assign) BOOL canDragBack;

/**
 *  @Author 刘宝, 2015-04-20 21:04:54
 *
 *  设置无效的滑动区域
 */
@property (nonatomic,assign)CGRect disEnabledFrame;

/**
 *  @Author 刘宝, 2015-07-07 09:07:19
 *
 *  截屏标准
 */
@property (nonatomic,assign)BOOL captureScreenFlag;

@end
