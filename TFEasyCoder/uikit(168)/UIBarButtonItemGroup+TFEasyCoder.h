//
//  UIBarButtonItemGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIBarButtonItemGroup (TFEasyCoder)





-(UIBarButtonItemGroup  *(^)(NSArray *  barButtonItems))set_barButtonItems;
-(UIBarButtonItemGroup  *(^)(UIBarButtonItem *  representativeItem))set_representativeItem;





//superclass pros NSObject
-(UIBarButtonItemGroup  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIBarButtonItemGroup  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIBarButtonItemGroup  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIBarButtonItemGroup  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIBarButtonItemGroup  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIBarButtonItemGroup  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIBarButtonItemGroup  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIBarButtonItemGroup  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIBarButtonItemGroup  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIBarButtonItemGroup  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIBarButtonItemGroup  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIBarButtonItemGroup  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIBarButtonItemGroup  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIBarButtonItemGroup  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end