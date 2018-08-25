//
//  WKWebView+Video.h
//  317hu
//
//  Created by 朱伟特 on 2017/1/7.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#import <WebKit/WebKit.h>

@interface WKWebView (Video)

- (BOOL)hasVideo;
- (NSString *)getVideoTitle;
- (double)getVideoDuration;
- (double)getVideoCurrentTime;

- (int)playWidthIndex:(NSInteger)index;
- (int)pauseWithIndex:(NSInteger)index;
- (int)resumeWidthIndex:(NSInteger)index;
- (int)stopWidthIndex:(NSInteger)index;

@end
