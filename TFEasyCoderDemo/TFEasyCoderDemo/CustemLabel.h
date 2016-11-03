//
//  CustemLabel.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/11/3.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustemLabel : UILabel

@property (nonatomic,strong)NSString *cusProperty1;
@property (nonatomic,strong)NSString *cusProperty2;
@property (nonatomic,strong)NSString *cusProperty3;
@property (nonatomic,strong)NSString *cusProperty4;
@property (nonatomic,strong)NSString *cusProperty5;


-(instancetype)initWithParam1:(id)param1
                       Param2:(NSString *)param2
                       Param3:(UIView *)param3
                       Param4:(char)param4
                       Param5:(BOOL)param5
                       Param6:(NSInteger)param6
                       Param7:(CGPoint)param7
                       Param8:(NSTextAlignment)param8;

@end
