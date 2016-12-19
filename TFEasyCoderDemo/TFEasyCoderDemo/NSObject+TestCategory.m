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

TF_SYNTHESIZE_CATEGORY_PROPERTY_COPY(string, setString);//为copy类型属性添加实现
TF_SYNTHESIZE_CATEGORY_PROPERTY_BLOCK(block, setBlock, EasyCoderBlock);//为block类型属性添加实现
TF_SYNTHESIZE_CATEGORY_PROPERTY_ASSIGN(delegate, setDelegate);//为assign类型属性添加实现
TF_SYNTHESIZE_CATEGORY_PROPERTY_RETAIN(dataSource, setDataSource);//为strong类型属性添加实现
TF_SYNTHESIZE_CATEGORY_PROPERTY_CTYPE(frame, setFrame, typeof(CGRect));//为特殊类型属性添加实现(比如stuct)
TF_SYNTHESIZE_CATEGORY_PROPERTY(isSelected, setIsSelected, OBJC_ASSOCIATION_RETAIN_NONATOMIC, NSNumber*);//为自定义类型属性添加实现

@end





