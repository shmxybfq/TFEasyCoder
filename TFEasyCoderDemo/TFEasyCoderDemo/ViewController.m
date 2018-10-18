//
//  ViewController.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/10/28.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "ViewController.h"

#import "TFEasyCoder.h"
#import "TableviewCell.h"
#import "TableviewHeader.h"
#import "Tmp2Object.h"
#import "Masonry.h"
@interface ViewController ()<UITableViewDelegate,UITableViewDataSource>

@property (nonatomic,strong)UITableView *tableView;
@property (nonatomic,strong)TableviewHeader *tableHeader;

@property (nonatomic,strong)NSMutableArray *dataSource;

@end



@implementation ViewController


/**
 *  懒加载宏
 */

tf_lazyload_objc(UITableView, tableView);
tf_lazyload_objc(NSMutableArray, dataSource);


- (void)viewDidLoad {
    [super viewDidLoad];
    [TFEasyCoderConfigue shareInstance].TFDebug_VCDidAppearSubviewRandomColor = YES;
    kdeclare_weakself;
  
    
  
    /**
     *  创建自定义对象
     *
     *  @param ins 自定义对象
     *
     *  @return 自定义对象
     */
    
    [TableviewHeader easyCoderCustem:^(TableviewHeader * ins) {
        weakSelf.tableHeader = ins;
        weakSelf.tableView.tableHeaderView = ins;
        ins.frame = CGRectMake(0, 0, Size6SNEW([UIScreen mainScreen].bounds.size.width), Size6SNEW(550));
    }];

    
    
    /**
     *  快速操作已有对象 + 链式属性
     *
     *  @param ins 操作对象
     *
     *  @return 操作对象
     */
    [self.tableView easyCoder:^(UITableView *ins) {
        
        [weakSelf.view addSubview:ins];
//        ins
//        .set_tableHeaderView(weakSelf.tableHeader)
//        .set_delegate(weakSelf)
//        .set_dataSource(weakSelf)
//        .set_rowHeight(Size6SNEW(96))
//        .set_frame([UIScreen mainScreen].bounds)
//        .set_separatorStyle(UITableViewCellSeparatorStyleNone)
//        .set_backgroundColor([[UIColor lightGrayColor]colorWithAlphaComponent:0.1]);
    }];
    
    /**
     *  快速操作已有对象
     *  @param ins 操作对象
     *  @return 操作对象
     */
    [self.dataSource easyCoder:^(NSMutableArray *ins) {
        [ins addObject:@{@"icon":@"home_visitor_icon",@"title":@"我的访客"}];
        [ins addObject:@{@"icon":@"home_birthday_icon",@"title":@"好友生日"}];
        [ins addObject:@{@"icon":@"home_music_icon",@"title":@"背景音乐"}];
        [ins addObject:@{@"icon":@"home_lovers_icon",@"title":@"情侣空间"}];
    }];

    
}


- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.dataSource.count;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    TableviewCell *cell = [TableviewCell dequeueReusableCellWithUITableView:tableView indexPath:indexPath];
    [cell setViewData:self.dataSource[indexPath.row]];
    return cell;
}

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    /**
     *  打印当前已存在的视图tree(UI开发工具)
     */
    
    [self.view tf_logSubviews:^NSArray *{
        /**
         *  这里返回你要在视图tree里面显示的视图属性,返回nil则默认打印 @[@"frame",@"hidden",@"backgroundColor",@"userInteractionEnabled"]
         */
        return @[@"frame",@"hidden",@"backgroundColor",@"userInteractionEnabled"];
    }];
    
    /**
     *  为当前已存在的视图tree 加上随机颜色(UI开发工具)
     */
    [self.view tf_setAllSubviewsBackgroundColorRandom:0.5];
    
    
    /**
     *  获取view的所有子视图(UI开发工具)
     */
    NSArray *allSubviews = [self.view tf_getAllSubviews];
    NSLog(@"\n\n\n\n\n%@\n\n\n\n\n",allSubviews);
    
}


@end
