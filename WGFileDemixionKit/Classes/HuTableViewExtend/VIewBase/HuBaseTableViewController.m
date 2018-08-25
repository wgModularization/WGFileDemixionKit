//
//  HuBaseTableViewController.m
//  317hu
//
//  Created by bozhong on 2017/9/13.
//  Copyright © 2017年 haungfeilong. All rights reserved.
//

#import "HuBaseTableViewController.h"
#import "PlaceholderView.h"
#import <MJRefresh/MJRefresh.h>
#import "HuCommonUIUtill.h"

@interface HuBaseTableViewController ()

@end

@implementation HuBaseTableViewController
{
    PlaceholderView *_defaultView; //没数据的时候用默认图片
    NSString *_defaultImageName;
    NSString *_defaultHint;
}

-(UITableView *)tableView
{
    if (_tableView==nil) {
        _tableView = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStyleGrouped];
        _tableView.delegate =self;
        _tableView.dataSource = self;
        _tableView.showsHorizontalScrollIndicator = NO;
        _tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
        _tableView.backgroundColor = view_bgcolor;
        [HuCommonMethod automaticTableviewBar:_tableView vc:self];
    }
    return _tableView;
}

-(void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.dataArray = @[].mutableCopy;
    _defaultImageName = @"";
    _defaultHint = @"";
    
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithImage:[UIImage imageNamed:@"back"] style:UIBarButtonItemStylePlain target:self action:@selector(backClickAction)];
    
    [self setUpTableView];
    
}

- (void)backClickAction
{
    [self.navigationController popViewControllerAnimated:YES];
}

-(void)setUpTableView{
    self.tableView.frame = CGRectMake(0, 0, self.view.width, self.view.height - nav_height);
    
    [self.view addSubview:_tableView];
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.dataArray.count;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return [tableView dequeueReusableCellAndLoadDataWithAdapter:self.dataArray[indexPath.row] delegate:self indexPath:indexPath];
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    
    [(CustomCell *)[tableView cellForRowAtIndexPath:indexPath] selectedEvent];
}

#pragma mark - CustomCellDelegate.

- (void)customCell:(CustomCell *)cell event:(id)event {
    
}

- (void)endRefeashing
{
    if(self.tableView.mj_header) [self.tableView.mj_header endRefreshing];
    if(self.tableView.mj_footer) [self.tableView.mj_footer endRefreshing];
}


- (void)showDefaultImage
{
    if (_defaultView == nil) {
        _defaultView = [HuCommonUIUtill addPlaceholderView:self withImage:_defaultImageName andHint:_defaultHint];
        _defaultView.frame = self.tableView.frame;
    }else{
        [self.view addSubview:_defaultView];
    }
    
    [self.view bringSubviewToFront:_defaultView];
}

- (void)removeDefaultImage
{
    if (_defaultView) {
        [_defaultView removeFromSuperview];
    }
}

- (void)setDefatultImage:(NSString*)imageName andHint:(NSString*)hint
{
    _defaultImageName = imageName;
    _defaultHint = hint;
}

- (void)dealDefaultView:(NSInteger)count
{
    if (count <= 0) {
        [self showDefaultImage];
    }else{
        [self removeDefaultImage];
    }
}
@end
