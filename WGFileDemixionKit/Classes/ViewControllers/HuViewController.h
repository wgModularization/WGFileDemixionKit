//
//  HuViewController.h
//  317hu
//
//  Created by yanChengYi on 2017/3/9.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HuViewController : UIViewController

/**
 设置默认图片

 @param count cout大于0显示默认图片
 */
- (void)dealDefaultView:(NSInteger)count;
- (void)dealDefaultView:(NSInteger)count withParentView:(UIView*)superView;
/**
 修改默认背景图片

 @param imageName 图片名字
 @param hint 默认提示
 */
- (void)setDefatultImage:(NSString*)imageName andHint:(NSString*)hint;

/**
 重新设置背景图片frame,避免覆盖需要显示的部分

 @param frame 新的frame
 */
- (void)setDefaultViewFrame:(CGRect)frame;

/**
 导航栏透明
 */
- (void)navBarTransparent;

/**
 导航栏不透明
 */
- (void)navBarNoTransparent;

@end
