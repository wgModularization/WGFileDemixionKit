//
//  UIImage+HuBundle.m
//  HuCategoryKit
//
//  Created by wanggang on 2018/5/22.
//

#import "UIImage+HuBundle.h"

@implementation UIImage (HuBundle)

+ (instancetype)hu_imgWithName:(NSString *)name bundle:(NSString *)bundleName targetClass:(Class)targetClass{
    NSInteger scale = [[UIScreen mainScreen] scale];
    NSBundle *curB = [NSBundle bundleForClass:targetClass];
    NSString *imgName = [NSString stringWithFormat:@"%@@%zdx.png", name,scale];
    NSString *dir = [NSString stringWithFormat:@"%@.bundle",bundleName];
    NSString *path = [curB pathForResource:imgName ofType:nil inDirectory:dir];
    return path?[UIImage imageWithContentsOfFile:path]:nil;
}


@end
