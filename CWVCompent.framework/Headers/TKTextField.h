
/**
 * @Author 刘鹏民, 15-03-17 10:03:24
 *
 * 自定义键盘输入框
 */
#import <UIKit/UIKit.h>
#import "TKKeyBoardDelegate.h"
#import "TKKeyBoardInputDelegate.h"

/**
 *  @Author 刘宝, 2015-03-31 21:03:51
 *
 *  原生键盘输入框
 */
@interface TKTextField : UITextField<TKKeyBoardDelegate,TKKeyBoardInputDelegate>

/**
 *  @Author 刘宝, 2015-03-31 21:03:44
 *
 *  输入框代理
 */
@property (nonatomic, weak) id < UITextFieldDelegate,TKKeyBoardInputDelegate> delegate;

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