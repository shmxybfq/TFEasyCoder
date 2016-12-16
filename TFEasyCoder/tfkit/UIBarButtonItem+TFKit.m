//
//  UIBarButtonItem+TFKit.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/15.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "UIBarButtonItem+TFKit.h"

@implementation UIBarButtonItem (TFKit)


+ (UIBarButtonItem *)itemWithImage:(NSString *)normalImage
                   higlightedImage:(NSString *)higlightedImage
                            target:(id)target
                            action:(SEL)action{
    
    
    UIImage *normal = [UIImage imageNamed:normalImage];
    UIImage *higlighted = [UIImage imageNamed:higlightedImage];
    
    UIButton *ins = [UIButton buttonWithType:UIButtonTypeCustom];
    
    [ins setImage:normal forState:UIControlStateNormal];
    [ins setImage:higlighted forState:UIControlStateHighlighted];
    
    ins.bounds = CGRectMake(0, 0, normal.size.width * 2.2, normal.size.height * 2.2);
    [ins addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    
    UIBarButtonItem *barbutton = [[UIBarButtonItem alloc]init];
    [barbutton setCustomView:ins];
    return barbutton;
}

+ (UIBarButtonItem *)barButtonItemTitle:(NSString *)title
                         withTitleColor:(UIColor *)titleColor
                               withFont:(int)fontSize
                             withTarget:(id)target
                           withSelector:(SEL)selector
                          withAlignMent:(NSTextAlignment)alignment
{
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.bounds = CGRectMake(0, 0, 100, 44);
    
    UILabel *label = [[UILabel alloc]initWithFrame:button.bounds];
    label.text = title;
    label.backgroundColor = [UIColor clearColor];
    label.textColor = titleColor;
    label.font = [UIFont systemFontOfSize:fontSize];
    label.textAlignment = alignment;
    
    [button addSubview:label];
    [button addTarget:target
            action:selector
  forControlEvents:UIControlEventTouchUpInside];
    return [[UIBarButtonItem alloc] initWithCustomView:button];
}

@end
