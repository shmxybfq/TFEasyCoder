//
//  UIView+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIView+TFKit.h"
#import "NSObject+TFExecute.h"
@implementation UIView (TFKit)

@dynamic TF_CODE_PRE(screenBounds);
@dynamic TF_CODE_PRE(screenSize);
@dynamic TF_CODE_PRE(screenOrigin);
@dynamic TF_CODE_PRE(screenWidth);
@dynamic TF_CODE_PRE(screenHeight);

@dynamic TF_CODE_PRE(origin);
@dynamic TF_CODE_PRE(x);
@dynamic TF_CODE_PRE(y);
@dynamic TF_CODE_PRE(max_x);
@dynamic TF_CODE_PRE(max_y);

@dynamic TF_CODE_PRE(size);
@dynamic TF_CODE_PRE(width);
@dynamic TF_CODE_PRE(height);

@dynamic TF_CODE_PRE(center);
@dynamic TF_CODE_PRE(center_x);
@dynamic TF_CODE_PRE(center_y);

@dynamic TF_CODE_PRE(center_abs);
@dynamic TF_CODE_PRE(center_abs_x);
@dynamic TF_CODE_PRE(center_abs_y);

@dynamic TF_CODE_PRE(lineImageView0);
@dynamic TF_CODE_PRE(lineImageView1);
@dynamic TF_CODE_PRE(lineImageView2);
@dynamic TF_CODE_PRE(lineImageView3);

@dynamic TF_CODE_PRE(backgroundView0);
@dynamic TF_CODE_PRE(backgroundView1);
@dynamic TF_CODE_PRE(backgroundView2);
@dynamic TF_CODE_PRE(backgroundView3);


/**
 *  设备尺寸操作,提供静态方法访问和属性访问
 */
+(CGRect)TF_CODE_PRE(screenBounds){return [UIScreen mainScreen].bounds;}
-(CGRect)TF_CODE_PRE(screenBounds){return [UIView TF_CODE_PRE(screenBounds)];}


+(CGSize)TF_CODE_PRE(screenSize){return [UIView TF_CODE_PRE(screenBounds)].size;}
-(CGSize)TF_CODE_PRE(screenSize){return [UIView TF_CODE_PRE(screenBounds)].size;}


+(CGPoint)TF_CODE_PRE(screenOrigin){return [UIView TF_CODE_PRE(screenBounds)].origin;}
-(CGPoint)TF_CODE_PRE(screenOrigin){return [UIView TF_CODE_PRE(screenBounds)].origin;}


+(CGFloat)TF_CODE_PRE(screenWidth){return [UIView TF_CODE_PRE(screenSize)].width;}
-(CGFloat)TF_CODE_PRE(screenWidth){return [UIView TF_CODE_PRE(screenSize)].width;}


+(CGFloat)TF_CODE_PRE(screenHeight){return [UIView TF_CODE_PRE(screenSize)].height;}
-(CGFloat)TF_CODE_PRE(screenHeight){return [UIView TF_CODE_PRE(screenSize)].height;}


/**
 *  view尺寸操作
 */
-(CGPoint)TF_CODE_PRE(origin){return  self.frame.origin;}
-(void)set_origin:(CGPoint)tf_origin{
    self.frame = CGRectMake(tf_origin.x, tf_origin.y, self.TF_CODE_PRE(width), self.TF_CODE_PRE(height));
}


-(CGFloat)TF_CODE_PRE(x){return self.frame.origin.x;}
-(void)set_x:(CGFloat)tf_x{
    self.frame = CGRectMake(tf_x, self.TF_CODE_PRE(y), self.TF_CODE_PRE(width), self.TF_CODE_PRE(height));
}


-(CGFloat)TF_CODE_PRE(y){return self.frame.origin.y;}
-(void)set_y:(CGFloat)tf_y{
    self.frame = CGRectMake(self.TF_CODE_PRE(x), tf_y, self.TF_CODE_PRE(width), self.TF_CODE_PRE(height));
}


-(CGFloat)TF_CODE_PRE(max_x){return self.TF_CODE_PRE(x) + self.TF_CODE_PRE(width);}
-(CGFloat)TF_CODE_PRE(max_y){return self.TF_CODE_PRE(y) + self.TF_CODE_PRE(height);}

