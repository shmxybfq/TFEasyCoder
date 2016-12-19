//
//  NSDataAsset+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSDataAsset (TFEasyCoder)









//superclass pros NSObject
-(NSDataAsset  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSDataAsset  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSDataAsset  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSDataAsset  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSDataAsset  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSDataAsset  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSDataAsset  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSDataAsset  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSDataAsset  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSDataAsset  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSDataAsset  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSDataAsset  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSDataAsset  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSDataAsset  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end