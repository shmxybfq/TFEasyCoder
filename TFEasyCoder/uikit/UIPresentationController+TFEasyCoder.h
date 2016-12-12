//
//  UIPresentationController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPresentationController (TFEasyCoder)





-(UIPresentationController  *(^)(id<UIAdaptivePresentationControllerDelegate>    delegate))set_delegate;
-(UIPresentationController  *(^)(UITraitCollection *  overrideTraitCollection))set_overrideTraitCollection;





//superclass pros NSObject
-(UIPresentationController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPresentationController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPresentationController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPresentationController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPresentationController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPresentationController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPresentationController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPresentationController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPresentationController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPresentationController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPresentationController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPresentationController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPresentationController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPresentationController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end