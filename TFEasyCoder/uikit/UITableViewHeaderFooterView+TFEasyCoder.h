//
//  UITableViewHeaderFooterView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITableViewHeaderFooterView (TFEasyCoder)





-(UITableViewHeaderFooterView  *(^)(UIColor *  tintColor))set_tintColor;
-(UITableViewHeaderFooterView  *(^)(UIView *  backgroundView))set_backgroundView;




//superclass pros UIView
-(UITableViewHeaderFooterView  *(^)(UIView *  maskView))set_maskView;
-(UITableViewHeaderFooterView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UITableViewHeaderFooterView  *(^)(long long  tag))set_tag;
-(UITableViewHeaderFooterView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UITableViewHeaderFooterView  *(^)(CGPoint  center))set_center;
-(UITableViewHeaderFooterView  *(^)(CGRect  frame))set_frame;
-(UITableViewHeaderFooterView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UITableViewHeaderFooterView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UITableViewHeaderFooterView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITableViewHeaderFooterView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITableViewHeaderFooterView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITableViewHeaderFooterView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITableViewHeaderFooterView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITableViewHeaderFooterView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITableViewHeaderFooterView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITableViewHeaderFooterView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITableViewHeaderFooterView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITableViewHeaderFooterView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITableViewHeaderFooterView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITableViewHeaderFooterView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITableViewHeaderFooterView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITableViewHeaderFooterView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
