//
//  UIView+TFUIDevKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <objc/runtime.h>
#import "UIView+TFUIDevKit.h"


#define TF_ASSOCIATED_KYE(__CLASS, __PROPERTY) static char Lazy_Associated_Key_##__CLASS##_##__PROPERTY

#define TF_ASSOCIATED_OBJC_GET(__CLASS, __PROPERTY)\
TF_ASSOCIATED_KYE(__CLASS, __PROPERTY);\
-(__CLASS *)__PROPERTY{return objc_getAssociatedObject(self, &Lazy_Associated_Key_##__CLASS##_##__PROPERTY);}

#define TF_ASSOCIATED_OBJC_SET(__CLASS, __PROPERTY)\
objc_setAssociatedObject(self,&Lazy_Associated_Key_##__CLASS##_##__PROPERTY,__PROPERTY,OBJC_ASSOCIATION_RETAIN);



@implementation UIView (TFUIDevKit)


#pragma mark 调试工具 begin --

TF_ASSOCIATED_OBJC_GET(UIView,                      lgview)
TF_ASSOCIATED_OBJC_GET(NSMutableDictionary,   lgproperties)
TF_ASSOCIATED_OBJC_GET(NSMutableArray,          lgsubviews)
TF_ASSOCIATED_OBJC_GET(NSMutableDictionary,     lgdesCache)
-(void)setLgview:(UIView *)lgview{TF_ASSOCIATED_OBJC_SET(UIView,lgview);}
-(void)setLgproperties:(NSMutableDictionary *)lgproperties{TF_ASSOCIATED_OBJC_SET(NSMutableDictionary,lgproperties);}
-(void)setLgsubviews:(NSMutableArray *)lgsubviews{TF_ASSOCIATED_OBJC_SET(NSMutableArray,lgsubviews);}
-(void)setLgdesCache:(NSMutableDictionary *)lgdesCache{TF_ASSOCIATED_OBJC_SET(NSMutableDictionary,lgdesCache);}


/**
 *  打印所有子视图
 *
 *  @param block 回传需要打印的view的属性名列表
 *
 *  @return 打印信息字典
 */
-(NSDictionary *)tf_code_pre(logSubviews):(TFLogTreeBackBlock)block
{
    NSArray *ps = block();
    if (ps == nil || ps.count == 0) {
        ps = @[@"frame",@"hidden",@"backgroundColor",@"userInteractionEnabled"];
    }
    TFLogTreeContainer *container = [TFLogTreeContainer initWithView:self];
    NSDictionary *log = [container descriptionContainer:ps];TFLog(@"\n\n\n\n\n%@\n\n\n\n\n",log);
    return log;
}

/**
 *  获取所有子视图
 *
 *  @return 所有子视图数组
 */
-(NSMutableArray *)tf_code_pre(getAllSubviews)
{
    NSMutableArray *allSubviews = [NSMutableArray array];
    NSMutableArray *curSubviews = [NSMutableArray arrayWithArray:self.subviews];
    while (curSubviews.count!=0) {
        NSMutableArray *temSubviews = [NSMutableArray array];
        for (UIView *view in curSubviews) {
            [allSubviews addObject:view];
            if (view.subviews.count !=0) {
                [temSubviews addObjectsFromArray:view.subviews];
            }
        }
        [curSubviews removeAllObjects];
        [curSubviews addObjectsFromArray:temSubviews];
    }
    [allSubviews addObject:self];
    return allSubviews;
}

/**
 *  设置所有子视图为随机色
 *
 *  @param alpha 随机色透明度
 *
 *  @return 所有的子视图
 */
-(NSMutableArray *)tf_code_pre(setAllSubviewsBackgroundColorRandom):(CGFloat)alpha
{
    NSMutableArray *allSubviews = [self tf_code_pre(getAllSubviews)];
    for (UIView *view in allSubviews) {
        if ([view respondsToSelector:@selector(setBackgroundColor:)]) {
            view.backgroundColor = [UIColor colorWithRed:arc4random()%255/255.0
                                                   green:arc4random()%255/255.0
                                                    blue:arc4random()%255/255.0
                                                   alpha:alpha];
        }
        
    }
    return allSubviews;
}

/**
 *  为所有子视图加上border red
 *
 *  @param alpha 随机色透明度
 *
 *  @return 所有的子视图
 */
-(NSMutableArray *)tf_code_pre(setAllSubviewsBorderRed)
{
    NSMutableArray *allSubviews = [self tf_code_pre(getAllSubviews)];
    for (UIView *view in allSubviews) {
        if ([view isKindOfClass:[UIView class]]) {
            view.layer.borderColor = [UIColor redColor].CGColor;
            view.layer.borderWidth = 1.0;
        }
    }
    return allSubviews;
}
/**
 *  为所有子视图加上border 随机色
 *
 *  @param alpha 随机色透明度
 *
 *  @return 所有的子视图
 */
-(NSMutableArray *)tf_code_pre(setAllSubviewsBorderColorRandom)
{
    NSMutableArray *allSubviews = [self tf_code_pre(getAllSubviews)];
    for (UIView *view in allSubviews) {
        if ([view isKindOfClass:[UIView class]]) {
            view.layer.borderColor = [UIColor colorWithRed:arc4random()%255/255.0
                                                     green:arc4random()%255/255.0
                                                      blue:arc4random()%255/255.0
                                                     alpha:1].CGColor;
            view.layer.borderWidth = 1.0;
        }
    }
    return allSubviews;
}
/**
 *  获取所有父视图(!注意不是子视图)
 *
 *  @return 所有父视图数组
 */
-(NSMutableArray *)tf_code_pre(getAllSuperviews){
    NSMutableArray *allSuperviews = [NSMutableArray array];
    UIView *tmpView = self;
    while (tmpView.superview) {
        [allSuperviews addObject:tmpView.superview];
        tmpView = tmpView.superview;
    }
    return allSuperviews;
}

/**
 *  设置所有父视图为随机色(!注意不是子视图)
 *
 *  @param alpha 随机色透明度
 *
 *  @return 所有的父视图
 */
-(NSMutableArray *)tf_code_pre(setAllSupviewsBackgroundColorRandom):(CGFloat)alpha
{
    NSMutableArray *allSuperviews = [self tf_code_pre(getAllSuperviews)];
    for (UIView *view in allSuperviews) {
        if ([view respondsToSelector:@selector(setBackgroundColor:)]) {
            view.backgroundColor = [UIColor colorWithRed:arc4random()%255/255.0
                                                   green:arc4random()%255/255.0
                                                    blue:arc4random()%255/255.0
                                                   alpha:alpha];
            view.layer.borderColor = [UIColor redColor].CGColor;
            view.layer.borderWidth = 1.0;
        }
    }
    return allSuperviews;
}


/**
 *  在所有子视图中获取视图树种最上层的一个类型的view
 *
 *  @param cls view类型
 *
 *  @return 获取到的view
 */
-(UIView *)tf_code_pre(getSubviewOfClass):(Class)cls{
    NSMutableArray *subs = [NSMutableArray arrayWithArray:self.subviews];
    while (subs.count) {
        NSArray *subsTmp = [NSArray arrayWithArray:subs];[subs removeAllObjects];
        for (UIView *subview in subsTmp) {
            if ([subview isKindOfClass:cls]) {
                return subview;
            }
            [subs addObjectsFromArray:subview.subviews];
        }
    }
    return nil;
}

/**
 *  获取上层的控制器
 *
 *  @param cls view类型
 *
 *  @return 获取到的view
 */
- (UIViewController *)tf_code_pre(getSuperController){
    for (UIView* next = [self superview]; next; next = next.superview) {
        UIResponder *nextResponder = [next nextResponder];
        if ([nextResponder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)nextResponder;
        }
    }
    return nil;
}

@end



@implementation TFLogTreeContainer



+(instancetype)initWithView:(UIView *)view
{
    TFLogTreeContainer *ins = [[TFLogTreeContainer alloc]init];
    ins.view = view;
    [ins doWithSubViews];
    return ins;
}

-(void)doWithSubViews
{
    [self.subviews removeAllObjects];
    NSArray *subviews = self.view.subviews;
    for (UIView *subview in subviews) {
        TFLogTreeContainer *container = [TFLogTreeContainer initWithView:subview];
        [self.subviews addObject:container];
    }
}

-(NSMutableDictionary *)descriptionContainer:(NSArray *)propertyKeys
{
    [self.desCache removeAllObjects];
    NSMutableDictionary *properties = [NSMutableDictionary dictionaryWithCapacity:propertyKeys.count];
    
    for (NSString *pkey in propertyKeys) {
        id pvalue = @"";
        @try {
            pvalue = [self.view valueForKey:pkey];
        } @catch (NSException *exception) {
            pvalue = [NSString stringWithFormat:@"unknow key(%@) for class(%@)",pkey,self.view];
        } @finally {
            if (pvalue == nil)pvalue = @"null";
        }
        //NSLog(@">>>>>0000000000000000:%@:%@:%@",pkey,pvalue,self.view.backgroundColor);
        [properties setObject:pvalue forKey:pkey];
    }
    
    NSMutableArray *subviews = [NSMutableArray arrayWithCapacity:self.subviews.count];
    for (TFLogTreeContainer *subview in self.subviews) {
        NSMutableDictionary *dic = [subview descriptionContainer:propertyKeys];
        [subviews addObject:dic];
    }
    
    [self.desCache setObject:properties forKey:@"properties"];
    [self.desCache setObject:subviews forKey:@"subviews"];
    
    NSMutableDictionary *front = [NSMutableDictionary dictionary];
    [front setObject:self.desCache forKey:NSStringFromClass([self.view class])];
    return front;
}


-(NSMutableDictionary *)desCache
{
    if (_desCache == nil) {
        _desCache = [NSMutableDictionary dictionary];
    }
    return _desCache;
}
-(NSMutableArray *)subviews
{
    if (_subviews == nil) {
        _subviews = [NSMutableArray arrayWithCapacity:5];
    }
    return _subviews;
}

#pragma mark 调试工具 end --




@end

