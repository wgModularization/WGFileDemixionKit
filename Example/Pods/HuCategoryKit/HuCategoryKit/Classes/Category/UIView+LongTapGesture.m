//
//  UIView+LongTapGesture.m
//  317hu
//
//  Created by 朱伟特 on 2017/4/14.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#import "UIView+LongTapGesture.h"
//#import "IndicationView.h"
#import <objc/runtime.h>

static void * strKey = &strKey;
static void * contentKey = &contentKey;
static void * longGesture = &longGesture;

static const char *ActionHandlerBlockKey;

@implementation UIView (LongTapGesture)

- (void)setShowTitle:(NSString *)showTitle
{
    objc_setAssociatedObject(self, & strKey, showTitle, OBJC_ASSOCIATION_COPY);
}
- (NSString *)showTitle
{
    return objc_getAssociatedObject(self, &strKey);
}
- (void)setShowContent:(NSString *)showContent
{
    objc_setAssociatedObject(self, & contentKey, showContent, OBJC_ASSOCIATION_COPY);
}
- (NSString *)showContent
{
    return objc_getAssociatedObject(self, &contentKey);
}
- (void)setLongGesture:(UILongPressGestureRecognizer *)longGesture
{
    objc_setAssociatedObject(self, @selector(property), longGesture, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (UILongPressGestureRecognizer *)longGesture
{
    return objc_getAssociatedObject(self, &longGesture);
}
- (void)addLongTapGesture:(NSString *)title content:(NSString *)content
{
    self.showTitle = title;
    self.showContent = content;
    self.userInteractionEnabled = YES;
    UILongPressGestureRecognizer * longGesture = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(longClick:)];
    self.longGesture = longGesture;
    self.longGesture.minimumPressDuration = 2.5;
    self.longGesture.delegate = self;
    [self addGestureRecognizer:longGesture];
}

- (void)longClick:(UILongPressGestureRecognizer *)gesture
{
    if (gesture.state == UIGestureRecognizerStateBegan) {
//        IndicationView * indicationView = [[IndicationView alloc] init];
//        [indicationView showMessage:self.showContent title:self.showTitle];
    }
}
- (void)removeGesture
{
    if (self.longGesture) {
        [self removeGestureRecognizer:self.longGesture];
    }
}


-(void)setTapActionBlock:(void(^)())block
{
    self.userInteractionEnabled = YES;
    
    UITapGestureRecognizer *gesture = objc_getAssociatedObject(self, &ActionHandlerBlockKey);
    
    if (!gesture) {
        gesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handleActionForTapGesture:)];
        [self addGestureRecognizer:gesture];
        objc_setAssociatedObject(self, &ActionHandlerBlockKey, gesture, OBJC_ASSOCIATION_RETAIN);
    }
    
    objc_setAssociatedObject(self, &ActionHandlerBlockKey, block, OBJC_ASSOCIATION_COPY);
}

- (void)handleActionForTapGesture:(UITapGestureRecognizer *)sender
{
    if(sender.state==UIGestureRecognizerStateRecognized){
        void(^action)() = objc_getAssociatedObject(self, &ActionHandlerBlockKey);
        if(action){
            action();
        }
    }
}
@end
