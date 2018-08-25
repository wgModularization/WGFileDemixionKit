//
//  NSString+filePath.m
//  HW_0314_Addressbook_Ex
//
//  Created by 朱伟特 on 15-3-18.
//  Copyright (c) 2015年 朱伟特. All rights reserved.
//

#import "NSString+filePath.h"

@implementation NSString (filePath)
+(NSString *)filePath:(NSString *)fileName
{
    NSString * documentsPath =[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)firstObject];
    NSString * filePath = [documentsPath stringByAppendingPathComponent:fileName];
    return filePath;
}
-(NSString *)documentsFilePath
{
    NSString * documentsPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)firstObject];
    NSString * filePath = [documentsPath stringByAppendingString:self];
    return filePath;
}
@end
