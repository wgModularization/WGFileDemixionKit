//
//  UIColor+Extended.m
//  frame
//
//  Created by duonuo on 14-6-20.
//  Copyright (c) 2014年 duonuo. All rights reserved.
//

#import "UIColor+Extended.h"

@implementation UIColor (extended)

+ (UIColor *)hexChangeFloat:(NSString *)hexColor withAlpha:(CGFloat)alpha
{
    if ([hexColor length]<6) {
        return nil;
    }
    
    unsigned int red_, green_, blue_;
    NSRange exceptionRange;
    exceptionRange.length = 2;
    
    //red
    exceptionRange.location = 0;
    [[NSScanner scannerWithString:[hexColor substringWithRange:exceptionRange]]scanHexInt:&red_];
    
    //green
    exceptionRange.location = 2;
    [[NSScanner scannerWithString:[hexColor substringWithRange:exceptionRange]]scanHexInt:&green_];
    
    //blue
    exceptionRange.location = 4;
    [[NSScanner scannerWithString:[hexColor substringWithRange:exceptionRange]]scanHexInt:&blue_];
    
    UIColor *resultColor = [UIColor colorWithRed:(CGFloat)red_/255. green:(CGFloat)green_/255. blue:(CGFloat)blue_/255. alpha:alpha];
    return resultColor;
}

+ (UIColor *)hexChangeFloat:(NSString *)hexColor
{
    return [self hexChangeFloat:hexColor withAlpha:1];
}
+ (UIColor *)appBgColor
{
    return [self colorWithRed:241 / 255.0 green:244 / 255.0 blue:245 / 255.0 alpha:1];
}

@end


@implementation NSString (PzProject)

- (NSString *)trim
{
    return [self stringByTrimmingCharactersInSet: [NSCharacterSet whitespaceAndNewlineCharacterSet]];
}

@end
