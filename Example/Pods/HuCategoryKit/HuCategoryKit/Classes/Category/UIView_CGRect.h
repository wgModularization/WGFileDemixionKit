//
//  UIView_CGRect.h
//  317hu
//
//  Created by Curious on 2016/12/15.
//  Copyright © 2016年 伯仲. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIView (RectSize)

@property (nonatomic, assign) CGSize size;

@property (nonatomic, assign) CGFloat x;

@property (nonatomic, assign) CGFloat y;

@property (nonatomic, assign) CGFloat top;

@property (nonatomic, assign) CGFloat bottom;

@property (nonatomic, assign) CGFloat left;

@property (nonatomic, assign) CGFloat right;

@property (nonatomic, assign) CGFloat centerX;

@property (nonatomic, assign) CGFloat centerY;

@property (nonatomic, assign) CGFloat width;

@property (nonatomic, assign) CGFloat height;

@end


@interface UIView (viewContorller)

- (UIViewController*)viewController;
- (UINavigationController*)navigationController;

@end
