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

@dynamic tf_code_pre(screenBounds);
@dynamic tf_code_pre(screenSize);
@dynamic tf_code_pre(screenOrigin);
@dynamic tf_code_pre(screenWidth);
@dynamic tf_code_pre(screenHeight);

@dynamic tf_code_pre(origin);
@dynamic tf_code_pre(x);
@dynamic tf_code_pre(y);
@dynamic tf_code_pre(max_x);
@dynamic tf_code_pre(max_y);

@dynamic tf_code_pre(size);
@dynamic tf_code_pre(width);
@dynamic tf_code_pre(height);

@dynamic tf_code_pre(center);
@dynamic tf_code_pre(center_x);
@dynamic tf_code_pre(center_y);

@dynamic tf_code_pre(center_abs);
@dynamic tf_code_pre(center_abs_x);
@dynamic tf_code_pre(center_abs_y);

@dynamic tf_code_pre(lineImageView0);
@dynamic tf_code_pre(lineImageView1);
@dynamic tf_code_pre(lineImageView2);
@dynamic tf_code_pre(lineImageView3);

@dynamic tf_code_pre(backgroundView0);
@dynamic tf_code_pre(backgroundView1);
@dynamic tf_code_pre(backgroundView2);
@dynamic tf_code_pre(backgroundView3);

#pragma mark view操作 --
+(instancetype)tf_code_pre(xib){
    NSString *cls = NSStringFromClass([self class]);
    UIView *ins = [[NSBundle mainBundle]loadNibNamed:cls
                                               owner:nil
                                             options:nil].firstObject;
    return ins;
}

/**
 *  设备尺寸操作,提供静态方法访问和属性访问
 */
+(CGRect)tf_code_pre(screenBounds){return [UIScreen mainScreen].bounds;}
-(CGRect)tf_code_pre(screenBounds){return [UIView tf_code_pre(screenBounds)];}


+(CGSize)tf_code_pre(screenSize){return [UIView tf_code_pre(screenBounds)].size;}
-(CGSize)tf_code_pre(screenSize){return [UIView tf_code_pre(screenBounds)].size;}


+(CGPoint)tf_code_pre(screenOrigin){return [UIView tf_code_pre(screenBounds)].origin;}
-(CGPoint)tf_code_pre(screenOrigin){return [UIView tf_code_pre(screenBounds)].origin;}


+(CGFloat)tf_code_pre(screenWidth){return [UIView tf_code_pre(screenSize)].width;}
-(CGFloat)tf_code_pre(screenWidth){return [UIView tf_code_pre(screenSize)].width;}


+(CGFloat)tf_code_pre(screenHeight){return [UIView tf_code_pre(screenSize)].height;}
-(CGFloat)tf_code_pre(screenHeight){return [UIView tf_code_pre(screenSize)].height;}


/**
 *  zsl-wdl
 *  各种bar 的高度
 */
+(CGFloat)tf_code_pre(statusBarHeight){return 20;}
-(CGFloat)tf_code_pre(statusBarHeight){return 20;}

+(CGFloat)tf_code_pre(navigationBarHeight){return 44;}
-(CGFloat)tf_code_pre(navigationBarHeight){return 44;}

+(CGFloat)tf_code_pre(tabBarHeight){return 49;}
-(CGFloat)tf_code_pre(tabBarHeight){return 49;}

+(CGFloat)tf_code_pre(navStatusBarHeight){return 64;}
-(CGFloat)tf_code_pre(navStatusBarHeight){return 64;}


/**
 *  view尺寸操作
 */
-(CGPoint)tf_code_pre(origin){return  self.frame.origin;}
-(void)set_origin:(CGPoint)tf_origin{
    self.frame = CGRectMake(tf_origin.x, tf_origin.y, self.tf_code_pre(width), self.tf_code_pre(height));
}


-(CGFloat)tf_code_pre(x){return self.frame.origin.x;}
-(void)set_x:(CGFloat)tf_x{
    self.frame = CGRectMake(tf_x, self.tf_code_pre(y), self.tf_code_pre(width), self.tf_code_pre(height));
}


