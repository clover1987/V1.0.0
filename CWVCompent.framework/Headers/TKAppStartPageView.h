//
//  TKAPPStartPageView.h
//  TKAppBase_V1
//
//  Created by liubao on 15-6-8.
//  Copyright (c) 2015年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  @Author 刘宝, 2015-06-08 09:06:17
 *
 *  引导页控件
 */
@interface TKAppStartPageView : UIView<UIScrollViewDelegate>

/**
 *  @Author 刘宝, 2015-06-08 10:06:48
 *
 *  引导页内容
 */
@property (nonatomic,strong)NSArray *pageViews;

/**
 *  @Author 刘宝, 2015-06-08 10:06:43
 *
 *  是否显示翻页标签
 */
@property (nonatomic,assign)BOOL showPageIndicator;

@end
