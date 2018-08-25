//
//  HuBaseCreatView.m
//  317hu
//
//  Created by bozhong on 2017/9/22.
//  Copyright © 2017年 huangfeilong. All rights reserved.
//

#import "HuBaseCreatView.h"

@implementation HuBaseCreatView
+ (UILabel *)creatLabelWithFont:(UIFont *)font textColor:(UIColor *)color
{
    UILabel *label = [UILabel new];
    label.font = font;
    label.textColor = color;
    return label;
}

+ (UIView *)creatViewWithBackgroundColor:(UIColor *)backgroundColor
{
    UIView *view = [UIView new];
    view.backgroundColor = backgroundColor;
    return view;
}

+ (UIButton *)creatBtnWithFont:(UIFont *)font textColor:(UIColor *)color
{
    UIButton *button = [UIButton new];
    [button setTitleColor:color forState:UIControlStateNormal];
    button.titleLabel.font = font;
    return button;
}

+ (UIImageView *)creatImageV:(NSString *)imageName
{
    UIImageView *imageV = [UIImageView new];
    imageV.image = IMG(imageName);
    return imageV;
}

@end


@interface HuComHeaderView()
{
    NSMutableArray *_objArr;//对象
}

@end

@implementation HuComHeaderView

+ (instancetype)initTitleArr:(NSArray *)titleArr valueArr:(NSArray *)valueArr{
    return [[self alloc] initTitleArr:titleArr valueArr:valueArr];
}

- (instancetype)initTitleArr:(NSArray *)titleArr valueArr:(NSArray *)valueArr{
    self = [super init];
    if (self) {
        [self initData];
        
        self.frame = CGRectMake(0, 0, HHBWIDTH, 90);
        self.alpha = 1.0;
        self.backgroundColor = [UIColor whiteColor];
        
        NSArray *values = valueArr;
        NSArray *textValues = titleArr;
        
        CGFloat width = HHBWIDTH/values.count;
        for(int i = 0; i < values.count; i++){
            CGFloat  yPos, height;
            UILabel *lab1 = [self creLabelWithFontSize:fs(48) textColor:huColor(#333333)];
            lab1.textAlignment = NSTextAlignmentCenter;
            [self addSubview:lab1];
            lab1.text = [values[i] stringValue];
            yPos = 20;
            height = 33;
            lab1.frame = CGRectMake(i * width, yPos, width, height);
            [_objArr addObject:lab1];
            
            UILabel *lab2 = [self creLabelWithFontSize:fs(26) textColor:huColor(#666666)];
            lab2.textAlignment = NSTextAlignmentCenter;
            [self addSubview:lab2];
            lab2.text = textValues[i];
            yPos = lab1.bottom + 5;
            height = 18.5;
            lab2.frame = CGRectMake(i * width, yPos, width, height);
            
        }
        //添加分割线
        for(int i = 0; i < values.count; i++){
            
            if (i <= values.count -1) {
                CGFloat lineWidth = line_width;
                UIView *lineV = [HuCommonMethod separateView:CGRectMake(width*i-lineWidth/2.0 , 0, lineWidth, 90) color:border_line_color alpha:1.0];
                [self addSubview:lineV];
            }
        }
    }
    return self;
}

+ (UIFont *)systemFontOfSize:(CGFloat)fontSize
{
    return [HuCommonMethod systemFontOfSize:fontSize WithStyleType:@""];
}

//字体适配规则，除了5.5寸的其他都是标准的， 适配规则  标准（5.5寸）：20（38），24（44），28（48），32（52），36（54）
+ (UIFont *)systemFontOfPixelSize:(NSUInteger)pxSize
{
    return [HuCommonMethod systemFontOfPixelSize:pxSize withFontFace:@""];
}

+ (UIFont *)hfl_systemFontOfPixelSize:(NSUInteger)pxSize
{
    if(IS_SCREEN_40_INCH){
        return [HuCommonMethod systemFontOfPixelSize:pxSize-2 withFontFace:@""];
    }
    return [HuCommonMethod systemFontOfPixelSize:pxSize withFontFace:@""];
}

+ (UIFont *)systemFontOfPixelSize:(NSUInteger)pxSize withFontFace:(NSString*)fontFace
{
    if ([fontFace length] <= 0) {
        fontFace = PingFangSC_Regular;
    }
    
    CGFloat tmp = pxSize;
    if(IS_SCREEN_55_INCH){
        tmp = kFontScale * pxSize;
    }
    CGFloat fontSize = tmp / 2.0;
    
    UIFont *font = [UIFont fontWithName:fontFace size:fontSize];
    //ios8.1 plus 没有标准字体，导致显示...
    if (font == nil) {
        font = [UIFont customFontWithName:@".HelveticaNeueInterface-Regular" size:fontSize];
    }
    
    return font;
}

- (UILabel *)creLabelWithFontSize:(UIFont *)fontSize textColor:(UIColor *)color{
    UILabel *tmpLabel;
    tmpLabel = [UILabel new];
    tmpLabel.font = fontSize;
    tmpLabel.textColor = color;
    tmpLabel.numberOfLines = 1;
    return tmpLabel;
}

- (void)initData{
    _objArr = @[].mutableCopy;
}

- (void)layoutAllView:(NSArray *)valueArr{
    for (NSInteger i = 0 ; i < valueArr.count && i < _objArr.count ; i++){
        UILabel *tempL = _objArr[i];
        tempL.text = valueArr[i];
    }

}

@end
