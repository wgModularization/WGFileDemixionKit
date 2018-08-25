//
//  UIView+LongTapGesture.h
//  317hu
//
//  Created by 朱伟特 on 2017/4/14.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^longPressure)(void);

@interface UIView (LongTapGesture)<UIGestureRecognizerDelegate>

@property (nonatomic, strong) UILongPressGestureRecognizer * longGesture;
@property (nonatomic, copy) NSString * showTitle;
@property (nonatomic, copy) NSString * showContent;
- (void)addLongTapGesture:(NSString *)title content:(NSString *)content;
- (void)removeGesture;

-(void)setTapActionBlock:(void(^)())block;

@end
