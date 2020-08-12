//
//  UIView+TFUIDevKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFEasyCoderConst.h"
#pragma clang diagnostic ignored "-Wdocumentation"

typedef NSArray *(^TFLogTreeBackBlock) (void);


@interface UIView (TFUIDevKit)

#pragma mark 打印视图树 --
/**
 *  打印所有子视图
 *
 *  @param block 回传需要打印的view的属性名列表
 *
 *  @return 打印信息字典
 */
-(NSDictionary *)tf_code_pre(logSubviews):(TFLogTreeBackBlock)block;

#pragma mark 视图操作 --
/**
 *  获取所有子视图
 *
 *  @return 所有子视图数组
 */
-(NSMutableArray *)tf_code_pre(getAllSubviews);
/**
 *  设置所有子视图为随机色
 *
 *  @param alpha 随机色透明度
 *
 *  @return 所有的子视图
 */
-(NSMutableArray *)tf_code_pre(setAllSubviewsBackgroundColorRandom):(CGFloat)alpha;
/**
 *  为所有子视图加上border red
 *
 *  @param alpha 随机色透明度
 *
 *  @return 所有的子视图
 */
-(NSMutableArray *)tf_code_pre(setAllSubviewsBorderRed);
/**
 *  为所有子视图加上border 随机色
 *
 *  @param alpha 随机色透明度
 *
 *  @return 所有的子视图
 */
-(NSMutableArray *)tf_code_pre(setAllSubviewsBorderColorRandom);
/**
 *  获取所有父视图(!注意不是子视图)
 *
 *  @return 所有父视图数组
 */
-(NSMutableArray *)tf_code_pre(getAllSuperviews);
/**
 *  设置所有父视图为随机色(!注意不是子视图)
 *
 *  @param alpha 随机色透明度
 *
 *  @return 所有的父视图
 */
-(NSMutableArray *)tf_code_pre(setAllSupviewsBackgroundColorRandom):(CGFloat)alpha;

/**
 *  在所有子视图中获取视图树种最上层的一个类型的view
 *
 *  @param cls view类型
 *
 *  @return 获取到的view
 */
-(UIView *)tf_code_pre(getSubviewOfClass):(Class)cls;
/**
 *  获取上层的控制器
 *
 *  @param cls view类型
 *
 *  @return 获取到的view
 */
- (UIViewController *)tf_code_pre(getSuperController);
@end





@interface TFLogTreeContainer : NSObject

@property (nonatomic,strong)UIView *view;
@property (nonatomic,strong)NSMutableDictionary *properties;
@property (nonatomic,strong)NSMutableArray      *subviews;
@property (nonatomic,strong)NSMutableDictionary *desCache;

+(instancetype)initWithView:(UIView *)view;

-(NSMutableDictionary *)descriptionContainer:(NSArray *)propertyKeys;

@end
