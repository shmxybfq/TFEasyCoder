//
//  ViewController.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/10/28.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "ViewController.h"
#import "TFEasyCoder.h"

@interface ViewController ()
{
    NSString *_wuwuw;
}
@property (nonatomic,strong)UILabel  *titleLabel;
@property (nonatomic,strong)UIButton *actionButton;
@property (nonatomic,  copy,setter=hahaha:)NSString *testvalue;


@end

@implementation ViewController

//TF_SYNTHESIZE(titleLabel);
//
//-(UILabel *)titleLabel{\
//    if (!_titleLabel)\
//        _titleLabel = [[UILabel alloc]init];\
//    return _titleLabel;}

TF_LAZYLOAD_OBJC(UILabel,titleLabel);


- (void)viewDidLoad {
    [super viewDidLoad];

    
    
    
    
 
    NSLog(@">>>>>>:%@",_wuwuw);
    [NSObject tf_setTargetValue:self withValue:@"xxx" forKey:@"wuwuw"];
    NSLog(@">>>>>>:%@",_wuwuw);
    
//    __weak typeof(self) weakSelf = self;
//    [UILabel easyCoder:^(UILabel *ins) {
//        
//        weakSelf.titleLabel = ins;
//        [weakSelf.view addSubview:ins];
//        
//        ins.frame = CGRectMake(0, 0, 100, 100);
//        ins.textAlignment = NSTextAlignmentCenter;
//        ins.textColor = [UIColor blackColor];
//        ins.font = [UIFont systemFontOfSize:14.f];
//        ins.backgroundColor = [UIColor grayColor];
//        ins.text = @"我是文字框~";
//        ins.center = weakSelf.view.center;
//        
//    }];

    
    __weak typeof(self) weakSelf = self;
        [UILabel easyCoder:^(UILabel *ins) {
    
            weakSelf.titleLabel = ins;
            [weakSelf.view addSubview:ins];
    
            ins
            .set_frame(CGRectMake(0, 0, 100, 100))
            .set_textAlignment(NSTextAlignmentCenter)
            .set_textColor([UIColor brownColor])
            .set_text(@"哈哈")
            .set_font([UIFont systemFontOfSize:14.0])
            .set_ValueKey(@"",@"")
            .set_ValueKey(@"",@"")
            .set_ValueKey(@"",@"")
            .set_ValueKey(@"",@"")
            .set_backgroundColor([UIColor redColor]);
            
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
