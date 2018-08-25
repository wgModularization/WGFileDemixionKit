//
//  QQUtils.h
//  QuanQuanNursing
//
//  Created by cfl on 16/3/4.
//  Copyright © 2016年 伯仲. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HuConfigsKit/HuConfigsHeader.h>

@interface QQUtils : NSObject
singleton_interface(QQUtils)

- (BOOL)isBlankString:(NSString *)string;

@end
