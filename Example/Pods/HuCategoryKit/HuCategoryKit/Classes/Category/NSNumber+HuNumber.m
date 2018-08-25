//
//  NSNumber+HuNumber.m
//  317hu
//
//  Created by mac on 2018/4/18.
//  Copyright © 2018年 伯仲. All rights reserved.
//

#import "NSNumber+HuNumber.h"

@implementation NSNumber (HuNumber)

- (BOOL)isEqualToString:(NSString *)aString{
    BOOL res = NO;
    NSString *numStr = [NSString stringWithFormat:@"%lld",[self longLongValue]];
    if ([numStr isEqualToString:aString]) {
        res = YES;
    }
    
    return res;
}

@end
