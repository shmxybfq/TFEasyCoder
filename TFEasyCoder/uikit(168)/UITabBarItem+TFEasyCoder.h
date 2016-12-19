//
//  UITabBarItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITabBarItem (TFEasyCoder)






-(UITabBarItem  *(^)(UIImage *  selectedImage))set_selectedImage;
-(UITabBarItem  *(^)(NSString *  badgeValue))set_badgeValue;
-(UITabBarItem  *(^)(UIOffset  titlePositionAdjustment))set_titlePositionAdjustment;




//superclass pros UIBarItem
-(UITabBarItem  *(^)(BOOL  enabled))set_enabled;
-(UITabBarItem  *(^)(NSString *  title))set_title;
-(UITabBarItem  *(^)(UIImage *  image))set_image;
-(UITabBarItem  *(^)(UIImage *  landscapeImagePhone))set_landscapeImagePhone;
-(UITabBarItem  *(^)(UIEdgeInsets  imageInsets))set_imageInsets;
-(UITabBarItem  *(^)(UIEdgeInsets  landscapeImagePhoneInsets))set_landscapeImagePhoneInsets;
-(UITabBarItem  *(^)(long long  tag))set_tag;
//superclass pros NSObject
-(UITabBarItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITabBarItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITabBarItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITabBarItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITabBarItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITabBarItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITabBarItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITabBarItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITabBarItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITabBarItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITabBarItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITabBarItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITabBarItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITabBarItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end