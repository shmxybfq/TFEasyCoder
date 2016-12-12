//
//  UIBarItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIBarItem (TFEasyCoder)





-(UIBarItem  *(^)(BOOL  enabled))set_enabled;
-(UIBarItem  *(^)(NSString *  title))set_title;
-(UIBarItem  *(^)(UIImage *  image))set_image;
-(UIBarItem  *(^)(UIImage *  landscapeImagePhone))set_landscapeImagePhone;
-(UIBarItem  *(^)(UIEdgeInsets  imageInsets))set_imageInsets;
-(UIBarItem  *(^)(UIEdgeInsets  landscapeImagePhoneInsets))set_landscapeImagePhoneInsets;
-(UIBarItem  *(^)(long long  tag))set_tag;




//superclass pros NSObject
-(UIBarItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIBarItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIBarItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIBarItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIBarItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIBarItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIBarItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIBarItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIBarItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIBarItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIBarItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIBarItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIBarItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIBarItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end