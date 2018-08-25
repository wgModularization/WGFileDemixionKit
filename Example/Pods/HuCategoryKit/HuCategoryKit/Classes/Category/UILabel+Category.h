//
//  UILabel+Category.h
//  317hu
//
//  Created by yanChengYi on 2017/2/24.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (HSPXAdd)

+ (instancetype)customLablWithFrame:(CGRect)frame andTitle:(NSString *)text andFont:(UIFont *)font ;

/*一般控制UILabel中文字不同风格显示的步骤
 1>先设置段落的风格NSMutableParagraphStyle/NSParagraphStyle;
 2>再设置NSAttributedString对象;
 3>NSAttributedString对象赋值给UILabel的attributedText;*/
- (CGSize)multipleLinesSizeWithLineSpacing:(CGFloat)lineSpacing andViewWidth:(CGFloat)viewWidth;

@end
