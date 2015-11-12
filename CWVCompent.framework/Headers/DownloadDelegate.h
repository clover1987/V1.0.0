//
//  DownloadDelegate.h


#import <Foundation/Foundation.h>
#import "ASIHTTPRequest.h"

@protocol DownloadDelegate <NSObject>
/**
 *  @Author 刘宝, 2015-02-04 22:02:46
 *
 *  开始下载
 *
 *  @param request
 */
-(void)startDownload:(ASIHTTPRequest *)request;

/**
 *  @Author 刘宝, 2015-02-04 22:02:58
 *
 *  正在下载
 *
 *  @param request
 */
-(void)updateCellProgress:(ASIHTTPRequest *)request;

/**
 *  @Author 刘宝, 2015-02-04 22:02:10
 *
 *  完成下载
 *
 *  @param request
 */
-(void)finishedDownload:(ASIHTTPRequest *)request;

/**
 *  @Author 刘宝, 2015-02-04 22:02:20
 *
 *  处理一个窗口内连续下载多个文件且重复下载的情况
 */
-(void)allowNextRequest;

/**
 *  @Author 刘宝, 2015-02-04 22:02:34
 *
 *  下载超时失败
 *
 *  @param request 
 */
-(void)failedDownloadTimeout:(ASIHTTPRequest *)request;

@end
