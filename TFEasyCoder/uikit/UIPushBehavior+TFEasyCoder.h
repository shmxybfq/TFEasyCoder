//
//  UIPushBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPushBehavior (TFEasyCoder)





-(UIPushBehavior  *(^)(BOOL  active))set_active;
-(UIPushBehavior  *(^)(double  angle))set_angle;
-(UIPushBehavior  *(^)(double  magnitude))set_magnitude;
-(UIPushBehavior  *(^)(CGVector  pushDirection))set_pushDirection;




//superclass pros UIDynamicBehavior
//superclass pros NSObject
-(UIPushBehavior  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPushBehavior  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPushBehavior  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPushBehavior  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPushBehavior  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPushBehavior  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPushBehavior  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPushBehavior  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPushBehavior  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPushBehavior  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPushBehavior  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPushBehavior  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPushBehavior  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPushBehavior  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end