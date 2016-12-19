//
//  NSCache+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSCache (TFEasyCoder)





-(NSCache  *(^)(NSString *  name))set_name;
-(NSCache  *(^)(id<NSCacheDelegate>   delegate))set_delegate;
-(NSCache  *(^)(unsigned long long  totalCostLimit))set_totalCostLimit;
-(NSCache  *(^)(unsigned long long  countLimit))set_countLimit;
-(NSCache  *(^)(BOOL  evictsObjectsWithDiscardedContent))set_evictsObjectsWithDiscardedContent;




//superclass pros NSObject
-(NSCache  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSCache  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSCache  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSCache  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSCache  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSCache  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSCache  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSCache  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSCache  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSCache  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSCache  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSCache  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSCache  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSCache  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end