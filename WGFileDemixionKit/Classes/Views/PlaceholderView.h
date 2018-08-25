//
//  PlaceholderView.h
//  317hu
//
//  Created by Libar on 16/11/25.
//  Copyright © 2016年 伯仲. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlaceholderView : UIView

//- (id )initPlaceholderViewWithFrame:():(NSString *)imageName title:(NSString *)title;
//- (id)initPlaceholderViewWithImageWidth:(CGFloat)width
//                                 height:(CGFloat)height
//                              imageName:(NSString *)imageName
//                                  title:(NSString *)title;
- (id)initPlaceholderViewSize:(CGSize)size
               WithImageWidth:(CGFloat)width
                       height:(CGFloat)height
                    imageName:(NSString *)imageName
                        title:(NSString *)title;

- (id)initTwoPlaceholderViewSize:(CGSize)size
               WithImageWidth:(CGFloat)width
                       height:(CGFloat)height
                    imageName:(NSString *)imageName
                        title:(NSString *)title;



@end
