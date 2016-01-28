//
//  NSString+XYExtension.h
//  QQ聊天
//
//  Created by qianfeng on 15/8/31.
//  Copyright (c) 2015年 坏叔叔. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (XYExtension)
// 计算text文本 lable中size  获取lable的Size
- (CGSize)sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize;

@end
