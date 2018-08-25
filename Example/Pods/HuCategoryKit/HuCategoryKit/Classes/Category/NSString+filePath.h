//
//  NSString+filePath.h
//  HW_0314_Addressbook_Ex
//
//  Created by 朱伟特 on 15-3-18.
//  Copyright (c) 2015年 朱伟特. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (filePath)
+(NSString *)filePath:(NSString *)fileName;
-(NSString *)documentsFilePath;
@end
