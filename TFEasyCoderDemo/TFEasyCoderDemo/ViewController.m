//
//  ViewController.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/10/28.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "ViewController.h"
#import "TFEasyCoder.h"
#import "XXLabel.h"
#import "CustemLabel.h"
@interface ViewController ()
{
    NSString *_wuwuw;
}
@property (nonatomic,strong)UILabel  *titleLabel;
@property (nonatomic,strong)UIButton *actionButton;
@property (nonatomic,  copy,setter=hahaha:)NSString *testvalue;


@end

@implementation ViewController

TF_LAZYLOAD_OBJC(UILabel,titleLabel);


-(instancetype)initWithParam1:(id)param1
                       Param2:(NSString *)param2
                       Param3:(UIView *)param3
                       Param4:(char)param4
                       Param5:(BOOL)param5
                       Param6:(NSInteger)param6
                       Param7:(CGPoint)param7
                       Param8:(NSTextAlignment)param8
{
    if (self = [super init]) {
        
        NSLog(@"param>>>>>>>:%@",param1);
        NSLog(@"param>>>>>>>:%@",param2);
        NSLog(@"param>>>>>>>:%@",param3);
        NSLog(@"param>>>>>>>:%c",param4);
        NSLog(@"param>>>>>>>:%d",param5);
        NSLog(@"param>>>>>>>:%ld",(long)param6);
        NSLog(@"param>>>>>>>:%@",NSStringFromCGPoint(param7));
        NSLog(@"param>>>>>>>:%ld",(long)param8);
        
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    
    
    
    
    NSLog(@">>>>>>:%@",_wuwuw);
    [NSObject tf_setTargetValue:self withValue:@"xxx" forKey:@"wuwuw"];
    NSLog(@">>>>>>:%@",_wuwuw);
    
    __weak typeof(self) weakSelf = self;
    [UILabel easyCoder:^(UILabel *ins) {
        
        weakSelf.titleLabel = ins;
        [weakSelf.view addSubview:ins];
        
        ins.frame = CGRectMake(0, 0, 100, 100);
        ins.textAlignment = NSTextAlignmentCenter;
        ins.textColor = [UIColor blackColor];
        ins.font = [UIFont systemFontOfSize:14.f];
        ins.backgroundColor = [UIColor grayColor];
        ins.text = @"我是文字框~";
        ins.center = weakSelf.view.center;
    }];
    
    
    [self.titleLabel easyCoder:^(UILabel *ins) {
        
        ins.frame = CGRectMake(0, 0, 100, 100);
        ins.textAlignment = NSTextAlignmentCenter;
        ins.textColor = [UIColor blackColor];
        ins.font = [UIFont systemFontOfSize:14.f];
        ins.backgroundColor = [UIColor grayColor];
        ins.text = @"我是文字框~";
        ins.center = weakSelf.view.center;
    }];
    
    [UILabel easyCoder:^(UILabel *ins) {
        
        ins
        .set_frame(CGRectMake(0, 0, 100, 100))
        .set_textAlignment(NSTextAlignmentCenter)
        .set_textColor([UIColor brownColor])
        .set_text(@"哈哈")
        .set_font([UIFont systemFontOfSize:14.0])
        .set_backgroundColor([UIColor redColor]);
    }];
    
    
    //    [UILabel easyCoder:^(UILabel *ins) {
    //
    //
    //        ins
    //        .set_ValueKey(@"value1",@"key1")
    //        .set_ValueKey(@"value1",@"key1")
    //        .set_ValueKey(@"value1",@"key1")
    //        .set_ValueKey(@"value1",@"key1");
    //
    //    }];
    
    [ViewController easyCoder:^(UIViewController *ins) {
        NSLog(@">>>>>>>>>>>111:%@",ins);
        
    }];
    
    [ViewController easyCoderCustem:^(id ins) {
        NSLog(@">>>>>>>>>>>222:%@",ins);
        
    }];
    
    
    [XXLabel easyCoder:^(UILabel *ins) {
        NSLog(@">>>>>>>>>>>333:%@",ins);
        
    }];
    
    [XXLabel easyCoderCustem:^(id ins) {
        NSLog(@">>>>>>>>>>>444:%@",ins);
        
    }];
    
    [self easyCoderCustem:^(id ins) {
        NSLog(@">>>>>>>>>>>555:%@",ins);
    }];
    
    [self easyCoder:^(UIViewController *ins) {
        NSLog(@">>>>>>>>>>>666:%@",ins);
    }];
    
    [CustemLabel easyCoderCustem:^(CustemLabel * ins) {
        
        ins.cusProperty1 = @"";
        ins.cusProperty2 = @"";
        ins.cusProperty3 = @"";
        
    }];
    
    NSArray *param = @[@"111",@"222",[[UIView alloc]init],@('A'),@(YES),@"333",NSStringFromCGPoint(CGPointZero),@(NSTextAlignmentLeft)];
    [CustemLabel easyCoderCustemInitMethod:@selector(initWithParam1:Param2:Param3:Param4:Param5:Param6:Param7:Param8:)
                                    params:param
                                      back:^(CustemLabel * ins) {
                                          
                                          ins.cusProperty1 = @"";
                                          ins.cusProperty2 = @"";
                                          ins.cusProperty3 = @"";
                                          
                                      }];
    
    
    
    //
    //    __weak typeof(self) weakSelf = self;
    //
    //    [self.actionButton easyCoder:^(UIButton *ins) {
    //
    //        [weakSelf.view addSubview:ins];
    //
    //        ins.frame = CGRectMake(0, 0, 100, 100);
    //        ins.center = CGPointMake(weakSelf.view.center.x, weakSelf.view.center.y - 150);
    //
    //        [ins setTitle:@"点我" forState:UIControlStateNormal];
    //        [ins setTitle:@"点我" forState:UIControlStateHighlighted];
    //
    //        [ins setImage:[UIImage imageNamed:@"test"] forState:UIControlStateNormal];
    //        [ins setImage:[UIImage imageNamed:@"test"] forState:UIControlStateHighlighted];
    //
    //        [ins addTarget:weakSelf
    //                action:@selector(tectAction)
    //      forControlEvents:UIControlEventTouchUpInside];
    //
    //    }];
    //
    //
    //    [self.titleLabel easyCoder:^(UILabel *ins) {
    //
    //        [weakSelf.view addSubview:ins];
    //
    //        ins.textAlignment = NSTextAlignmentCenter;
    //        ins.textColor = [UIColor blackColor];
    //        ins.font = [UIFont systemFontOfSize:14.f];
    //        ins.backgroundColor = [UIColor grayColor];
    //        ins.text = @"我是文字框~";
    //        ins.frame = CGRectMake(0, 0, 100, 100);
    //        ins.center = weakSelf.view.center;
    //
    //    }];
    
    
    
}


@end
