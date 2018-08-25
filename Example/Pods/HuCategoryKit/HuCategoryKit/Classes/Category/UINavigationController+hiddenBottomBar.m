//
//  UINavigationController+hiddenBottomBar.m
//  317hu
//
//  Created by bozhong on 2017/9/6.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#import "UINavigationController+hiddenBottomBar.h"
#import "NSObject+HuSwizzling.h"

@implementation UINavigationController (hiddenBottomBar)

+(void)load
{  
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        [self methodSwizzlingWithOriginalSelector:@selector(pushViewController:animated:) bySwizzledSelector:@selector(ex_pushViewController:animated:)];
    });
}

-(void)ex_pushViewController:(UIViewController *)viewController animated:(BOOL)animated
{
    //push之前隐藏Tab
    viewController.hidesBottomBarWhenPushed = YES;
    [self ex_pushViewController:viewController animated:animated];
}
@end
