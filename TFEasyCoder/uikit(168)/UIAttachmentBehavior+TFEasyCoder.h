//
//  UIAttachmentBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIAttachmentBehavior (TFEasyCoder)





-(UIAttachmentBehavior  *(^)(CGPoint  anchorPoint))set_anchorPoint;
-(UIAttachmentBehavior  *(^)(double  length))set_length;
-(UIAttachmentBehavior  *(^)(double  damping))set_damping;
-(UIAttachmentBehavior  *(^)(double  frequency))set_frequency;
-(UIAttachmentBehavior  *(^)(double  frictionTorque))set_frictionTorque;




//superclass pros UIDynamicBehavior
//superclass pros NSObject
-(UIAttachmentBehavior  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIAttachmentBehavior  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIAttachmentBehavior  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIAttachmentBehavior  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIAttachmentBehavior  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIAttachmentBehavior  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIAttachmentBehavior  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIAttachmentBehavior  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIAttachmentBehavior  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIAttachmentBehavior  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIAttachmentBehavior  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIAttachmentBehavior  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIAttachmentBehavior  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIAttachmentBehavior  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end