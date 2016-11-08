//
//  TableviewCell.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/11/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "TableviewCell.h"

#import "Masonry.h"
#import "TFEasyCoder.h"
#import "ViewController.h"
@interface TableviewCell ()

@property (nonatomic,strong)UIImageView *icon;
@property (nonatomic,strong)UILabel     *title;
@property (nonatomic,strong)UIImageView *arrow;

@property (nonatomic,strong)UIImageView *bLine;


@end

@implementation TableviewCell


+(instancetype)dequeueReusableCellWithUITableView:(UITableView *)tableView indexPath:(NSIndexPath *)indexPath{
    
    NSString *classStr = @"TableviewCell";
    TableviewCell *cell = [tableView dequeueReusableCellWithIdentifier:classStr];
    if (cell == nil) {
        cell = [[TableviewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:classStr];
    }
    return cell;
}



-(instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        
        kdeclare_weakself;
        
        
        /**
         *  创建控件等(写好一个ui控件后其他复制粘贴然后再改改就可以了)
         *
         */
        
        
        
        [UIImageView easyCoder:^(UIImageView *ins) {
           
            weakSelf.icon = ins;
            [weakSelf.contentView addSubview:ins];
            [ins mas_makeConstraints:^(MASConstraintMaker *make) {
                make.size.mas_equalTo(CGSizeMake(Size6SNEW(50), Size6SNEW(50)));
                make.left.equalTo(weakSelf.contentView).offset(Size6SNEW(30));
                make.centerY.equalTo(weakSelf);
            }];
            
        }];
        
        [UILabel easyCoder:^(UILabel *ins) {
            
            weakSelf.title = ins;
            [weakSelf.contentView addSubview:ins];
            ins.textColor = [[UIColor blackColor]colorWithAlphaComponent:0.9];
            ins.font = [UIFont systemFontOfSize:15];
            [ins mas_makeConstraints:^(MASConstraintMaker *make) {
                make.size.mas_equalTo(CGSizeMake(Size6SNEW(300), Size6SNEW(50)));
                make.left.equalTo(weakSelf.icon.mas_right).offset(Size6SNEW(20));
                make.centerY.equalTo(weakSelf);
            }];
        }];
        
    
        
        [UIImageView easyCoder:^(UIImageView *ins) {
            
            weakSelf.arrow = ins;
            [weakSelf.contentView addSubview:ins];
            ins.image = [UIImage imageNamed:@"arrow_btn"];
            ins.contentMode = UIViewContentModeScaleAspectFit;
            
            [ins mas_makeConstraints:^(MASConstraintMaker *make) {
                make.size.mas_equalTo(CGSizeMake(Size6SNEW(20), Size6SNEW(20)));
                make.right.equalTo(weakSelf.contentView.mas_right).offset(Size6SNEW(-30));
                make.centerY.equalTo(weakSelf);
            }];
            
        }];
   
        
        [UIImageView easyCoder:^(UIImageView *ins) {
            
            weakSelf.bLine = ins;
            [weakSelf.contentView addSubview:ins];
            ins.backgroundColor = [[UIColor lightGrayColor]colorWithAlphaComponent:0.5];
            
            [ins mas_makeConstraints:^(MASConstraintMaker *make) {
                make.left.equalTo(weakSelf.title);
                make.bottom.equalTo(weakSelf.contentView).offset(-0.5);
                make.right.equalTo(weakSelf.contentView);
                make.height.mas_equalTo(0.5);
            }];
            
        }];
        
        
    }
    return self;
}

-(void)setViewData:(id)data
{
    NSDictionary *dataDic = data;
    self.icon.image = [UIImage imageNamed:[dataDic objectForKey:@"icon"]];
    self.title.text = [dataDic objectForKey:@"title"];
}


@end
