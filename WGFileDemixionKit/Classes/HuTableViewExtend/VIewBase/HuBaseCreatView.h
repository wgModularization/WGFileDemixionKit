//
//  HuBaseCreatView.h
//  317hu
//
//  Created by bozhong on 2017/9/22.
//  Copyright © 2017年 huangfeilong. All rights reserved.
//  创建UI控件的类

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HuBaseCreatView : NSObject

+ (UILabel *)creatLabelWithFont:(UIFont *)font textColor:(UIColor *)color;

+ (UIView *)creatViewWithBackgroundColor:(UIColor *)backgroundColor;

+ (UIButton *)creatBtnWithFont:(UIFont *)font textColor:(UIColor *)color;

+ (UIImageView *)creatImageV:(NSString *)imageName;

@end


@interface HuComHeaderView: UIView

/**
 创建功能表头视图 【eg 管理页面培训详情】
 
 @param titleArr
 @param valueArr
 */
+ (instancetype)initTitleArr:(NSArray *)titleArr valueArr:(NSArray *)valueArr;

/**
 根据最新值刷新视图
 */
- (void)layoutAllView:(NSArray *)valueArr;

@end
