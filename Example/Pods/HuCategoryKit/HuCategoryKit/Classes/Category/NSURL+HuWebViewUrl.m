//
//  NSURL+HuWebViewUrl.m
//  317hu
//
//  Created by mac on 2018/4/25.
//  Copyright © 2018年 huangfeilong. All rights reserved.
//

#import "NSURL+HuWebViewUrl.h"

@implementation NSURL (HuWebViewUrl)

+ (nullable instancetype)hu_URLWithString:(NSString *)urlString{
    
    NSString *encodedValue;
    //ios 9以上系统
    if (NSFoundationVersionNumber >= NSFoundationVersionNumber_iOS_9_0){
        encodedValue = [urlString stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLFragmentAllowedCharacterSet]];
    }else{
        encodedValue = [urlString stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    }
    
    if ([encodedValue hasPrefix:@"http"]) {
        return [self URLWithString:encodedValue];
    }else{
        return nil;
    }
}

@end
