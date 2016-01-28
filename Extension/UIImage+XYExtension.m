//
//  UIImage+XYExtension.m
//  QQ聊天
//
//  Created by qianfeng on 15/8/31.
//  Copyright (c) 2015年 坏叔叔. All rights reserved.
//

#import "UIImage+XYExtension.h"

@implementation UIImage (XYExtension)
// 拉伸图片 (方法提取)
+ (UIImage *)resizableImage:(NSString *)name {
    UIImage *normal = [UIImage imageNamed:name];
    CGFloat w = normal.size.width * 0.5;
    CGFloat h = normal.size.height * 0.5;
    // ios 5
    UIImage *lastNormal = [normal resizableImageWithCapInsets:UIEdgeInsetsMake(w, h, w, h) resizingMode:UIImageResizingModeTile];
    return lastNormal;
}
@end
