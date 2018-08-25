//
//  UILabel+Category.m
//  317hu
//
//  Created by yanChengYi on 2017/2/24.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#import "UILabel+Category.h"

@implementation UILabel (HSPXAdd)

+ (instancetype)customLablWithFrame:(CGRect)frame andTitle:(NSString *)text andFont:(UIFont *)font
{
    UILabel *label = [[UILabel alloc] initWithFrame:frame];
    label.text = text;
    label.font = font;
    
    return label;
}

- (CGSize)multipleLinesSizeWithLineSpacing:(CGFloat)lineSpacing andViewWidth:(CGFloat)viewWidth
{
    self.numberOfLines = 0;
    NSString *text = self.text;
    
    if ([text containsString:@"\n"]) {
        
        NSMutableAttributedString * attributedString1 = [[NSMutableAttributedString alloc] initWithString:text];
        NSMutableParagraphStyle * paragraphStyle = [[NSMutableParagraphStyle alloc] init];
        paragraphStyle.alignment = NSTextAlignmentJustified;
        [paragraphStyle setLineSpacing:lineSpacing];
        [attributedString1 addAttribute:NSParagraphStyleAttributeName value:paragraphStyle range:NSMakeRange(0, [text length])];
        NSArray *textArr = [text componentsSeparatedByString:@"\n"];
        CGFloat allRealHeight = 0;
        
        for(int i = 0; i < textArr.count; i++){
            NSString *text = textArr[i];
            if (text.length == 0) {
                text = @"oneLine";
            }
            
            CGFloat oneRowHeight = [@"oneLine" sizeWithAttributes:@{NSFontAttributeName:self.font}].height;
            CGSize textSize = [text boundingRectWithSize:CGSizeMake(viewWidth, MAXFLOAT) options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName:self.font} context:nil].size;
            CGFloat rows = ceil(textSize.height / oneRowHeight);
            CGFloat realHeight;
            realHeight = (rows * oneRowHeight) + (rows - 1) * lineSpacing;
            allRealHeight += realHeight;
        }
        allRealHeight += (textArr.count - 1) * lineSpacing;
        
        [self setAttributedText:attributedString1];
        return CGSizeMake(viewWidth, allRealHeight);
    }else{
        CGFloat oneRowHeight = [text sizeWithAttributes:@{NSFontAttributeName:self.font}].height;
        CGSize textSize = [text boundingRectWithSize:CGSizeMake(viewWidth, MAXFLOAT) options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName:self.font} context:nil].size;
        NSMutableAttributedString * attributedString1 = [[NSMutableAttributedString alloc] initWithString:text];
        NSMutableParagraphStyle * paragraphStyle = [[NSMutableParagraphStyle alloc] init];
        paragraphStyle.alignment = NSTextAlignmentJustified;
        [paragraphStyle setLineSpacing:lineSpacing];
        [attributedString1 addAttribute:NSParagraphStyleAttributeName value:paragraphStyle range:NSMakeRange(0, [text length])];
        
        CGFloat rows = textSize.height / oneRowHeight;
        CGFloat realHeight = oneRowHeight;
        if (rows > 1) {
            realHeight = (rows * oneRowHeight) + (rows - 1) * lineSpacing;
        }
        [self setAttributedText:attributedString1];
        return CGSizeMake(textSize.width, realHeight);
    }
    
}
@end
