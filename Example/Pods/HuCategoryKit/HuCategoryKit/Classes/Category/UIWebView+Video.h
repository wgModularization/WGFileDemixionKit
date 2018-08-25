//
//  UIWebView+Video.h
//  317hu
//
//  Created by Curious on 16/8/20.
//  Copyright © 2016年 伯仲. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIWebView (VideoControl)


- (BOOL)hasVideo;
- (NSString *)getVideoTitle;
- (double)getVideoDuration;
- (double)getVideoCurrentTime;

- (int)playWidthIndex:(NSInteger)index;
- (int)pauseWithIndex:(NSInteger)index;
- (int)resumeWidthIndex:(NSInteger)index;
- (int)stopWidthIndex:(NSInteger)index;

@end
