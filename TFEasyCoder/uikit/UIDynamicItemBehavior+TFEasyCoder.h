//
//  UIDynamicItemBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIDynamicItemBehavior (TFEasyCoder)





-(UIDynamicItemBehavior  *(^)(double  elasticity))set_elasticity;
-(UIDynamicItemBehavior  *(^)(double  friction))set_friction;
-(UIDynamicItemBehavior  *(^)(double  density))set_density;
-(UIDynamicItemBehavior  *(^)(double  resistance))set_resistance;
-(UIDynamicItemBehavior  *(^)(double  charge))set_charge;
-(UIDynamicItemBehavior  *(^)(BOOL  anchored))set_anchored;




//superclass pros UIDynamicBehavior
//superclass pros NSObject
-(UIDynamicItemBehavior  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIDynamicItemBehavior  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIDynamicItemBehavior  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIDynamicItemBehavior  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIDynamicItemBehavior  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIDynamicItemBehavior  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIDynamicItemBehavior  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIDynamicItemBehavior  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIDynamicItemBehavior  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIDynamicItemBehavior  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIDynamicItemBehavior  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIDynamicItemBehavior  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIDynamicItemBehavior  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIDynamicItemBehavior  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end