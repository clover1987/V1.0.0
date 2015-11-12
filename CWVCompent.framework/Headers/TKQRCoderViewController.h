//
//  TKQRCoderViewController.h
//  TKAppBase_V1
//
//  Created by liubao on 15-6-23.
//  Copyright (c) 2015年 liubao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TKBaseViewController.h"

/**
 *  @Author 刘宝, 2015-06-23 15:06:41
 *
 *  生成图片二维码
 */
@interface TKQRCoderViewController : TKBaseViewController

/**
 *  @Author 刘宝, 2015-04-21 09:04:47
 *
 *  图片二维码内容
 */
@property(nonatomic,copy)NSString *content;

@end
