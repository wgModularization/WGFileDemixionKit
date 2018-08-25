//
//  HuCommonView.h
//  317hu
//
//  Created by mac on 2018/6/4.
//  Copyright © 2018年 huangfeilong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <HuConfigsKit/HuConfigsHeader.h>

//含有一个确定按钮
@interface HuSimpleAlertView : UIView

@property (nonatomic, copy) blk_t confirmClick; //确定按钮回掉
- (instancetype)initWithMessage:(NSString*)message;
- (void)show;

@end


@interface HuCommonView : NSObject

/**
 显示简单的自定义类型提示框（需要点击按钮才消失）
 
 @param message 提示信息
 */
+ (void)showSimpleAlertViewAndBackToLogin:(NSString *)message confirmClick:(blk_t)confirmBlock;

@end
