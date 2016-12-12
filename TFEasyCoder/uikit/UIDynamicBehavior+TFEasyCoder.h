//
//  UIDynamicBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIDynamicBehavior (TFEasyCoder)









//superclass pros NSObject
-(UIDynamicBehavior  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIDynamicBehavior  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIDynamicBehavior  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIDynamicBehavior  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIDynamicBehavior  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIDynamicBehavior  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIDynamicBehavior  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIDynamicBehavior  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIDynamicBehavior  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIDynamicBehavior  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIDynamicBehavior  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIDynamicBehavior  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIDynamicBehavior  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIDynamicBehavior  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end