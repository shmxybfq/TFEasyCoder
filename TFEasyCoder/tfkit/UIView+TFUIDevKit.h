//
//  UIView+TFUIDevKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NSArray *(^LGTreeBlock) ();


@interface UIView (TFUIDevKit)

#pragma mark 打印视图树 --
/**
 *  打印所有子视图
 *
 *  @param block 回传需要打印的view的属性名列表
 *
 *  @return 打印信息字典
 */
-(NSDictionary *)logSubviews:(LGTreeBlock)block;

#pragma mark 视图操作 --
/**
 *  获取所有子视图
 *
 *  @return 所有子视图数组
 */
-(NSMutableArray *)allSubviews;
/**
 *  设置所有子视图为随机色
 *
 *  @param alpha 随机色透明度
 *
 *  @return 所有的子视图
 */
-(NSMutableArray *)allSubviewsBackgroundColorRandom:(CGFloat)alpha;

/**
 *  获取所有父视图(!注意不是子视图)
 *
 *  @return 所有父视图数组
 */
-(NSMutableArray *)allSuperviews;
/**
 *  设置所有父视图为随机色(!注意不是子视图)
 *
 *  @param alpha 随机色透明度
 *
 *  @return 所有的父视图
 */
-(NSMutableArray *)allSupviewsBackgroundColorRandom:(CGFloat)alpha;

@end





@interface TFLogTreeContainer : NSObject

@property (nonatomic,strong)UIView *view;
@property (nonatomic,strong)NSMutableDictionary *properties;
@property (nonatomic,strong)NSMutableArray      *subviews;
@property (nonatomic,strong)NSMutableDictionary *desCache;

+(instancetype)initWithView:(UIView *)view;

-(NSMutableDictionary *)descriptionContainer:(NSArray *)propertyKeys;

@end