-(CGPoint)TF_CODE_PRE(leftTop){return self.frame.origin;}
-(void)set_leftTop:(CGPoint)tf_leftTop{
    self.frame = CGRectMake(tf_leftTop.x, tf_leftTop.y, self.TF_CODE_PRE(height), self.TF_CODE_PRE(width));
}

-(CGPoint)TF_CODE_PRE(rightTop){return CGPointMake(self.TF_CODE_PRE(x) + self.TF_CODE_PRE(width), self.TF_CODE_PRE(y));}
-(void)set_rightTop:(CGPoint)tf_rightTop{
    self.frame = CGRectMake(tf_rightTop.x - self.TF_CODE_PRE(width), tf_rightTop.y, self.TF_CODE_PRE(width), self.TF_CODE_PRE(height));
}

-(CGPoint)TF_CODE_PRE(leftBottom){return CGPointMake(self.TF_CODE_PRE(x), self.TF_CODE_PRE(y) + self.TF_CODE_PRE(height));}
-(void)set_leftBottom:(CGPoint)tf_leftBottom{
    self.frame = CGRectMake(tf_leftBottom.x, tf_leftBottom.y - self.TF_CODE_PRE(height), self.TF_CODE_PRE(width), self.TF_CODE_PRE(height));
}

-(CGPoint)TF_CODE_PRE(rightBottom){return CGPointMake(self.TF_CODE_PRE(x) + self.TF_CODE_PRE(width), self.TF_CODE_PRE(y) + self.TF_CODE_PRE(height));}
-(void)set_rightBottom:(CGPoint)tf_rightBottom{
    self.frame = CGRectMake(tf_rightBottom.x - self.TF_CODE_PRE(width),
                            tf_rightBottom.y - self.TF_CODE_PRE(height),
                            self.TF_CODE_PRE(width),
                            self.TF_CODE_PRE(height));
}


-(CGFloat)TF_CODE_PRE(width){return self.frame.size.width;}
-(void)set_width:(CGFloat)tf_width{
    self.frame = CGRectMake(self.TF_CODE_PRE(x),self.TF_CODE_PRE(y),tf_width,self.TF_CODE_PRE(height));
}


-(CGFloat)TF_CODE_PRE(height){return self.frame.size.height;}
-(void)set_height:(CGFloat)tf_height{
    self.frame = CGRectMake(self.TF_CODE_PRE(x),self.TF_CODE_PRE(y),self.TF_CODE_PRE(width), tf_height);
}


-(CGSize)TF_CODE_PRE(size){return self.frame.size;}
-(void)set_size:(CGSize)tf_size{
    self.frame = CGRectMake(self.TF_CODE_PRE(x),self.TF_CODE_PRE(y),tf_size.width, tf_size.height);
}


-(CGPoint)TF_CODE_PRE(center){return  self.center;}
-(void)set_center:(CGPoint)tf_center{
    self.center = tf_center;
}

-(CGFloat)TF_CODE_PRE(center_x){return self.center.x;}
-(void)set_center_x:(CGFloat)tf_center_x{
    self.center = CGPointMake(tf_center_x, self.TF_CODE_PRE(center_y));
}

-(CGFloat)TF_CODE_PRE(center_y){return self.center.y;}
-(void)set_center_y:(CGFloat)tf_center_y{
    self.center = CGPointMake(self.TF_CODE_PRE(center_x), tf_center_y);
}


-(CGPoint)TF_CODE_PRE(center_abs){return CGPointMake(self.TF_CODE_PRE(width) * 0.5, self.TF_CODE_PRE(height) * 0.5);}
-(CGFloat)TF_CODE_PRE(center_abs_x){return self.TF_CODE_PRE(width) * 0.5;}
-(CGFloat)TF_CODE_PRE(center_abs_y){return self.TF_CODE_PRE(height) * 0.5;}



