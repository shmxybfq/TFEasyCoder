//
//  UIView+TFKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (TFKit)

/**
 *  设备尺寸操作,提供静态方法访问和属性访问
 */


@property (nonatomic,assign,readonly)CGRect tf_screenBounds;
@property (nonatomic,assign,readonly)CGSize tf_screenSize;
@property (nonatomic,assign,readonly)CGPoint tf_screenOrigin;
@property (nonatomic,assign,readonly)CGFloat tf_screenWidth;
@property (nonatomic,assign,readonly)CGFloat tf_screenHeight;

+(CGRect)tf_screenBounds;
+(CGSize)tf_screenSize;
+(CGPoint)tf_screenOrigin;
+(CGFloat)tf_screenWidth;
+(CGFloat)tf_screenHeight;


/**
 *  当前view一些Frame值
 */
@property (nonatomic,assign)CGPoint tf_origin;
@property (nonatomic,assign)CGFloat tf_x;
@property (nonatomic,assign)CGFloat tf_y;
@property (nonatomic,assign,readonly)CGFloat tf_max_x;
@property (nonatomic,assign,readonly)CGFloat tf_max_y;

@property (nonatomic,assign)CGSize  tf_size;
@property (nonatomic,assign)CGFloat tf_width;
@property (nonatomic,assign)CGFloat tf_height;

@property (nonatomic,assign)CGPoint tf_center;
@property (nonatomic,assign)CGFloat tf_center_x;
@property (nonatomic,assign)CGFloat tf_center_y;

@property (nonatomic,assign,readonly)CGPoint tf_center_abs;
@property (nonatomic,assign,readonly)CGFloat tf_center_abs_x;
@property (nonatomic,assign,readonly)CGFloat tf_center_abs_y;



@property (nonatomic,strong)UIImageView *tf_lineImageView0;
@property (nonatomic,strong)UIImageView *tf_lineImageView1;
@property (nonatomic,strong)UIImageView *tf_lineImageView2;
@property (nonatomic,strong)UIImageView *tf_lineImageView3;

-(void)tf_creatLineImageView0:(BOOL)lineImageView0
               LineImageView1:(BOOL)lineImageView1
               LineImageView2:(BOOL)lineImageView2
               LineImageView3:(BOOL)lineImageView3;

-(UIImageView *)tf_creatLineImageView;
-(UIImageView *)tf_creatLineImageViewForKey:(NSString *)key;

-(void)tf_removeLineImageViewAll;
-(BOOL)tf_removeLineImageViewForKey:(NSString *)key;



@property (nonatomic,strong)UIImageView *tf_backgroundView0;
@property (nonatomic,strong)UIImageView *tf_backgroundView1;
@property (nonatomic,strong)UIImageView *tf_backgroundView2;
@property (nonatomic,strong)UIImageView *tf_backgroundView3;

-(void)tf_creatBackgroundView0:(BOOL)backgroundView0
               BackgroundView1:(BOOL)backgroundView1
               BackgroundView2:(BOOL)backgroundView2
               BackgroundView3:(BOOL)backgroundView3;

-(UIImageView *)tf_creatBackgroundView;
-(UIImageView *)tf_creatBackgroundViewForKey:(NSString *)key;

-(void)tf_removeBackgroundViewAll;
-(BOOL)tf_removeBackgroundViewForKey:(NSString *)key;


@end
