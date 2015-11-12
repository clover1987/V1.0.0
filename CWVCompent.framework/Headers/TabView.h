//
//  TabView.h
//  TKComponent_V1
//
//  Created by liubao on 15-9-10.
//  Copyright (c) 2015年 liubao. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  @Author 刘宝, 2015-09-10 03:09:52
 *
 *  tab切换头
 */
@interface TabView : UIView

/**
 *  @Author 刘宝, 2015-09-10 03:09:06
 *
 *  是否选择
 */
@property (nonatomic, getter = isSelected) BOOL selected;

/**
 *  @Author 刘宝, 2015-09-10 03:09:15
 *
 *  分割线颜色
 */
@property (nonatomic,retain) UIColor *indicatorColor;

/**
 *  @Author 刘宝, 2015-09-10 03:09:33
 *
 *  当前选择的背景色
 */
@property (nonatomic,retain) UIColor *currentTabSelectedColor;

/**
 *  @Author 刘宝, 2015-09-10 03:09:45
 *
 *  当前选择文字颜色
 */
@property (nonatomic,retain) UIColor *currentTabSelectedTextColor;

/**
 *  @Author 刘宝, 2015-09-10 03:09:55
 *
 *  没有选择的背景色
 */
@property (nonatomic,retain) UIColor *currentTabNormalColor;

/**
 *  @Author 刘宝, 2015-09-10 03:09:16
 *
 *  没有选择的背景颜色
 */
@property (nonatomic,retain) UIColor *currentTabNormalTextColor;

@end