//
//  NSObject+TestCategory.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/18.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "NSObject+TestCategory.h"

typedef void(^EasyCoderBlock) (void);

@interface NSObject ()

@property (nonatomic,  copy)NSString *string;
@property (nonatomic,  copy)EasyCoderBlock block;
@property (nonatomic,assign)id<UITableViewDelegate> delegate;
@property (nonatomic,strong)NSMutableArray *dataSource;
@property (nonatomic,assign)CGRect frame;
@property (nonatomic,strong)NSNumber *isSelected;

@end

@implementation NSObject (TestCategory)


tf_synthesize_category_property_copy(string, setString);//为copy类型属性添加实现
tf_synthesize_category_property_block(block, setBlock, EasyCoderBlock);//为block类型属性添加实现
tf_synthesize_category_property_assign(delegate, setDelegate);//为assign类型属性添加实现
tf_synthesize_category_property_retain(dataSource, setDataSource);//为strong类型属性添加实现
tf_synthesize_category_property_ctype(frame, setFrame, typeof(CGRect));//为特殊类型属性添加实现(比如stuct)
tf_synthesize_category_property(isSelected, setIsSelected, OBJC_ASSOCIATION_RETAIN_NONATOMIC, NSNumber*);//为自定义类型属性添加实现

@end





