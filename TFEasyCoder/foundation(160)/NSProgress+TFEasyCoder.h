//
//  NSProgress+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSProgress (TFEasyCoder)






-(NSProgress  *(^)(long long  totalUnitCount))set_totalUnitCount;
-(NSProgress  *(^)(long long  completedUnitCount))set_completedUnitCount;
-(NSProgress  *(^)(NSString *  localizedDescription))set_localizedDescription;
-(NSProgress  *(^)(NSString *  localizedAdditionalDescription))set_localizedAdditionalDescription;
-(NSProgress  *(^)(BOOL  cancellable))set_cancellable;
-(NSProgress  *(^)(BOOL  pausable))set_pausable;
-(NSProgress  *(^)(NSString *  kind))set_kind;




//superclass pros NSObject
-(NSProgress  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSProgress  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSProgress  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSProgress  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSProgress  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSProgress  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSProgress  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSProgress  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSProgress  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSProgress  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSProgress  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSProgress  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSProgress  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSProgress  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end