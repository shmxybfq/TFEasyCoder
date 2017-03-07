//
//  UINavigationBar+TFKit.m
//  GreatVillage
//
//  Created by 融数 on 17/2/28.
//  Copyright © 2017年 大城乡. All rights reserved.
//

#import "UINavigationBar+TFKit.h"

@implementation UINavigationBar (TFKit)

-(void)TF_CODE_PRE(setBackgroundColor):(UIColor *)color bottomLineColor:(UIColor*)lineColor{
    
    [self setBackgroundImage:[self imageWithColor:color]
              forBarPosition:UIBarPositionAny
                  barMetrics:UIBarMetricsDefault];
    [self setShadowImage:[self imageWithColor:lineColor]];
    
}


- (UIImage *)imageWithColor:(UIColor *) color
{
    CGRect rect = CGRectMake(0.0f, 0.0f, 1.0f, 1.0f);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, [color CGColor]);
    CGContextFillRect(context, rect);
    
    UIImage *theImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return theImage;
}

-(NSMutableArray *)getAllSubviews
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

@end
