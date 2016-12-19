//
//  UIBarButtonItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIBarButtonItem (TFEasyCoder)





-(UIBarButtonItem  *(^)(BOOL  enabled))set_enabled;
-(UIBarButtonItem  *(^)(UIEdgeInsets  imageInsets))set_imageInsets;
-(UIBarButtonItem  *(^)(long long  style))set_style;
-(UIBarButtonItem  *(^)(double  width))set_width;
-(UIBarButtonItem  *(^)(NSSet *  possibleTitles))set_possibleTitles;
-(UIBarButtonItem  *(^)(UIView *  customView))set_customView;
-(UIBarButtonItem  *(^)(SEL  action))set_action;
-(UIBarButtonItem  *(^)(UIColor *  tintColor))set_tintColor;





//superclass pros UIBarItem
//TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,BOOL,enabled);
-(UIBarButtonItem  *(^)(NSString *  title))set_title;
-(UIBarButtonItem  *(^)(UIImage *  image))set_image;
-(UIBarButtonItem  *(^)(UIImage *  landscapeImagePhone))set_landscapeImagePhone;
//TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,UIEdgeInsets,imageInsets);
-(UIBarButtonItem  *(^)(UIEdgeInsets  landscapeImagePhoneInsets))set_landscapeImagePhoneInsets;
-(UIBarButtonItem  *(^)(long long  tag))set_tag;
//superclass pros NSObject
-(UIBarButtonItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIBarButtonItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIBarButtonItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIBarButtonItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIBarButtonItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIBarButtonItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIBarButtonItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIBarButtonItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIBarButtonItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIBarButtonItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIBarButtonItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIBarButtonItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIBarButtonItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIBarButtonItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