-(CGFloat)tf_code_pre(y){return self.frame.origin.y;}
-(void)set_y:(CGFloat)tf_y{
    self.frame = CGRectMake(self.tf_code_pre(x), tf_y, self.tf_code_pre(width), self.tf_code_pre(height));
}


-(CGFloat)tf_code_pre(max_x){return self.tf_code_pre(x) + self.tf_code_pre(width);}
-(CGFloat)tf_code_pre(max_y){return self.tf_code_pre(y) + self.tf_code_pre(height);}

-(CGPoint)tf_code_pre(leftTop){return self.frame.origin;}
-(void)set_leftTop:(CGPoint)tf_leftTop{
    self.frame = CGRectMake(tf_leftTop.x, tf_leftTop.y, self.tf_code_pre(height), self.tf_code_pre(width));
}

-(CGPoint)tf_code_pre(rightTop){return CGPointMake(self.tf_code_pre(x) + self.tf_code_pre(width), self.tf_code_pre(y));}
-(void)set_rightTop:(CGPoint)tf_rightTop{
    self.frame = CGRectMake(tf_rightTop.x - self.tf_code_pre(width), tf_rightTop.y, self.tf_code_pre(width), self.tf_code_pre(height));
}

-(CGPoint)tf_code_pre(leftBottom){return CGPointMake(self.tf_code_pre(x), self.tf_code_pre(y) + self.tf_code_pre(height));}
-(void)set_leftBottom:(CGPoint)tf_leftBottom{
    self.frame = CGRectMake(tf_leftBottom.x, tf_leftBottom.y - self.tf_code_pre(height), self.tf_code_pre(width), self.tf_code_pre(height));
}

-(CGPoint)tf_code_pre(rightBottom){return CGPointMake(self.tf_code_pre(x) + self.tf_code_pre(width), self.tf_code_pre(y) + self.tf_code_pre(height));}
-(void)set_rightBottom:(CGPoint)tf_rightBottom{
    self.frame = CGRectMake(tf_rightBottom.x - self.tf_code_pre(width),
                            tf_rightBottom.y - self.tf_code_pre(height),
                            self.tf_code_pre(width),
                            self.tf_code_pre(height));
}


-(CGFloat)tf_code_pre(width){return self.frame.size.width;}
-(void)set_width:(CGFloat)tf_width{
    self.frame = CGRectMake(self.tf_code_pre(x),self.tf_code_pre(y),tf_width,self.tf_code_pre(height));
}


-(CGFloat)tf_code_pre(height){return self.frame.size.height;}
-(void)set_height:(CGFloat)tf_height{
    self.frame = CGRectMake(self.tf_code_pre(x),self.tf_code_pre(y),self.tf_code_pre(width), tf_height);
}


-(CGSize)tf_code_pre(size){return self.frame.size;}
-(void)set_size:(CGSize)tf_size{
    self.frame = CGRectMake(self.tf_code_pre(x),self.tf_code_pre(y),tf_size.width, tf_size.height);
}


-(CGPoint)tf_code_pre(center){return  self.center;}
-(void)set_center:(CGPoint)tf_center{
    self.center = tf_center;
}

-(CGFloat)tf_code_pre(center_x){return self.center.x;}
-(void)set_center_x:(CGFloat)tf_center_x{
    self.center = CGPointMake(tf_center_x, self.tf_code_pre(center_y));
}

-(CGFloat)tf_code_pre(center_y){return self.center.y;}
-(void)set_center_y:(CGFloat)tf_center_y{
    self.center = CGPointMake(self.tf_code_pre(center_x), tf_center_y);
}


-(CGPoint)tf_code_pre(center_abs){return CGPointMake(self.tf_code_pre(width) * 0.5, self.tf_code_pre(height) * 0.5);}
-(CGFloat)tf_code_pre(center_abs_x){return self.tf_code_pre(width) * 0.5;}
-(CGFloat)tf_code_pre(center_abs_y){return self.tf_code_pre(height) * 0.5;}



