//
//  HuCommonUIUtill.h
//  HuCategoryKit
//
//  Created by mac on 2018/8/23.
//

#import <Foundation/Foundation.h>
#import "PlaceholderView.h"

@interface HuCommonUIUtill : NSObject

/**
 * @brief   添加默认背景图片到指定的viewcontroller上
 * @param   vc viewcontroller
 * @param   imageName 图片名称
 * @param   hint 提示语
 */
+ (PlaceholderView *)addPlaceholderView:(UIViewController*)vc withImage:(NSString*)imageName andHint:(NSString*)hint;

@end
