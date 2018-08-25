//
//  CellHeaderFooterDataAdapter.m
//  huangfeilong
//
//  Created by huangfeilong on 2017/8/25.
//  Copyright © 2017年 huangfeilong. All rights reserved.
//

#import "CellHeaderFooterDataAdapter.h"

@implementation CellHeaderFooterDataAdapter

+ (instancetype)cellHeaderFooterDataAdapterWithReuseIdentifier:(NSString *)reuseIdentifier
                                                          data:(id)data
                                                        height:(CGFloat)height
                                                          type:(NSInteger)type {
    
    CellHeaderFooterDataAdapter *adapter = [[self class] new];
    adapter.reuseIdentifier              = reuseIdentifier;
    adapter.data                         = data;
    adapter.height                       = height;
    adapter.type                         = type;
    
    return adapter;
}

@end
