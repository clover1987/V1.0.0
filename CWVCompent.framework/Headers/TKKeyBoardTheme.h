//
//  TKKeyBoardTheme.h
//  TKComponent_V1
//
//  Created by liubao on 15-5-7.
//  Copyright (c) 2015年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 *  @Author 刘宝, 2015-05-07 17:05:32
 *
 *  键盘主题
 */
@interface TKKeyBoardTheme : NSObject

/**
 *  @Author 刘宝, 2015-05-07 17:05:10
 *
 *  数字键盘按钮文字默认颜色
 */
@property (nonatomic,retain)UIColor *TKNumKeyBoard_Btn_Color;

/**
 *  @Author 刘宝, 2015-05-07 17:05:11
 *
 *  数字键盘按钮文字高亮颜色
 */
@property (nonatomic,retain)UIColor *TKNumKeyBoard_Btn_Highlight_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:13
 *
 *  数字键盘普通按钮背景颜色
 */
@property (nonatomic,retain)UIColor *TKNumKeyBoard_Btn_Background_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:13
 *
 *  数字键盘业务按钮背景颜色
 */
@property (nonatomic,retain)UIColor *TKNumKeyBoard_Btn_Other_Background_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:32
 *
 *  数字键盘按钮高亮颜色
 */
@property (nonatomic,retain)UIColor *TKNumKeyBoard_Btn_Highlight_Background_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:32
 *
 *  数字键盘背景色
 */
@property (nonatomic,retain)UIColor *TKNumKeyBoard_Background_Color;

/**
 *  @Author 刘宝, 2015-05-07 17:05:10
 *
 *  字母键盘按钮文字默认颜色
 */
@property (nonatomic,retain)UIColor *TKAlphaKeyBoard_Btn_Color;

/**
 *  @Author 刘宝, 2015-05-07 17:05:11
 *
 *  字母键盘按钮文字高亮颜色
 */
@property (nonatomic,retain)UIColor *TKAlphaKeyBoard_Btn_Highlight_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:46
 *
 *  字母键盘业务按钮背景颜色
 */
@property (nonatomic,retain)UIColor *TKAlphaKeyBoard_Btn_Other_Background_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:46
 *
 *  字母键盘普通按钮背景颜色
 */
@property (nonatomic,retain)UIColor *TKAlphaKeyBoard_Btn_Background_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:46
 *
 *  字母键盘提示框背景图
 */
@property (nonatomic,retain)NSString *TKAlphaKeyBoard_Tip_Background_Image;

/**
 *  @Author 刘宝, 2015-05-07 18:05:46
 *
 *  字母键盘删除键盘背景图
 */
@property (nonatomic,retain)NSString *TKAlphaKeyBoard_Delete_Background_Image;

/**
 *  @Author 刘宝, 2015-05-07 18:05:46
 *
 *  字母键盘大小写键盘背景图
 */
@property (nonatomic,retain)NSString *TKAlphaKeyBoard_Up_Background_Image;

/**
 *  @Author 刘宝, 2015-05-07 18:05:32
 *
 *  字母键盘背景色
 */
@property (nonatomic,retain)UIColor *TKAlphaKeyBoard_Background_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:17
 *
 *  股票键盘按钮默认文字颜色
 */
@property (nonatomic,retain)UIColor *TKStockKeyBoard_Btn_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:17
 *
 *  股票键盘按钮高亮文字颜色
 */
@property (nonatomic,retain)UIColor *TKStockKeyBoard_Btn_Highlight_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:32
 *
 *  股票键盘按钮高亮颜色
 */
@property (nonatomic,retain)UIColor *TKStockKeyBoard_Btn_Highlight_Background_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:13
 *
 *  股票键盘业务按钮背景颜色
 */
@property (nonatomic,retain)UIColor *TKStockKeyBoard_Btn_Other_Background_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:13
 *
 *  股票键盘普通按钮背景颜色
 */
@property (nonatomic,retain)UIColor *TKStockKeyBoard_Btn_Background_Color;

/**
 *  @Author 刘宝, 2015-05-07 18:05:32
 *
 *  股票键盘背景色
 */
@property (nonatomic,retain)UIColor *TKStockKeyBoard_Background_Color;

@end