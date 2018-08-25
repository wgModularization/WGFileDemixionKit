//
//  HuCommonUIUtill.m
//  HuCategoryKit
//
//  Created by mac on 2018/8/23.
//

#import "HuCommonUIUtill.h"

@implementation HuCommonUIUtill

+ (PlaceholderView *)addPlaceholderView:(UIViewController*)vc withImage:(NSString*)imageName andHint:(NSString*)hint
{
    NSString *name = ([imageName length] > 0) ? imageName : @"TrainDefaultCover";
    UIImage *image = IMG(name);
    NSString *title = ([hint length] > 0) ? hint : @"暂时没有内容";
    CGSize size = image.size;
    
    PlaceholderView *defaultVc = [[PlaceholderView alloc]initPlaceholderViewSize:[UIScreen mainScreen].bounds.size WithImageWidth:size.width height:size.height imageName:name title:title];
    [vc.view addSubview:defaultVc];
    return defaultVc;
}

@end
