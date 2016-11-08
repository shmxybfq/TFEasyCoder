//
//  TableviewHeader.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/11/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "TableviewHeader.h"

#import "Masonry.h"
#import "TFEasyCoder.h"
#import "ViewController.h"
@interface TableviewHeader ()

@property (nonatomic,strong)UIImageView *background;

@property (nonatomic,strong)UIImageView *icon;
@property (nonatomic,strong)UIImageView *iconCover;
@property (nonatomic,strong)UIImageView *iconSign;

@property (nonatomic,strong)UIImageView *diamondSign;


@end

@implementation TableviewHeader

/**
 *  懒加载宏
 */
TF_LAZYLOAD_OBJC(UIImageView, background);

TF_LAZYLOAD_OBJC(UIImageView, icon);
TF_LAZYLOAD_OBJC(UIImageView, iconCover);
TF_LAZYLOAD_OBJC(UIImageView, iconSign);

TF_LAZYLOAD_OBJC(UIImageView, diamondSign);

-(instancetype)init
{
    if (self = [super init]) {
        
        
        kdeclare_weakself;
        
        
        /**
         *  创建控件等(写好一个ui控件后其他复制粘贴然后再改改就可以了)
         *
         */
        
        
        
        [self.background easyCoder:^(UIImageView *ins) {
            
            [weakSelf addSubview:ins];
            ins.image = [UIImage imageNamed:@"background"];
            [ins mas_makeConstraints:^(MASConstraintMaker *make) {
                make.top.equalTo(weakSelf);
                make.left.equalTo(weakSelf);
                make.bottom.equalTo(weakSelf);
                make.right.equalTo(weakSelf);
            }];
        }];
        
        [self.icon easyCoder:^(UIImageView *ins) {
           
            [weakSelf addSubview:ins];
            ins.image = [UIImage imageNamed:@"icon"];
            ins.layer.cornerRadius = Size6SNEW(80) * 0.5;
            ins.layer.masksToBounds = YES;
            [ins mas_makeConstraints:^(MASConstraintMaker *make) {
                make.size.mas_equalTo(CGSizeMake(Size6SNEW(80), Size6SNEW(80)));
                make.centerX.equalTo(weakSelf.mas_left).offset(Size6SNEW(90));
                make.centerY.equalTo(weakSelf.mas_bottom).offset(Size6SNEW(-90));
            }];
        }];
        
        [self.iconCover easyCoder:^(UIImageView *ins) {
            
            [weakSelf addSubview:ins];
            ins.image = [UIImage imageNamed:@"widget_yd_nameplate_gold"];
            [ins mas_makeConstraints:^(MASConstraintMaker *make) {
                make.size.mas_equalTo(CGSizeMake(Size6SNEW(132), Size6SNEW(132)));
                make.centerX.equalTo(weakSelf.mas_left).offset(Size6SNEW(90));
                make.centerY.equalTo(weakSelf.mas_bottom).offset(Size6SNEW(-90));
            }];
        }];
        
        
        [self.iconSign easyCoder:^(UIImageView *ins) {
            
            [weakSelf addSubview:ins];
            ins.image = [UIImage imageNamed:@"yellowdiamond_openvip"];
            [ins mas_makeConstraints:^(MASConstraintMaker *make) {
                make.size.mas_equalTo(CGSizeMake(Size6SNEW(100), Size6SNEW(35)));
                make.centerX.equalTo(weakSelf.mas_left).offset(Size6SNEW(90));
                make.centerY.equalTo(weakSelf.mas_bottom).offset(Size6SNEW(-30));
            }];
        }];
        
        
        [self.diamondSign easyCoder:^(UIImageView *ins) {
            
            [weakSelf addSubview:ins];
            ins.image = [UIImage imageNamed:@"widget_open_diamond_open"];
            [ins mas_makeConstraints:^(MASConstraintMaker *make) {
                make.size.mas_equalTo(CGSizeMake(Size6SNEW(150), Size6SNEW(36)));
                make.right.equalTo(weakSelf.mas_right).offset(Size6SNEW(-30));
                make.bottom.equalTo(weakSelf.mas_bottom).offset(Size6SNEW(-30));
            }];
        }];

        
    }
    return self;
}



@end
