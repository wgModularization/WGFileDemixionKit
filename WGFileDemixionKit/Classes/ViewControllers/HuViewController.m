//
//  HuViewController.m
//  317hu
//
//  Created by yanChengYi on 2017/3/9.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#import "HuViewController.h"
#import "PlaceholderView.h"

@interface HuViewController ()
{
    PlaceholderView *_defaultView; //没数据的时候用默认图片
    NSString *_defaultImageName;
    NSString *_defaultHint;
}
@end

@implementation HuViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    _defaultImageName = @"";
    _defaultHint = @"";
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)showDefaultImage{
    if (_defaultView == nil) {
        _defaultView = [self addPlaceholderView:self withImage:_defaultImageName andHint:_defaultHint] ;
    }else{
        [self.view addSubview:_defaultView];
    }
    
    [self.view bringSubviewToFront:_defaultView];
}

- (void)showDefaultImageWithParentView:(UIView*)superView{
    if (_defaultView == nil) {
        _defaultView = [self addPlaceholderView:self withImage:_defaultImageName andHint:_defaultHint] ;
    }else{
        [superView addSubview:_defaultView];
    }
    
    [superView bringSubviewToFront:_defaultView];
}

- (PlaceholderView *)addPlaceholderView:(UIViewController*)vc withImage:(NSString*)imageName andHint:(NSString*)hint
{
    NSString *name = ([imageName length] > 0) ? imageName : @"TrainDefaultCover";
    UIImage *image = IMG(name);
    NSString *title = ([hint length] > 0) ? hint : @"暂时没有内容";
    CGSize size = image.size;
    
    PlaceholderView *defaultVc = [[PlaceholderView alloc]initPlaceholderViewSize:[UIScreen mainScreen].bounds.size WithImageWidth:size.width height:size.height imageName:name title:title];
    [vc.view addSubview:defaultVc];
    return defaultVc;
}

- (void)removeDefaultImage{
    if (_defaultView) {
        [_defaultView removeFromSuperview];
    }
}

- (void)setDefatultImage:(NSString*)imageName andHint:(NSString*)hint
{
    _defaultImageName = imageName;
    _defaultHint = hint;
}

- (void)setDefaultViewFrame:(CGRect)frame{
    if (_defaultView) {
        _defaultView.frame = frame;
    }
}

- (void)dealDefaultView:(NSInteger)count
{
    if (count <= 0) {
        [self showDefaultImage];
    }else{
        [self removeDefaultImage];
    }
}

- (void)dealDefaultView:(NSInteger)count withParentView:(UIView*)superView{
    if (count <= 0) {
        [self showDefaultImageWithParentView:superView];
    }else{
        [self removeDefaultImage];
    }
}

#pragma mark - SomeConfig
//导航栏透明
- (void)navBarTransparent {
    [self.navigationItem.leftBarButtonItem setTintColor:[UIColor whiteColor]];
    [self.navigationController.navigationBar setHidden:NO];
    
    self.navigationController.navigationBar.translucent = YES;
    [self.navigationController.navigationBar setTitleTextAttributes:@{NSForegroundColorAttributeName : [UIColor whiteColor]}];
    [self.navigationController.navigationBar setBackgroundImage:[[UIImage alloc] init] forBarMetrics:UIBarMetricsDefault];
    [self.navigationController.navigationBar setShadowImage:[[UIImage alloc] init]];
}
//导航栏不透明
- (void)navBarNoTransparent {
    self.navigationController.navigationBar.translucent = NO;
    [self.navigationController.navigationBar setBackgroundImage:nil forBarMetrics:UIBarMetricsDefault];
    [self.navigationController.navigationBar setShadowImage:nil];
    [UIApplication sharedApplication].statusBarStyle = UIStatusBarStyleDefault;
    
    [self.navigationController.navigationBar setTitleTextAttributes:@{NSForegroundColorAttributeName : [UIColor blackColor]}];
}

@end
