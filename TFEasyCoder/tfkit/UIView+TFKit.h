//
//  UIView+TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFEasyCoderConst.h"

@interface UIView (TFKit)


#pragma mark 屏幕尺寸的获取 --
/**
 *  设备尺寸操作,提供静态方法访问和属性访问
 */
@property (nonatomic,assign,readonly)CGRect TF_CODE_PRE(screenBounds);
@property (nonatomic,assign,readonly)CGSize TF_CODE_PRE(screenSize);
@property (nonatomic,assign,readonly)CGPoint TF_CODE_PRE(screenOrigin);
@property (nonatomic,assign,readonly)CGFloat TF_CODE_PRE(screenWidth);
@property (nonatomic,assign,readonly)CGFloat TF_CODE_PRE(screenHeight);

+(CGRect)TF_CODE_PRE(screenBounds);
+(CGSize)TF_CODE_PRE(screenSize);
+(CGPoint)TF_CODE_PRE(screenOrigin);
+(CGFloat)TF_CODE_PRE(screenWidth);
+(CGFloat)TF_CODE_PRE(screenHeight);

#pragma mark view尺寸操作 --
/**
 *  当前view一些Frame值
 */
@property (nonatomic,assign,setter=set_origin:)CGPoint TF_CODE_PRE(origin);
@property (nonatomic,assign,setter=set_x:)CGFloat TF_CODE_PRE(x);
@property (nonatomic,assign,setter=set_y:)CGFloat TF_CODE_PRE(y);
@property (nonatomic,assign,readonly)CGFloat TF_CODE_PRE(max_x);
@property (nonatomic,assign,readonly)CGFloat TF_CODE_PRE(max_y);
@property (nonatomic,assign,setter=set_leftTop:)CGPoint TF_CODE_PRE(leftTop);
@property (nonatomic,assign,setter=set_rightTop:)CGPoint TF_CODE_PRE(rightTop);
@property (nonatomic,assign,setter=set_leftBottom:)CGPoint TF_CODE_PRE(leftBottom);
@property (nonatomic,assign,setter=set_rightBottom:)CGPoint TF_CODE_PRE(rightBottom);

@property (nonatomic,assign,setter=set_size:)CGSize  TF_CODE_PRE(size);
@property (nonatomic,assign,setter=set_width:)CGFloat TF_CODE_PRE(width);
@property (nonatomic,assign,setter=set_height:)CGFloat TF_CODE_PRE(height);

@property (nonatomic,assign,setter=set_center:)CGPoint TF_CODE_PRE(center);
@property (nonatomic,assign,setter=set_center_x:)CGFloat TF_CODE_PRE(center_x);
@property (nonatomic,assign,setter=set_center_y:)CGFloat TF_CODE_PRE(center_y);

@property (nonatomic,assign,readonly)CGPoint TF_CODE_PRE(center_abs);
@property (nonatomic,assign,readonly)CGFloat TF_CODE_PRE(center_abs_x);
@property (nonatomic,assign,readonly)CGFloat TF_CODE_PRE(center_abs_y);


#pragma mark view 分割线操作 --
/**
 *  四个默认的分割线,需要先调用xx_creatLineImageView0 方法
 */
@property (nonatomic,strong)UIImageView *TF_CODE_PRE(lineImageView0);
@property (nonatomic,strong)UIImageView *TF_CODE_PRE(lineImageView1);
@property (nonatomic,strong)UIImageView *TF_CODE_PRE(lineImageView2);
@property (nonatomic,strong)UIImageView *TF_CODE_PRE(lineImageView3);

/**
 *  实例化默认提供的四条分割线,每个布尔值分别对应上面属性的每一条线
 *
 */
-(void)TF_CODE_PRE(creatLineImageView0):(BOOL)lineImageView0
                         LineImageView1:(BOOL)lineImageView1
                         LineImageView2:(BOOL)lineImageView2
                         LineImageView3:(BOOL)lineImageView3;

/**
 *  如果上面的四条线还不够用,还可以单加,每调用一次生成一个实例,并返回
 *
 *  @return
 */
-(UIImageView *)TF_CODE_PRE(creatLineImageView);
/**
 *  同上,不过这个可以创建一个key对应线,可以通过这个key获取线
 *
 *  @return
 */
-(UIImageView *)TF_CODE_PRE(creatLineImageViewForKey):(NSString *)key;
/**
 *  通过key获取线
 *  @param key key
 *  @return
 */
-(UIImageView *)TF_CODE_PRE(getLineImageViewForKey):(NSString *)key;
/**
 *  删除所有线,对这个方法xx_creatLineImageView0不起作用
 */
-(void)TF_CODE_PRE(removeLineImageViewAll);
/**
 *  删除一条线
 *  @param key 线对应的key
 *  @return 是否删除成功
 */
-(BOOL)TF_CODE_PRE(removeLineImageViewForKey):(NSString *)key;
/**
 *  删除一条线
 *  @param view 线对象
 *  @return 是否删除成功
 */
-(BOOL)TF_CODE_PRE(removeLineImageView):(UIView *)view;


#pragma mark view backgroundView 操作 --
@property (nonatomic,strong)UIImageView *TF_CODE_PRE(backgroundView0);
@property (nonatomic,strong)UIImageView *TF_CODE_PRE(backgroundView1);
@property (nonatomic,strong)UIImageView *TF_CODE_PRE(backgroundView2);
@property (nonatomic,strong)UIImageView *TF_CODE_PRE(backgroundView3);

-(void)TF_CODE_PRE(creatBackgroundView0):(BOOL)backgroundView0
                         BackgroundView1:(BOOL)backgroundView1
                         BackgroundView2:(BOOL)backgroundView2
                         BackgroundView3:(BOOL)backgroundView3;

-(UIImageView *)TF_CODE_PRE(creatBackgroundView);
-(UIImageView *)TF_CODE_PRE(creatBackgroundViewForKey):(NSString *)key;
-(UIImageView *)TF_CODE_PRE(getBackgroundViewForKey):(NSString *)key;

-(void)TF_CODE_PRE(removeBackgroundViewAll);
-(BOOL)TF_CODE_PRE(removeBackgroundViewForKey):(NSString *)key;
-(BOOL)TF_CODE_PRE(removeBackgroundView):(UIView *)view;

@end
