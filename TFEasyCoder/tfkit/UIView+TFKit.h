//
//  UIView+TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFEasyCoderConst.h"

typedef NS_ENUM(NSInteger,LineDirection) {
    LineDirectionTop,
    LineDirectionLeft,
    LineDirectionBottom,
    LineDirectionRight,
};

@interface UIView (TFKit)

#pragma mark view操作 --
+(instancetype)tf_code_pre(xib);

#pragma mark 屏幕尺寸的获取 --
/**
 *  设备尺寸操作,提供静态方法访问和属性访问
 */
@property (nonatomic,assign,readonly)CGRect tf_code_pre(screenBounds);
@property (nonatomic,assign,readonly)CGSize tf_code_pre(screenSize);
@property (nonatomic,assign,readonly)CGPoint tf_code_pre(screenOrigin);
@property (nonatomic,assign,readonly)CGFloat tf_code_pre(screenWidth);
@property (nonatomic,assign,readonly)CGFloat tf_code_pre(screenHeight);
+(CGRect)tf_code_pre(screenBounds);
+(CGSize)tf_code_pre(screenSize);
+(CGPoint)tf_code_pre(screenOrigin);
+(CGFloat)tf_code_pre(screenWidth);
+(CGFloat)tf_code_pre(screenHeight);

/**
 *  zsl-wdl
 *  各种bar 的高度
 */
@property (nonatomic,assign,readonly)CGFloat tf_code_pre(statusBarHeight);
@property (nonatomic,assign,readonly)CGFloat tf_code_pre(navigationBarHeight);
@property (nonatomic,assign,readonly)CGFloat tf_code_pre(tabBarHeight);
@property (nonatomic,assign,readonly)CGFloat tf_code_pre(navStatusBarHeight);
+(CGFloat)tf_code_pre(statusBarHeight);
+(CGFloat)tf_code_pre(navigationBarHeight);
+(CGFloat)tf_code_pre(tabBarHeight);
+(CGFloat)tf_code_pre(navStatusBarHeight);


#pragma mark view尺寸操作 --
/**
 *  当前view一些Frame值
 */
@property (nonatomic,assign,setter=set_origin:)CGPoint tf_code_pre(origin);
@property (nonatomic,assign,setter=set_x:)CGFloat tf_code_pre(x);
@property (nonatomic,assign,setter=set_y:)CGFloat tf_code_pre(y);
@property (nonatomic,assign,readonly)CGFloat tf_code_pre(max_x);
@property (nonatomic,assign,readonly)CGFloat tf_code_pre(max_y);
@property (nonatomic,assign,setter=set_leftTop:)CGPoint tf_code_pre(leftTop);
@property (nonatomic,assign,setter=set_rightTop:)CGPoint tf_code_pre(rightTop);
@property (nonatomic,assign,setter=set_leftBottom:)CGPoint tf_code_pre(leftBottom);
@property (nonatomic,assign,setter=set_rightBottom:)CGPoint tf_code_pre(rightBottom);

@property (nonatomic,assign,setter=set_size:)CGSize  tf_code_pre(size);
@property (nonatomic,assign,setter=set_width:)CGFloat tf_code_pre(width);
@property (nonatomic,assign,setter=set_height:)CGFloat tf_code_pre(height);

@property (nonatomic,assign,setter=set_center:)CGPoint tf_code_pre(center);
@property (nonatomic,assign,setter=set_center_x:)CGFloat tf_code_pre(center_x);
@property (nonatomic,assign,setter=set_center_y:)CGFloat tf_code_pre(center_y);

@property (nonatomic,assign,readonly)CGPoint tf_code_pre(center_abs);
@property (nonatomic,assign,readonly)CGFloat tf_code_pre(center_abs_x);
@property (nonatomic,assign,readonly)CGFloat tf_code_pre(center_abs_y);




