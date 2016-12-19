//
//  NSMapTable+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMapTable (TFEasyCoder)









//superclass pros NSObject
-(NSMapTable  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMapTable  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMapTable  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMapTable  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMapTable  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMapTable  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMapTable  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMapTable  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMapTable  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMapTable  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMapTable  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMapTable  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMapTable  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMapTable  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end