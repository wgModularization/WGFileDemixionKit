//
//  NSArray+HuToJson.h
//  317hu
//
//  Created by 黄海泼 on 2017/8/21.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (HuToJson)

/**
*  转换成JSON串字符串（没有可读性）
*
*  @return JSON字符串
*/
- (NSString *)toJSONString;

/**
 *  转换成JSON串字符串（有可读性）
 *
 *  @return JSON字符串
 */
- (NSString *)toReadableJSONString;

/**
 *  转换成JSON数据
 *
 *  @return JSON数据
 */
- (NSData *)toJSONData;
@end
