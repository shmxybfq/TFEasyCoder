//
//  UIImageAsset+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIImageAsset (TFEasyCoder)









//superclass pros NSObject
-(UIImageAsset  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIImageAsset  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIImageAsset  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIImageAsset  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIImageAsset  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIImageAsset  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIImageAsset  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIImageAsset  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIImageAsset  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIImageAsset  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIImageAsset  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIImageAsset  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIImageAsset  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIImageAsset  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end