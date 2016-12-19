//
//  TmpObject.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/17.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "TmpObject.h"
@interface TmpObject ()

@property (nonatomic,strong)UILabel *titleLabel1;
@property (nonatomic,strong)UILabel *titleLabel2;
@property (nonatomic,strong)UILabel *titleLabel3;
@property (nonatomic,strong)UILabel *titleLabel4;
@end

@implementation TmpObject

TF_LAZYLOAD_OBJC_CUS(UILabel, titleLabel1, ^(UILabel *ins){
    ins.text = @"text1";
    ins.textColor = [UIColor redColor];
    ins.textAlignment = NSTextAlignmentRight;
});

TF_LAZYLOAD_OBJC_CUS(UILabel, titleLabel2, ^(UILabel *ins){
    ins.text = @"text2";
    ins.textColor = [UIColor lightGrayColor];
    ins.textAlignment = NSTextAlignmentLeft;
});

-(UILabel *)titleLabel3{
    if (_titleLabel3 == nil) {
        _titleLabel3 = [[UILabel alloc]init];
    }
    _titleLabel3.text = @"text3";
    _titleLabel3.textColor = [UIColor redColor];
    _titleLabel3.textAlignment = NSTextAlignmentRight;
    return _titleLabel3;
}

-(UILabel *)titleLabel4{
    if (_titleLabel4 == nil) {
        _titleLabel4 = [[UILabel alloc]init];
    }
    _titleLabel4.text = @"text4";
    _titleLabel4.textColor = [UIColor redColor];
    _titleLabel4.textAlignment = NSTextAlignmentRight;
    return _titleLabel4;
}

@end



