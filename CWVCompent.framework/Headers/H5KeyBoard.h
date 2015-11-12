/**
 * @Author 刘鹏民, 14-11-25 10:11:51
 * h5调用的股票键盘
 */

#import <UIKit/UIKit.h>
#import "TKKeyBoardDelegate.h"

/**
 *  @Author 刘宝, 2015-03-31 13:03:12
 *
 *  针对H5对原生键盘改造
 */
@interface H5KeyBoard : NSObject<TKKeyBoardDelegate>

/**
 *  @Author 刘宝, 2015-03-31 16:03:57
 *
 *  键盘代理
 */
@property(nonatomic,weak) id<TKKeyBoardDelegate> delegate;

/**
 *  @Author 刘宝, 2015-03-31 21:03:21
 *
 *  限制长度
 */
@property(nonatomic,assign) NSInteger limitLength;

/**
 *  @Author 刘宝, 2015-03-31 16:03:06
 *
 *  键盘类型
 */
@property(nonatomic,assign) TKKeyBoardType tkKeyBoardType;

/**
 *  @Author 刘宝, 2015-04-01 09:04:26
 *
 *  确定按钮是否可用
 */
@property(nonatomic) BOOL confirmEnable;

/**
 *  @Author 刘宝, 2015-04-01 09:04:42
 *
 *  中英文切换按钮是否可用
 */
@property(nonatomic) BOOL changeEnable;

/**
 *  @Author 刘宝, 2015-04-01 09:04:13
 *
 *  确定按钮内容
 */
@property(nonatomic,strong) NSString *confirmStr;

@end