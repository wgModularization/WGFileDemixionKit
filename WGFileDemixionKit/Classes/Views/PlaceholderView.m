//
//  PlaceholderView.m
//  317hu
//
//  Created by Libar on 16/11/25.
//  Copyright © 2016年 伯仲. All rights reserved.
//

#import "PlaceholderView.h"

@implementation PlaceholderView
- (id)initPlaceholderViewSize:(CGSize)size
               WithImageWidth:(CGFloat)width
                       height:(CGFloat)height
                    imageName:(NSString *)imageName
                        title:(NSString *)title{
    PlaceholderView *vi = [[PlaceholderView alloc]initWithFrame:CGRectMake(0, 0, size.width, size.height)];
    
    vi.backgroundColor = [UIColor whiteColor];
    
    CGFloat wi = 110;
    if (width < wi) {
        wi = 80;
    }
    CGFloat hi = wi * height /width;
    CGFloat x = ( size.width - wi)/2;
    //  CGFloat y = HHBHEIGHT /2 - hi-60;
    UIImageView *imagev = [[UIImageView alloc]initWithFrame:CGRectMake(x, 130, wi, hi)];
    imagev.image = [UIImage imageNamed:imageName];
    [vi addSubview:imagev];
    UILabel *lebel = [[UILabel alloc]initWithFrame:CGRectMake(0, CGRectGetMaxY(imagev.frame)+10,  size.width, 30)];
    lebel.text = title;
    lebel.textAlignment = NSTextAlignmentCenter;
    lebel.font = [UIFont systemFontOfSize:14.0*kFontScale];
    lebel.textColor=[UIColor hexChangeFloat:@"C7C7CC"];
    [vi addSubview:lebel];
    
    return vi;

}

- (id)initTwoPlaceholderViewSize:(CGSize)size
                  WithImageWidth:(CGFloat)width
                          height:(CGFloat)height
                       imageName:(NSString *)imageName
                           title:(NSString *)title
{
    PlaceholderView *vi = [[PlaceholderView alloc]initWithFrame:CGRectMake(0, 0, size.width, size.height)];
    
    vi.backgroundColor = [UIColor whiteColor];
    
    UIImageView *imagev = [[UIImageView alloc]initWithFrame:CGRectMake((size.width-width)/2, 100, width, height)];
    imagev.image = [UIImage imageNamed:imageName];
    [vi addSubview:imagev];
    UILabel *lebel = [[UILabel alloc]initWithFrame:CGRectMake(0, CGRectGetMaxY(imagev.frame)+10,  size.width, 30)];
    lebel.text = title;
    lebel.textAlignment = NSTextAlignmentCenter;
    lebel.font = [UIFont systemFontOfSize:14.0*kFontScale];
    lebel.textColor=[UIColor hexChangeFloat:@"C7C7CC"];
    [vi addSubview:lebel];
    
    return vi;
    
}




/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
