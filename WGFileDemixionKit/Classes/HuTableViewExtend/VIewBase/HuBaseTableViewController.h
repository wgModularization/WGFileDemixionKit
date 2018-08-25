//
//  HuBaseTableViewController.h
//  317hu
//
//  Created by bozhong on 2017/9/13.
//  Copyright © 2017年 haungfeilong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CellDataAdapter.h"
#import "CustomCell.h"

@class CustomCell;

@interface HuBaseTableViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,CustomCellDelegate>

@property (nonatomic,strong)UITableView *tableView;

@property (nonatomic,strong)NSMutableArray *dataArray;

-(void)setUpTableView;

#pragma mark - CustomCellDelegate. subclass should overwrite

- (void)customCell:(CustomCell *)cell event:(id)event;

- (void)endRefeashing;

/**
 设置默认图片
 
 @param count cout大于0显示默认图片
 */
- (void)dealDefaultView:(NSInteger)count;

/**
 修改默认背景图片
 
 @param imageName 图片名字
 @param hint 默认提示
 */
- (void)setDefatultImage:(NSString*)imageName andHint:(NSString*)hint;

@end
