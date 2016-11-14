//
//  UIDynamicAnimator+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UIDynamicAnimatorEasyCoderBlock) (UIDynamicAnimator * ins);

@interface UIDynamicAnimator (TFEasyCoder)

+( UIDynamicAnimator *)easyCoder:(UIDynamicAnimatorEasyCoderBlock)block;
-(UIDynamicAnimator *)easyCoder:(UIDynamicAnimatorEasyCoderBlock)block;


-(UIDynamicAnimator  *(^)(id<UIDynamicAnimatorDelegate>   delegate))set_delegate;





//superclass pros NSObject
-(UIDynamicAnimator  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIDynamicAnimator  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIDynamicAnimator  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIDynamicAnimator  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIDynamicAnimator  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIDynamicAnimator  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIDynamicAnimator  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIDynamicAnimator  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIDynamicAnimator  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIDynamicAnimator  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIDynamicAnimator  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIDynamicAnimator  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIDynamicAnimator  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIDynamicAnimator  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIDynamicAnimator *(^)(id value,NSString *key))set_ValueKey;


@end