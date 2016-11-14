//
//  UIDynamicItemGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UIDynamicItemGroupEasyCoderBlock) (UIDynamicItemGroup * ins);

@interface UIDynamicItemGroup (TFEasyCoder)

+( UIDynamicItemGroup *)easyCoder:(UIDynamicItemGroupEasyCoderBlock)block;
-(UIDynamicItemGroup *)easyCoder:(UIDynamicItemGroupEasyCoderBlock)block;


-(UIDynamicItemGroup  *(^)(CGPoint  center))set_center;
-(UIDynamicItemGroup  *(^)(CGAffineTransform  transform))set_transform;




//superclass pros NSObject
-(UIDynamicItemGroup  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIDynamicItemGroup  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIDynamicItemGroup  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIDynamicItemGroup  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIDynamicItemGroup  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIDynamicItemGroup  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIDynamicItemGroup  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIDynamicItemGroup  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIDynamicItemGroup  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIDynamicItemGroup  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIDynamicItemGroup  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIDynamicItemGroup  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIDynamicItemGroup  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIDynamicItemGroup  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIDynamicItemGroup *(^)(id value,NSString *key))set_ValueKey;


@end