-(UIImageView *)tf_code_pre(creatLineImageView){
    return [self tf_code_pre(creatLineImageViewForKey):nil];
}
static NSMutableDictionary *tf_code_pre(creatLineImageViews);
-(UIImageView *)tf_code_pre(creatLineImageViewForKey):(NSString *)key{
    if (!tf_code_pre(creatLineImageViews))tf_code_pre(creatLineImageViews) = [[NSMutableDictionary alloc]init];
    UIImageView *lineImageView = [[UIImageView alloc]initWithFrame:CGRectZero];
    lineImageView.backgroundColor = [UIColor lightGrayColor];
    [self addSubview:lineImageView];
    [tf_code_pre(creatLineImageViews) setObject:lineImageView forKey:key?key:[NSDate date].description];
    return lineImageView;
}
-(UIImageView *)tf_code_pre(getLineImageViewForKey):(NSString *)key{
    return [tf_code_pre(creatLineImageViews) objectForKey:key];
}
-(BOOL)tf_code_pre(removeLineImageViewForKey):(NSString *)key{
    UIImageView *lineImageView = [tf_code_pre(creatLineImageViews) objectForKey:key];
    if (lineImageView) {
        [lineImageView removeFromSuperview];
        [tf_code_pre(creatLineImageViews) removeObjectForKey:key];
        return YES;
    }
    return NO;
}
-(void)tf_code_pre(removeLineImageViewAll){
    NSArray *keys = tf_code_pre(creatLineImageViews).allKeys;
    for (NSString *key in keys) {
        UIView *view = [tf_code_pre(creatLineImageViews) objectForKey:key];
        [view removeFromSuperview];
    }
    [tf_code_pre(creatLineImageViews) removeAllObjects];
}
-(BOOL)tf_code_pre(removeLineImageView):(UIView *)view{
    NSArray *keys = tf_code_pre(creatLineImageViews).allKeys;
    for (NSString *key in keys) {
        UIView *tmpView = [tf_code_pre(creatLineImageViews) objectForKey:key];
        if (view == tmpView) {
            [view removeFromSuperview];
            [tf_code_pre(creatLineImageViews) removeObjectForKey:key];
            return YES;
        }
    }
    return NO;
}

-(void)tf_code_pre(creatLineImageView0):(BOOL)lineImageView0
                         LineImageView1:(BOOL)lineImageView1
                         LineImageView2:(BOOL)lineImageView2
                         LineImageView3:(BOOL)lineImageView3{
    
    [self tf_synthesizeAllCategoryPropertyForSelf];
    
    if (lineImageView0) {
        self.tf_code_pre(lineImageView0) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_code_pre(lineImageView0).backgroundColor = [UIColor lightGrayColor];
        [self addSubview:self.tf_code_pre(lineImageView0)];
    }else{
        [self.tf_code_pre(lineImageView0) removeFromSuperview];
        self.tf_code_pre(lineImageView0) = nil;
    }
    
    if (lineImageView1) {
        self.tf_code_pre(lineImageView1) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_code_pre(lineImageView1).backgroundColor = [UIColor lightGrayColor];
        [self addSubview:self.tf_code_pre(lineImageView1)];
    }else{
        [self.tf_code_pre(lineImageView1) removeFromSuperview];
        self.tf_code_pre(lineImageView1) = nil;
    }
    
    if (lineImageView2) {
        self.tf_code_pre(lineImageView2) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_code_pre(lineImageView2).backgroundColor = [UIColor lightGrayColor];
        [self addSubview:self.tf_code_pre(lineImageView2)];
    }else{
        [self.tf_code_pre(lineImageView2) removeFromSuperview];
        self.tf_code_pre(lineImageView2) = nil;
    }
    
    if (lineImageView3) {
        self.tf_code_pre(lineImageView3) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_code_pre(lineImageView3).backgroundColor = [UIColor lightGrayColor];
        [self addSubview:self.tf_code_pre(lineImageView3)];
    }else{
        [self.tf_code_pre(lineImageView3) removeFromSuperview];
        self.tf_code_pre(lineImageView3) = nil;
    }
}
tf_synthesize_category_property_retain(tf_code_pre(lineImageView0), set_lineImageView0);
tf_synthesize_category_property_retain(tf_code_pre(lineImageView1), set_lineImageView1);
tf_synthesize_category_property_retain(tf_code_pre(lineImageView2), set_lineImageView2);
tf_synthesize_category_property_retain(tf_code_pre(lineImageView3), set_lineImageView3);


