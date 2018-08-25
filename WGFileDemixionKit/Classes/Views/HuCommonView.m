//
//  HuCommonView.m
//  317hu
//
//  Created by mac on 2018/6/4.
//  Copyright © 2018年 huangfeilong. All rights reserved.
//

#import "HuCommonView.h"
#import "NSString+LabelWidthAndHeight.h"
#import <HuCategoryKit/UIView_CGRect.h>

#define simpleAlertView_margin (50)
#define simpleAlertView_contentView_width (HHBWIDTH - 2*simpleAlertView_margin)
#define simpleAlertView_btn_height (42)

@interface HuSimpleAlertView()
@property (nonatomic, strong) NSString *message;

@property (nonatomic, strong) UIView *contentView;
@property (nonatomic, strong) UILabel *titleL;
@property (nonatomic, strong) UILabel *contentL;
@property (nonatomic, strong) UIView *lineV;
@property (nonatomic, strong) UIButton *confirmB;

@end

@implementation HuSimpleAlertView

- (instancetype)initWithMessage:(NSString*)message{
    self = [super init];
    if (self) {
        self.message = message;
        [self initView];
    }
    return self;
}

- (void)initView{
    self.frame = CGRectMake(0, 0, HHBWIDTH, HHBHEIGHT);
    UIView * blackBgView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, HHBWIDTH, HHBHEIGHT)];
    blackBgView.backgroundColor = [UIColor blackColor];
    blackBgView.alpha = 0.33;
    [self addSubview:blackBgView];
    
    [self initContentView];
}

- (void)initContentView{
    self.contentView = [[UIView alloc] init];
    self.contentView.backgroundColor = fontcolor_C1;
    self.contentView.layer.cornerRadius = 7.0;
    [self addSubview:self.contentView];
    
    self.titleL = [UILabel new];
    _titleL.text = @"提示";
    _titleL.textAlignment = NSTextAlignmentCenter;
    _titleL.font = fs(32);
    [self.contentView addSubview:_titleL];
    
    self.contentL = [UILabel new];
    _contentL.text = self.message;
    _contentL.textAlignment = NSTextAlignmentCenter;
    _contentL.numberOfLines = 0;
    _contentL.font = fs(28);
    [self.contentView addSubview:_contentL];
    
    self.lineV = [UIView new];
    _lineV.backgroundColor = border_line_color;
    [self.contentView addSubview:_lineV];
    
    self.confirmB = [[UIButton alloc] init];
    [_confirmB setTitle:@"知道了" forState:UIControlStateNormal];
    [_confirmB setTitleColor:mainColor forState:UIControlStateNormal];
    [_confirmB addTarget:self action:@selector(confirmBtnClick:) forControlEvents:UIControlEventTouchUpInside];
    [self.contentView addSubview:_confirmB];
    
    //更新试图
    [self layoutAllView];
}

- (void)layoutAllView
{
    CGFloat xPos, yPos, width, height, contentViewWidth;
    CGSize size;
    UILabel *tmpLabel;
    
    contentViewWidth = simpleAlertView_contentView_width;
    
    
    yPos = 14;
    //up
    tmpLabel = _titleL;
    size = [tmpLabel.text sizeWithAttributes: @{NSFontAttributeName:tmpLabel.font}];
    width = size.width, height = size.height;
    xPos = (contentViewWidth - width)/2.0;
    _titleL.frame = CGRectMake(xPos, yPos, width, height);
    
    tmpLabel = _contentL;
    xPos = 20;
    width = contentViewWidth - 2*width;
    height = [tmpLabel.text heightWithStringFont:tmpLabel.font fixedWidth:width];
    yPos = _titleL.bottom + 5;
    _contentL.frame = CGRectMake(xPos, yPos, width, height);
    
    yPos = _titleL.bottom  + 5 + height + 10;
    xPos = 0;
    width = contentViewWidth;
    height = line_height /2.0;
    _lineV.frame = CGRectMake(xPos, yPos, width, height);
    
    
    xPos = 0;
    width = contentViewWidth;
    yPos = _lineV.bottom;
    height = simpleAlertView_btn_height;
    _confirmB.frame = CGRectMake(xPos, yPos, width, height);
    
    
    height = _confirmB.bottom;
    self.contentView.frame = CGRectMake(simpleAlertView_margin, 0, contentViewWidth, height);
    self.contentView.center = self.center;
}

- (void)confirmBtnClick:(UIButton*)btn
{
    self.confirmClick();
    [self dismiss];
}

- (void)show{
    [[UIApplication sharedApplication].keyWindow addSubview:self];
}

- (void)dismiss
{
    [self removeFromSuperview];
}


@end

@interface HuCommonView ()

@end

@implementation HuCommonView

+ (void)showSimpleAlertViewAndBackToLogin:(NSString *)message confirmClick:(blk_t)confirmBlock{
    HuSimpleAlertView *alertView = [[HuSimpleAlertView alloc] initWithMessage:message];
    alertView.confirmClick = ^{
        confirmBlock();
    };
    [alertView show];
}


@end
