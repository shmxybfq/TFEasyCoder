//
//  UITableViewRowAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITableViewRowAction (TFEasyCoder)





-(UITableViewRowAction  *(^)(NSString *  title))set_title;
-(UITableViewRowAction  *(^)(UIColor *  backgroundColor))set_backgroundColor;
-(UITableViewRowAction  *(^)(UIVisualEffect *  backgroundEffect))set_backgroundEffect;




//superclass pros NSObject
-(UITableViewRowAction  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITableViewRowAction  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITableViewRowAction  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITableViewRowAction  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITableViewRowAction  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITableViewRowAction  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITableViewRowAction  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITableViewRowAction  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITableViewRowAction  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITableViewRowAction  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITableViewRowAction  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITableViewRowAction  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITableViewRowAction  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITableViewRowAction  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end