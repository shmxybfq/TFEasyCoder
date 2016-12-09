//
//  UIView+TFKit.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "UIView+TFKit.h"
#import "NSObject+TFExecute.h"
@implementation UIView (TFKit)

@dynamic tf_screenBounds;
@dynamic tf_screenSize;
@dynamic tf_screenOrigin;
@dynamic tf_screenWidth;
@dynamic tf_screenHeight;

@dynamic tf_origin;
@dynamic tf_x;
@dynamic tf_y;
@dynamic tf_max_x;
@dynamic tf_max_y;

@dynamic tf_size;
@dynamic tf_width;
@dynamic tf_height;

@dynamic tf_center;
@dynamic tf_center_x;
@dynamic tf_center_y;

@dynamic tf_center_abs;
@dynamic tf_center_abs_x;
@dynamic tf_center_abs_y;

@dynamic tf_lineImageView0;
@dynamic tf_lineImageView1;
@dynamic tf_lineImageView2;
@dynamic tf_lineImageView3;

@dynamic tf_backgroundView0;
@dynamic tf_backgroundView1;
@dynamic tf_backgroundView2;
@dynamic tf_backgroundView3;


/**
 *  设备尺寸操作,提供静态方法访问和属性访问
 */
+(CGRect)tf_screenBounds{return [UIScreen mainScreen].bounds;}
-(CGRect)tf_screenBounds{return [UIView tf_screenBounds];}


+(CGSize)tf_screenSize{return [UIView tf_screenBounds].size;}
-(CGSize)tf_screenSize{return [UIView tf_screenBounds].size;}


+(CGPoint)tf_screenOrigin{return [UIView tf_screenBounds].origin;}
-(CGPoint)tf_screenOrigin{return [UIView tf_screenBounds].origin;}


+(CGFloat)tf_screenWidth{return [UIView tf_screenSize].width;}
-(CGFloat)tf_screenWidth{return [UIView tf_screenSize].width;}


+(CGFloat)tf_screenHeight{return [UIView tf_screenSize].height;}
-(CGFloat)tf_screenHeight{return [UIView tf_screenSize].height;}


/**
 *  view尺寸操作
 */
-(CGPoint)tf_origin{return  self.frame.origin;}
-(void)setTf_origin:(CGPoint)tf_origin{self.frame = CGRectMake(tf_origin.x, tf_origin.y, self.tf_width, self.tf_height);}


-(CGFloat)tf_x{return self.frame.origin.x;}
-(void)setTf_x:(CGFloat)tf_x{self.frame = CGRectMake(tf_x, self.tf_y, self.tf_width, self.tf_height);}


-(CGFloat)tf_y{return self.frame.origin.y;}
-(void)setTf_y:(CGFloat)tf_y{self.frame = CGRectMake(self.tf_y, tf_y, self.tf_width, self.tf_height);}


-(CGFloat)tf_max_x{return self.tf_x + self.tf_width;}
-(CGFloat)tf_max_y{return self.tf_y + self.tf_height;}


-(CGFloat)tf_width{return self.frame.size.width;}
-(void)setTf_width:(CGFloat)tf_width{self.frame = CGRectMake(self.tf_x,self.tf_y, tf_width, self.tf_height);}


-(CGFloat)tf_height{return self.frame.size.height;}
-(void)setTf_height:(CGFloat)tf_height{self.frame = CGRectMake(self.tf_x,self.tf_y, self.tf_width, tf_height);}


-(CGSize)tf_size{return self.frame.size;}
-(void)setTf_size:(CGSize)tf_size{self.frame = CGRectMake(self.tf_x, self.tf_y, tf_size.width, tf_size.height);}


-(CGPoint)tf_center{return  self.center;}
-(void)setTf_center:(CGPoint)tf_center{self.center = tf_center;}

-(CGFloat)tf_center_x{return self.center.x;}
-(void)setTf_center_x:(CGFloat)tf_center_x{self.center = CGPointMake(tf_center_x, self.center.y);}

-(CGFloat)tf_center_y{return self.center.y;}
-(void)setTf_center_y:(CGFloat)tf_center_y{self.center = CGPointMake(self.center.x, tf_center_y);}


-(CGPoint)tf_center_abs{return CGPointMake(self.tf_width * 0.5, self.tf_height * 0.5);}
-(CGFloat)tf_center_abs_x{return self.tf_width * 0.5;}
-(CGFloat)tf_center_abs_y{return self.tf_height * 0.5;}



-(UIImageView *)tf_creatLineImageView{
    return [self tf_creatLineImageViewForKey:nil];
}
static NSMutableDictionary *_tf_creatLineImageViews;
-(UIImageView *)tf_creatLineImageViewForKey:(NSString *)key{
    if (!_tf_creatLineImageViews)_tf_creatLineImageViews = [[NSMutableDictionary alloc]init];
    UIImageView *lineImageView = [[UIImageView alloc]initWithFrame:CGRectZero];
    lineImageView.backgroundColor = [UIColor lightGrayColor];
    [self addSubview:lineImageView];
    [_tf_creatLineImageViews setObject:lineImageView forKey:key?key:[NSDate date].description];
    return lineImageView;
}
-(BOOL)tf_removeLineImageViewForKey:(NSString *)key{
    UIImageView *lineImageView = [_tf_creatLineImageViews objectForKey:key];
    if (lineImageView) {
        [lineImageView removeFromSuperview];
        [_tf_creatLineImageViews removeObjectForKey:key];
        return YES;
    }
    return NO;
}
-(void)tf_removeLineImageViewAll{
    NSArray *keys = _tf_creatLineImageViews.allKeys;
    for (NSString *key in keys) {
        UIView *view = [_tf_creatLineImageViews objectForKey:key];
        [view removeFromSuperview];
    }
    [_tf_creatLineImageViews removeAllObjects];
}