tf_synthesize_category_property_retain(tf_code_pre(topLine), set_topLine);
tf_synthesize_category_property_retain(tf_code_pre(leftLine), set_leftLine);
tf_synthesize_category_property_retain(tf_code_pre(bottomLine), set_bottomLine);
tf_synthesize_category_property_retain(tf_code_pre(rightLine), set_rightLine);

-(UIImageView *)tf_code_pre(creatLine){
    UIImageView *ins = [[UIImageView alloc]initWithFrame:CGRectZero];
    ins.backgroundColor = [UIColor lightGrayColor];
    [self addSubview:ins];
    return ins;
}

-(UIImageView *)tf_code_pre(addLine):(LineDirection)direction{
    
    if(direction == LineDirectionTop){
        if(self.tf_code_pre(topLine) == nil){
            self.tf_code_pre(topLine) = [self tf_code_pre(creatLine)];
            return self.tf_code_pre(topLine);
        }
    }else if(direction == LineDirectionLeft){
        if(self.tf_code_pre(leftLine) == nil){
            self.tf_code_pre(leftLine) = [self tf_code_pre(creatLine)];
            return self.tf_code_pre(leftLine);
        }
    }else if(direction == LineDirectionBottom){
        if(self.tf_code_pre(bottomLine) == nil){
            self.tf_code_pre(bottomLine) = [self tf_code_pre(creatLine)];
            return self.tf_code_pre(bottomLine);
        }
    }else if(direction == LineDirectionRight){
        if(self.tf_code_pre(rightLine) == nil){
            self.tf_code_pre(rightLine) = [self tf_code_pre(creatLine)];
            return self.tf_code_pre(rightLine);
        }
    }
    return nil;
}

