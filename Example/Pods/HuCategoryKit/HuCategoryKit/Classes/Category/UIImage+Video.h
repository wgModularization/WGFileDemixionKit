//
//  UIImage+Video.h
//  317hu
//
//  Created by 黄海泼 on 2017/6/21.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Video)

/**
 通过视频URL获取视频的第一帧图片
 
 @param videoURL 视频连接
 @return 第一帧图片
 */
+ (UIImage *)interceptFirstTimeVideoPicture:(NSURL *)videoURL;

@end
