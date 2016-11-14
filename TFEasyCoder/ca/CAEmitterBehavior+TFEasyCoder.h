//
//  CAEmitterBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^CAEmitterBehaviorEasyCoderBlock) (CAEmitterBehavior * ins);

@interface CAEmitterBehavior (TFEasyCoder)

+( CAEmitterBehavior *)easyCoder:(CAEmitterBehaviorEasyCoderBlock)block;
-(CAEmitterBehavior *)easyCoder:(CAEmitterBehaviorEasyCoderBlock)block;


-(CAEmitterBehavior  *(^)(NSString *  name))set_name;
-(CAEmitterBehavior  *(^)(BOOL  enabled))set_enabled;




//superclass pros NSObject
-(CAEmitterBehavior  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAEmitterBehavior  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAEmitterBehavior  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAEmitterBehavior  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAEmitterBehavior  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAEmitterBehavior  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAEmitterBehavior  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAEmitterBehavior  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAEmitterBehavior  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAEmitterBehavior  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAEmitterBehavior  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAEmitterBehavior  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAEmitterBehavior  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAEmitterBehavior  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(CAEmitterBehavior *(^)(id value,NSString *key))set_ValueKey;


@end