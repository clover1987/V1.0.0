//
//  TKKeyBoardDelegate.h
//  TKStockKeyBoardDemo
//
//  Created by liupm on 15-3-17.
//  Copyright (c) 2015年 liupm. All rights reserved.
//
/**
 键盘类型
 */
typedef enum
{
    /**
     *  @Author 刘宝, 2015-03-31 13:03:52
     *
     *  数字键盘
     */
    TKKeyBoardTypeNum = 0,
    /**
     *  @Author 刘宝, 2015-07-22 18:07:04
     *
     *  随机数字键盘
     */
    TKKeyBoardTypeRandNum = 1,
    /**
     *  @Author 刘宝, 2015-03-31 13:03:02
     *
     *  英文键盘
     */
    TKKeyBoardTypeAlpha = 2,
    /**
     *  @Author 刘宝, 2015-03-31 13:03:30
     *
     *  股票键盘
     */
    TKKeyBoardTypeStock = 3,
    /**
     *  @Author 刘宝, 2015-05-08 19:05:02
     *
     *  加强版随机数字键盘
     */
    TKKeyboardTypeRandNumStrong = 4,
    /**
     *  @Author 刘宝, 2015-05-08 19:05:02
     *
     *  交易买卖键盘
     */
    TKKeyboardTypeTrade = 5,
    /**
     *  @Author 刘宝, 2015-05-08 19:05:02
     *
     *  加强版有序数字键盘
     */
    TKKeyboardTypeNumStrong = 6
}TKKeyBoardType;

/**
 * @Author 刘鹏民, 14-11-25 15:11:04
 * 键盘代理
 */
@protocol TKKeyBoardDelegate <NSObject>

@optional

/**
 *  @Author 刘宝, 2015-03-31 13:03:19
 *
 *  追加字符
 *
 *  @param str 内容
 */
- (void)appendChar:(NSString *)charStr;

/**
 *  退格删除字符
 */
- (void)deleteChar;

/**
 * @Author 刘鹏民, 14-11-27 15:11:20
 *
 * 清空值
 * @param str
 */
-(void)clearValue;

/**
 * @Author 刘鹏民, 15-03-17 16:03:08
 *
 * 点击确定
 */
-(void)doConfirm;

/**
 *  @Author 刘宝, 2015-07-22 21:07:20
 *
 *  其他键
 *
 *  @param charStr 
 */
-(void)doOtherChar:(NSString *)charStr;

/**
 * @Author 刘鹏民, 14-11-25 11:11:11
 * 隐藏自定义键盘
 */
-(void)hideKeyBoard;

/**
 * @Author 刘鹏民, 14-11-25 11:11:11
 * 显示自定义键盘
 */
-(void)showKeyBoard;

/**
 * @Author 刘鹏民, 15-03-17 15:03:43
 *
 * 切换键盘
 */
- (void)changeKeyBoard;

/**
 * @Author 刘鹏民, 15-03-18 10:03:00
 *
 * 重新设置键盘
 */
- (void)resetKeyBoard;
@end