-(UIImageView *)TF_CODE_PRE(creatLineImageView){
    return [self TF_CODE_PRE(creatLineImageViewForKey):nil];
}
static NSMutableDictionary *TF_CODE_PRE(creatLineImageViews);
-(UIImageView *)TF_CODE_PRE(creatLineImageViewForKey):(NSString *)key{
    if (!TF_CODE_PRE(creatLineImageViews))TF_CODE_PRE(creatLineImageViews) = [[NSMutableDictionary alloc]init];
    UIImageView *lineImageView = [[UIImageView alloc]initWithFrame:CGRectZero];
    lineImageView.backgroundColor = [UIColor lightGrayColor];
    [self addSubview:lineImageView];
    [TF_CODE_PRE(creatLineImageViews) setObject:lineImageView forKey:key?key:[NSDate date].description];
    return lineImageView;
}
-(UIImageView *)TF_CODE_PRE(getLineImageViewForKey):(NSString *)key{
    return [TF_CODE_PRE(creatLineImageViews) objectForKey:key];
}
-(BOOL)TF_CODE_PRE(removeLineImageViewForKey):(NSString *)key{
    UIImageView *lineImageView = [TF_CODE_PRE(creatLineImageViews) objectForKey:key];
    if (lineImageView) {
        [lineImageView removeFromSuperview];
        [TF_CODE_PRE(creatLineImageViews) removeObjectForKey:key];
        return YES;
    }
    return NO;
}
-(void)TF_CODE_PRE(removeLineImageViewAll){
    NSArray *keys = TF_CODE_PRE(creatLineImageViews).allKeys;
    for (NSString *key in keys) {
        UIView *view = [TF_CODE_PRE(creatLineImageViews) objectForKey:key];
        [view removeFromSuperview];
    }
    [TF_CODE_PRE(creatLineImageViews) removeAllObjects];
}
-(BOOL)TF_CODE_PRE(removeLineImageView):(UIView *)view{
    NSArray *keys = TF_CODE_PRE(creatLineImageViews).allKeys;
    for (NSString *key in keys) {
        UIView *tmpView = [TF_CODE_PRE(creatLineImageViews) objectForKey:key];
        if (view == tmpView) {
            [view removeFromSuperview];
            [TF_CODE_PRE(creatLineImageViews) removeObjectForKey:key];
            return YES;
        }
    }
    return NO;
}
-(void)TF_CODE_PRE(creatLineImageView0):(BOOL)lineImageView0
                         LineImageView1:(BOOL)lineImageView1
                         LineImageView2:(BOOL)lineImageView2
                         LineImageView3:(BOOL)lineImageView3{
    
    [self tf_synthesizeAllCategoryPropertyForSelf];
    
    if (lineImageView0) {
        self.TF_CODE_PRE(lineImageView0) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.TF_CODE_PRE(lineImageView0).backgroundColor = [UIColor lightGrayColor];
        [self addSubview:self.TF_CODE_PRE(lineImageView0)];
    }else{
        [self.TF_CODE_PRE(lineImageView0) removeFromSuperview];
        self.TF_CODE_PRE(lineImageView0) = nil;
    }
    
    if (lineImageView1) {
        self.TF_CODE_PRE(lineImageView1) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.TF_CODE_PRE(lineImageView1).backgroundColor = [UIColor lightGrayColor];
        [self addSubview:self.TF_CODE_PRE(lineImageView1)];
    }else{
        [self.TF_CODE_PRE(lineImageView1) removeFromSuperview];
        self.TF_CODE_PRE(lineImageView1) = nil;
    }
    
    if (lineImageView2) {
        self.TF_CODE_PRE(lineImageView2) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.TF_CODE_PRE(lineImageView2).backgroundColor = [UIColor lightGrayColor];
        [self addSubview:self.TF_CODE_PRE(lineImageView2)];
    }else{
        [self.TF_CODE_PRE(lineImageView2) removeFromSuperview];
        self.TF_CODE_PRE(lineImageView2) = nil;
    }
    
    if (lineImageView3) {
        self.TF_CODE_PRE(lineImageView3) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.TF_CODE_PRE(lineImageView3).backgroundColor = [UIColor lightGrayColor];
        [self addSubview:self.TF_CODE_PRE(lineImageView3)];
    }else{
        [self.TF_CODE_PRE(lineImageView3) removeFromSuperview];
        self.TF_CODE_PRE(lineImageView3) = nil;
    }
}


