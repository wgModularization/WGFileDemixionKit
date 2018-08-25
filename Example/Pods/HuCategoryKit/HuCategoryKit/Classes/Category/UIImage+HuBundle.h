//
//  UIImage+HuBundle.h
//  HuCategoryKit
//
//  Created by wanggang on 2018/5/22.
//

#import <UIKit/UIKit.h>

@interface UIImage (HuBundle)
+ (instancetype)hu_imgWithName:(NSString *)name bundle:(NSString *)bundleName targetClass:(Class)targetClass;

@end
