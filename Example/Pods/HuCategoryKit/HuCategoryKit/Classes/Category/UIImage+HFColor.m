//
//  UIImage+HFColor.m
//  GuanHealth
//
//  Created by zhuweite on 16/1/6.
//  Copyright © 2016年 ChinaMobile. All rights reserved.
//

#import "UIImage+HFColor.h"

@implementation UIImage (HFColor)

//+ (UIImage *)mainImage
//{
//    return [self imageFromColor:[UIColor HFColorStyle_5]];
//}
//
//+ (UIImage *)NewYearImage
//{
//    return [self imageFromColor:[UIColor NewYearColor]];
//}


+ (UIImage *)imageFromColor:(UIColor *)color{
    
    CGRect rect = CGRectMake(0, 0, 3, 3);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, [color CGColor]);
    CGContextFillRect(context, rect);
    UIImage *img = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext(); return img;
}
@end
