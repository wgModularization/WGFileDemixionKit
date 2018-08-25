//
//  QQUtils.m
//  QuanQuanNursing
//
//  Created by cfl on 16/3/4.
//  Copyright © 2016年 伯仲. All rights reserved.
//

#import "QQUtils.h"

@implementation QQUtils
singleton_implementation(QQUtils)

- (BOOL)isBlankString:(NSString *)string {
    if (string == nil || string == NULL) {
        return YES;
    }
    if ([string isKindOfClass:[NSNull class]]) {
        return YES;
    }
    if ([[string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] length]==0) {
        return YES;
    }
    return NO;
}

@end