-(UIImageView *)TF_CODE_PRE(creatBackgroundView){
    return [self TF_CODE_PRE(creatLineImageViewForKey):nil];
}
static NSMutableDictionary *TF_CODE_PRE(creatBackgroundViews);
-(UIImageView *)TF_CODE_PRE(creatBackgroundViewForKey):(NSString *)key{
    if (!TF_CODE_PRE(creatBackgroundViews)) TF_CODE_PRE(creatBackgroundViews) = [[NSMutableDictionary alloc]init];
    UIImageView *backgroundView = [[UIImageView alloc]initWithFrame:CGRectZero];
    backgroundView.backgroundColor = [UIColor lightGrayColor];
    [self addSubview:backgroundView];
    [TF_CODE_PRE(creatBackgroundViews) setObject:backgroundView forKey:key?key:[NSDate date].description];
    return backgroundView;
}
-(UIImageView *)TF_CODE_PRE(getBackgroundViewForKey):(NSString *)key{
    return [TF_CODE_PRE(creatBackgroundViews) objectForKey:key];
}
-(BOOL)TF_CODE_PRE(removeBackgroundViewForKey):(NSString *)key{
    UIImageView *backgroundView = [TF_CODE_PRE(creatBackgroundViews) objectForKey:key];
    if (backgroundView) {
        [backgroundView removeFromSuperview];
        [TF_CODE_PRE(creatBackgroundViews) removeObjectForKey:key];
        return YES;
    }
    return NO;
}
-(void)TF_CODE_PRE(removeBackgroundViewAll){
    NSArray *keys = TF_CODE_PRE(creatBackgroundViews).allKeys;
    for (NSString *key in keys) {
        UIView *view = [TF_CODE_PRE(creatBackgroundViews) objectForKey:key];
        [view removeFromSuperview];
    }
    [TF_CODE_PRE(creatBackgroundViews) removeAllObjects];
}
-(BOOL)TF_CODE_PRE(removeBackgroundView):(UIView *)view{
    NSArray *keys = TF_CODE_PRE(creatBackgroundViews).allKeys;
    for (NSString *key in keys) {
        UIView *tmpView = [TF_CODE_PRE(creatBackgroundViews) objectForKey:key];
        if (view == tmpView) {
            [view removeFromSuperview];
            [TF_CODE_PRE(creatBackgroundViews) removeObjectForKey:key];
            return YES;
        }
    }
    return NO;
}
-(void)TF_CODE_PRE(creatBackgroundView0):(BOOL)backgroundView0
                         BackgroundView1:(BOOL)backgroundView1
                         BackgroundView2:(BOOL)backgroundView2
                         BackgroundView3:(BOOL)backgroundView3{
    
    [self tf_synthesizeAllCategoryPropertyForSelf];

    if (backgroundView0) {
        self.TF_CODE_PRE(backgroundView0) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.TF_CODE_PRE(backgroundView0).backgroundColor = [UIColor whiteColor];
        self.TF_CODE_PRE(backgroundView0).userInteractionEnabled = YES;
        [self addSubview:self.TF_CODE_PRE(backgroundView0)];
    }else{
        [self.TF_CODE_PRE(backgroundView0) removeFromSuperview];
        self.TF_CODE_PRE(backgroundView0) = nil;
    }
    
    if (backgroundView1) {
        self.TF_CODE_PRE(backgroundView1) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.TF_CODE_PRE(backgroundView1).backgroundColor = [UIColor lightGrayColor];
        self.TF_CODE_PRE(backgroundView1).userInteractionEnabled = YES;
        [self addSubview:self.TF_CODE_PRE(backgroundView1)];
    }else{
        [self.TF_CODE_PRE(backgroundView1) removeFromSuperview];
        self.TF_CODE_PRE(backgroundView1) = nil;
    }
    
    if (backgroundView2) {
        self.TF_CODE_PRE(backgroundView2) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.TF_CODE_PRE(backgroundView2).backgroundColor = [UIColor whiteColor];
        self.TF_CODE_PRE(backgroundView2).userInteractionEnabled = YES;
        [self addSubview:self.TF_CODE_PRE(backgroundView2)];
    }else{
        [self.TF_CODE_PRE(backgroundView2) removeFromSuperview];
        self.TF_CODE_PRE(backgroundView2) = nil;
    }
    
    
    if (backgroundView3) {
        self.TF_CODE_PRE(backgroundView3) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.TF_CODE_PRE(backgroundView3).backgroundColor = [UIColor whiteColor];
        self.TF_CODE_PRE(backgroundView3).userInteractionEnabled = YES;
        [self addSubview:self.TF_CODE_PRE(backgroundView3)];
    }else{
        [self.TF_CODE_PRE(backgroundView3) removeFromSuperview];
        self.TF_CODE_PRE(backgroundView3) = nil;
    }
}


#pragma mark view 加密解密 --

@end