-(UIImageView *)tf_code_pre(creatBackgroundView){
    return [self tf_code_pre(creatLineImageViewForKey):nil];
}
static NSMutableDictionary *tf_code_pre(creatBackgroundViews);
-(UIImageView *)tf_code_pre(creatBackgroundViewForKey):(NSString *)key{
    if (!tf_code_pre(creatBackgroundViews)) tf_code_pre(creatBackgroundViews) = [[NSMutableDictionary alloc]init];
    UIImageView *backgroundView = [[UIImageView alloc]initWithFrame:CGRectZero];
    backgroundView.backgroundColor = [UIColor lightGrayColor];
    [self addSubview:backgroundView];
    [tf_code_pre(creatBackgroundViews) setObject:backgroundView forKey:key?key:[NSDate date].description];
    return backgroundView;
}
-(UIImageView *)tf_code_pre(getBackgroundViewForKey):(NSString *)key{
    return [tf_code_pre(creatBackgroundViews) objectForKey:key];
}
-(BOOL)tf_code_pre(removeBackgroundViewForKey):(NSString *)key{
    UIImageView *backgroundView = [tf_code_pre(creatBackgroundViews) objectForKey:key];
    if (backgroundView) {
        [backgroundView removeFromSuperview];
        [tf_code_pre(creatBackgroundViews) removeObjectForKey:key];
        return YES;
    }
    return NO;
}
-(void)tf_code_pre(removeBackgroundViewAll){
    NSArray *keys = tf_code_pre(creatBackgroundViews).allKeys;
    for (NSString *key in keys) {
        UIView *view = [tf_code_pre(creatBackgroundViews) objectForKey:key];
        [view removeFromSuperview];
    }
    [tf_code_pre(creatBackgroundViews) removeAllObjects];
}
-(BOOL)tf_code_pre(removeBackgroundView):(UIView *)view{
    NSArray *keys = tf_code_pre(creatBackgroundViews).allKeys;
    for (NSString *key in keys) {
        UIView *tmpView = [tf_code_pre(creatBackgroundViews) objectForKey:key];
        if (view == tmpView) {
            [view removeFromSuperview];
            [tf_code_pre(creatBackgroundViews) removeObjectForKey:key];
            return YES;
        }
    }
    return NO;
}
-(void)tf_code_pre(creatBackgroundView0):(BOOL)backgroundView0
                         BackgroundView1:(BOOL)backgroundView1
                         BackgroundView2:(BOOL)backgroundView2
                         BackgroundView3:(BOOL)backgroundView3{
    
    [self tf_synthesizeAllCategoryPropertyForSelf];

    if (backgroundView0) {
        self.tf_code_pre(backgroundView0) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_code_pre(backgroundView0).backgroundColor = [UIColor whiteColor];
        self.tf_code_pre(backgroundView0).userInteractionEnabled = YES;
        [self addSubview:self.tf_code_pre(backgroundView0)];
    }else{
        [self.tf_code_pre(backgroundView0) removeFromSuperview];
        self.tf_code_pre(backgroundView0) = nil;
    }
    
    if (backgroundView1) {
        self.tf_code_pre(backgroundView1) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_code_pre(backgroundView1).backgroundColor = [UIColor lightGrayColor];
        self.tf_code_pre(backgroundView1).userInteractionEnabled = YES;
        [self addSubview:self.tf_code_pre(backgroundView1)];
    }else{
        [self.tf_code_pre(backgroundView1) removeFromSuperview];
        self.tf_code_pre(backgroundView1) = nil;
    }
    
    if (backgroundView2) {
        self.tf_code_pre(backgroundView2) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_code_pre(backgroundView2).backgroundColor = [UIColor whiteColor];
        self.tf_code_pre(backgroundView2).userInteractionEnabled = YES;
        [self addSubview:self.tf_code_pre(backgroundView2)];
    }else{
        [self.tf_code_pre(backgroundView2) removeFromSuperview];
        self.tf_code_pre(backgroundView2) = nil;
    }
    
    
    if (backgroundView3) {
        self.tf_code_pre(backgroundView3) = [[UIImageView alloc]initWithFrame:CGRectZero];
        self.tf_code_pre(backgroundView3).backgroundColor = [UIColor whiteColor];
        self.tf_code_pre(backgroundView3).userInteractionEnabled = YES;
        [self addSubview:self.tf_code_pre(backgroundView3)];
    }else{
        [self.tf_code_pre(backgroundView3) removeFromSuperview];
        self.tf_code_pre(backgroundView3) = nil;
    }
}
tf_synthesize_category_property_retain(tf_code_pre(backgroundView0), set_backgroundView0);
tf_synthesize_category_property_retain(tf_code_pre(backgroundView1), set_backgroundView1);
tf_synthesize_category_property_retain(tf_code_pre(backgroundView2), set_backgroundView2);
tf_synthesize_category_property_retain(tf_code_pre(backgroundView3), set_backgroundView3);


#pragma mark view 手势 --

-(UITapGestureRecognizer *)e_tapGes{
    id value = objc_getAssociatedObject(self, @selector(e_tapGes));
    if (!value){
        UITapGestureRecognizer *tapGes = [[UITapGestureRecognizer alloc]init];
        [self addGestureRecognizer:tapGes];
        self.e_tapGes = tapGes;
        value = tapGes;
        self.userInteractionEnabled = YES;
        return value;
    }
    return value;
}

-(void)setE_tapGes:(UITapGestureRecognizer *)e_tapGes{
     objc_setAssociatedObject(self, @selector(e_tapGes), e_tapGes, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}



-(UILongPressGestureRecognizer *)e_longPressGes{
    id value = objc_getAssociatedObject(self, @selector(e_longPressGes));
    if (!value){
        UILongPressGestureRecognizer *longPressGes = [[UILongPressGestureRecognizer alloc]init];
        longPressGes.minimumPressDuration = 1;
        [self addGestureRecognizer:longPressGes];
        self.e_longPressGes = longPressGes;
        value = longPressGes;
        self.userInteractionEnabled = YES;
        return value;
    }
    return value;
}

-(void)setE_longPressGes:(UILongPressGestureRecognizer *)e_longPressGes{
     objc_setAssociatedObject(self, @selector(e_longPressGes), e_longPressGes, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

@end