#pragma mark view 分割线操作 --
/**
 *  四个默认的分割线,需要先调用xx_creatLineImageView0 方法
 */
@property (nonatomic,strong,setter=set_lineImageView0:)UIImageView *tf_code_pre(lineImageView0);
@property (nonatomic,strong,setter=set_lineImageView1:)UIImageView *tf_code_pre(lineImageView1);
@property (nonatomic,strong,setter=set_lineImageView2:)UIImageView *tf_code_pre(lineImageView2);
@property (nonatomic,strong,setter=set_lineImageView3:)UIImageView *tf_code_pre(lineImageView3);

/**
 *  实例化默认提供的四条分割线,每个布尔值分别对应上面属性的每一条线
 *
 */
-(void)tf_code_pre(creatLineImageView0):(BOOL)lineImageView0
                         LineImageView1:(BOOL)lineImageView1
                         LineImageView2:(BOOL)lineImageView2
                         LineImageView3:(BOOL)lineImageView3;

/**
 *  如果上面的四条线还不够用,还可以单加,每调用一次生成一个实例,并返回
 *
 *  @return
 */
-(UIImageView *)tf_code_pre(creatLineImageView);
/**
 *  同上,不过这个可以创建一个key对应线,可以通过这个key获取线
 *
 *  @return
 */
-(UIImageView *)tf_code_pre(creatLineImageViewForKey):(NSString *)key;
/**
 *  通过key获取线
 *  @param key key
 *  @return
 */
-(UIImageView *)tf_code_pre(getLineImageViewForKey):(NSString *)key;
/**
 *  删除所有线,对这个方法xx_creatLineImageView0不起作用
 */
-(void)tf_code_pre(removeLineImageViewAll);
/**
 *  删除一条线
 *  @param key 线对应的key
 *  @return 是否删除成功
 */
-(BOOL)tf_code_pre(removeLineImageViewForKey):(NSString *)key;
/**
 *  删除一条线
 *  @param view 线对象
 *  @return 是否删除成功
 */
-(BOOL)tf_code_pre(removeLineImageView):(UIView *)view;


/**
 *  添加一条线 四个方向
 */
-(UIImageView *)tf_code_pre(addLine):(LineDirection)direction;
@property (nonatomic,strong,setter=set_topLine:)UIImageView *tf_code_pre(topLine);
@property (nonatomic,strong,setter=set_leftLine:)UIImageView *tf_code_pre(leftLine);
@property (nonatomic,strong,setter=set_bottomLine:)UIImageView *tf_code_pre(bottomLine);
@property (nonatomic,strong,setter=set_rightLine:)UIImageView *tf_code_pre(rightLine);

#pragma mark view backgroundView 操作 --
@property (nonatomic,strong,setter=set_backgroundView0:)UIImageView *tf_code_pre(backgroundView0);
@property (nonatomic,strong,setter=set_backgroundView1:)UIImageView *tf_code_pre(backgroundView1);
@property (nonatomic,strong,setter=set_backgroundView2:)UIImageView *tf_code_pre(backgroundView2);
@property (nonatomic,strong,setter=set_backgroundView3:)UIImageView *tf_code_pre(backgroundView3);

-(void)tf_code_pre(creatBackgroundView0):(BOOL)backgroundView0
                         BackgroundView1:(BOOL)backgroundView1
                         BackgroundView2:(BOOL)backgroundView2
                         BackgroundView3:(BOOL)backgroundView3;

-(UIImageView *)tf_code_pre(creatBackgroundView);
-(UIImageView *)tf_code_pre(creatBackgroundViewForKey):(NSString *)key;
-(UIImageView *)tf_code_pre(getBackgroundViewForKey):(NSString *)key;

-(void)tf_code_pre(removeBackgroundViewAll);
-(BOOL)tf_code_pre(removeBackgroundViewForKey):(NSString *)key;
-(BOOL)tf_code_pre(removeBackgroundView):(UIView *)view;



@end
