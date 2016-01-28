//
//  UIViewController+TabBarItem.h
//  CustomTabBarController
//
//  Created by lijinghua on 15/8/19.
//  Copyright (c) 2015年 lijinghua. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (TabBarItem)

+ (instancetype)viewContrllerTitle:(NSString*)title normalImage:(NSString*)normalImageName selectImageName:(NSString*)selectImageName;

@end
