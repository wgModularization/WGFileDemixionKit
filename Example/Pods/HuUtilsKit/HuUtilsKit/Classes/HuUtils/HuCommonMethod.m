//
//  HuCommonMethod.m
//  HuCategoryKit
//
//  Created by wanggang on 2018/8/22.
//

#import "HuCommonMethod.h"

@implementation HuCommonMethod

+ (UIFont *)systemFontOfSize:(CGFloat)fontSize WithStyleType:(NSString *)styleType{
    UIFont *font;
    if ([styleType isEqualToString:@"bold"]) {
        font = [UIFont fontWithName:@"HelveticaNeue-Bold" size:fontSize];
    }else{
        font = [UIFont fontWithName:@"PingFangSC-Regular" size:fontSize];
    }
    if (font == nil) {
        return [UIFont customFontSize:fontSize];
    }
    return font;
}

+ (UIFont *)systemFontOfSize:(CGFloat)fontSize
{
    return [[self class] systemFontOfSize:fontSize WithStyleType:@""];
}

//字体适配规则，除了5.5寸的其他都是标准的， 适配规则  标准（5.5寸）：20（38），24（44），28（48），32（52），36（54）
+ (UIFont *)systemFontOfPixelSize:(NSUInteger)pxSize
{
    return [[self class] systemFontOfPixelSize:pxSize withFontFace:@""];
}

+ (UIFont *)hfl_systemFontOfPixelSize:(NSUInteger)pxSize
{
    if(IS_SCREEN_40_INCH){
        return [[self class] systemFontOfPixelSize:pxSize-2 withFontFace:@""];
    }
    return [[self class] systemFontOfPixelSize:pxSize withFontFace:@""];
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

+ (UIColor *)uiColorFromString:(NSString *)clrString
{
    if ([clrString length] == 0) {
        return [UIColor clearColor];
    }
    
    if ( [clrString rangeOfString:@"#"].location != 0 )
    {
        // error
        return [UIColor redColor];
    }
    
    if ([clrString length] == 7)
    {
        clrString = [clrString stringByAppendingString:@"FF"];
    }
    
    if ([clrString length] != 9)
    {
        // error
        return [UIColor redColor];
    }
    
    const char * strBuf= [clrString UTF8String];
    
    unsigned long iColor = strtoul((strBuf+1), NULL, 16);
    typedef struct colorByte
    {
        unsigned char a;
        unsigned char b;
        unsigned char g;
        unsigned char r;
    }CLRBYTE;
    
    CLRBYTE  pclr ;
    memcpy(&pclr, &iColor, sizeof(CLRBYTE));
    
    return [UIColor colorWithRed:(pclr.r/255.0)
                           green:(pclr.g/255.0)
                            blue:(pclr.b/255.0)
                           alpha:(pclr.a/255.0)];
}

+ (UIView *)separateView:(CGRect)frame color:(UIColor*)color alpha:(CGFloat)alpha
{
    UIView *view = [[UIView alloc] initWithFrame:frame];
    view.backgroundColor = color;
    view.alpha = alpha;
    
    return view;
}

+ (UIView *)separateView:(CGRect)frame bgColor:(UIColor*)color lineColor:(UIColor*)lineColor
{
    CGFloat lineHeight = line_height/2.0;
    UIView *view = [[UIView alloc] initWithFrame:frame];
    view.backgroundColor = color;
    UIView *lableLine1 = [[UIView alloc] initWithFrame:CGRectMake(0, 0, frame.size.width, lineHeight)];
    lableLine1.alpha = 1.0;
    [view addSubview:lableLine1];
    lableLine1.backgroundColor = lineColor;
    UIView *lableLine2 = [[UIView alloc] initWithFrame:CGRectMake(0, frame.size.height - lineHeight, frame.size.width, lineHeight)];
    lableLine2.alpha = 1.0;
    [view addSubview:lableLine2];
    lableLine2.backgroundColor = lineColor;
    return view;
}

+ (void)setExtraCellLineHidden: (UITableView *)tableView
{
    UIView *view = [UIView new];
    view.backgroundColor = [UIColor clearColor];
    [tableView setTableFooterView:view];
}

//适配iOS11
+ (void)automaticTableviewBar:(UITableView *)tableView vc:(UIViewController *)vc{
#pragma mark -适配iOS11
    if([[[UIDevice currentDevice] systemVersion] floatValue]>=11){
#ifdef __IPHONE_11_0
        if (@available(iOS 11.0, *)) {
            tableView.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever;
            tableView.contentInset = UIEdgeInsetsMake( 0 , 0, 0, 0);
            tableView.scrollIndicatorInsets = tableView.contentInset;
            tableView.estimatedRowHeight = 0;
            tableView.estimatedSectionFooterHeight = 0;
            tableView.estimatedSectionHeaderHeight = 0;
        }
#endif
    }else{
        vc.automaticallyAdjustsScrollViewInsets = NO;
    }
}

@end