-(void)tf_creatLineImageView0:(BOOL)lineImageView0
               LineImageView1:(BOOL)lineImageView1
               LineImageView2:(BOOL)lineImageView2
               LineImageView3:(BOOL)lineImageView3{
    
    [self tf_synthesizeAllCategoryPropertyForSelf];
    
    if (lineImageView0) {
        self.tf_lineImageView0 = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_lineImageView0.backgroundColor = [UIColor lightGrayColor];
        [self addSubview:self.tf_lineImageView0];
    }else{
        [self.tf_lineImageView0 removeFromSuperview];
        self.tf_lineImageView0 = nil;
    }
    
    if (lineImageView1) {
        self.tf_lineImageView1 = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_lineImageView1.backgroundColor = [UIColor lightGrayColor];
        [self addSubview:self.tf_lineImageView1];
    }else{
        [self.tf_lineImageView1 removeFromSuperview];
        self.tf_lineImageView1 = nil;
    }
    
    if (lineImageView2) {
        self.tf_lineImageView2 = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_lineImageView2.backgroundColor = [UIColor lightGrayColor];
        [self addSubview:self.tf_lineImageView2];
    }else{
        [self.tf_lineImageView2 removeFromSuperview];
        self.tf_lineImageView2 = nil;
    }
    
    if (lineImageView3) {
        self.tf_lineImageView3 = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_lineImageView3.backgroundColor = [UIColor lightGrayColor];
        [self addSubview:self.tf_lineImageView3];
    }else{
        [self.tf_lineImageView3 removeFromSuperview];
        self.tf_lineImageView3 = nil;
    }
}


-(UIImageView *)tf_creatBackgroundView{
    return [self tf_creatLineImageViewForKey:nil];
}
static NSMutableDictionary *_tf_creatBackgroundViews;
-(UIImageView *)tf_creatBackgroundViewForKey:(NSString *)key{
    if (!_tf_creatBackgroundViews)_tf_creatBackgroundViews = [[NSMutableDictionary alloc]init];
    UIImageView *backgroundView = [[UIImageView alloc]initWithFrame:CGRectZero];
    backgroundView.backgroundColor = [UIColor lightGrayColor];
    [self addSubview:backgroundView];
    [_tf_creatBackgroundViews setObject:backgroundView forKey:key?key:[NSDate date].description];
    return backgroundView;
}
-(BOOL)tf_removeBackgroundViewForKey:(NSString *)key{
    UIImageView *backgroundView = [_tf_creatBackgroundViews objectForKey:key];
    if (backgroundView) {
        [backgroundView removeFromSuperview];
        [_tf_creatBackgroundViews removeObjectForKey:key];
        return YES;
    }
    return NO;
}
-(void)tf_removeBackgroundViewAll{
    NSArray *keys = _tf_creatBackgroundViews.allKeys;
    for (NSString *key in keys) {
        UIView *view = [_tf_creatBackgroundViews objectForKey:key];
        [view removeFromSuperview];
    }
    [_tf_creatBackgroundViews removeAllObjects];
}

-(void)tf_creatBackgroundView0:(BOOL)backgroundView0
               BackgroundView1:(BOOL)backgroundView1
               BackgroundView2:(BOOL)backgroundView2
               BackgroundView3:(BOOL)backgroundView3{
    
    [self tf_synthesizeAllCategoryPropertyForSelf];

    if (backgroundView0) {
        self.tf_backgroundView0 = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_backgroundView0.backgroundColor = [UIColor whiteColor];
        self.tf_backgroundView0.userInteractionEnabled = YES;
        [self addSubview:self.tf_backgroundView0];
    }else{
        [self.tf_backgroundView0 removeFromSuperview];
        self.tf_backgroundView0 = nil;
    }
    
    if (backgroundView1) {
        self.tf_backgroundView1 = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_backgroundView1.backgroundColor = [UIColor lightGrayColor];
        self.tf_backgroundView1.userInteractionEnabled = YES;
        [self addSubview:self.tf_backgroundView1];
    }else{
        [self.tf_backgroundView1 removeFromSuperview];
        self.tf_backgroundView1 = nil;
    }
    
    if (backgroundView2) {
        self.tf_backgroundView2 = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_backgroundView2.backgroundColor = [UIColor whiteColor];
        self.tf_backgroundView2.userInteractionEnabled = YES;
        [self addSubview:self.tf_backgroundView2];
    }else{
        [self.tf_backgroundView2 removeFromSuperview];
        self.tf_backgroundView2 = nil;
    }
    
    
    if (backgroundView3) {
        self.tf_backgroundView3 = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_backgroundView3.backgroundColor = [UIColor whiteColor];
        self.tf_backgroundView3.userInteractionEnabled = YES;
        [self addSubview:self.tf_backgroundView3];
    }else{
        [self.tf_backgroundView3 removeFromSuperview];
        self.tf_backgroundView3 = nil;
    }
}


@end
