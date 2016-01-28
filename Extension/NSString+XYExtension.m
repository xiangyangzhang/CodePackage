//
//  NSString+XYExtension.m
//  QQ聊天
//
//  Created by qianfeng on 15/8/31.
//  Copyright (c) 2015年 坏叔叔. All rights reserved.
//

#import "NSString+XYExtension.h"

@implementation NSString (XYExtension)
- (CGSize)sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize
{
    NSDictionary *attrs = @{NSFontAttributeName : font};
    return [self boundingRectWithSize:maxSize options:NSStringDrawingUsesLineFragmentOrigin attributes:attrs context:nil].size;
}
@end
