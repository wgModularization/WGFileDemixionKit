//
//  Curi_define.h
//  317hu
//
//  Created by Sole on 2017/4/11.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#ifndef Curi_define_h
#define Curi_define_h

#define curi_data ([Curi mock] ? [self pre_mock] : [self preData])


#define strEqual(expression1, expression2) ([@#expression1 isEqualToString:@#expression2])
#define curi_image(imageName) ([UIImage imageNamed:@#imageName]);
#define curi_color(colorStr) ([HuCommonMethod uiColorFromString:@#colorStr])
#define scr_width   (HHBWIDTH)
#define scr_height   (HHBHEIGHT)
#define nav_height  (scr_height==812?88:top_nav_bar_height)
#define seg_height (40)
#define curi_font(size) (fontSize(size))
#define curi_frame(left, top, width, height) (CGRectMake(left, top, width, height))

#define curi_firstPage (1)

NS_INLINE BOOL
strEqual_or(NSString *string, ...) {
    
    NSMutableArray *arr = [NSMutableArray array];
    
    va_list argList;
    va_start(argList, string);
    
    id arg;
    while ((arg = va_arg(argList, id))) {
        
        [arr addObject:arg];
    }
    va_end(argList);
    
    for (NSString *str in arr) {
        if ([string isEqualToString:str]) {
            return true;
        }
    }
    
    return false;
}

CG_INLINE CGFloat
half(CGFloat x) {
    return x / 2.0;
}



#endif /* Curi_define_h */
