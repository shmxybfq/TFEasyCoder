//
//  UIPressesEvent+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UIPressesEventEasyCoderBlock) (UIPressesEvent * ins);

@interface UIPressesEvent (TFEasyCoder)

+( UIPressesEvent *)easyCoder:(UIPressesEventEasyCoderBlock)block;
-(UIPressesEvent *)easyCoder:(UIPressesEventEasyCoderBlock)block;






//superclass pros UIEvent
//superclass pros NSObject
-(UIPressesEvent  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPressesEvent  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPressesEvent  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPressesEvent  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPressesEvent  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPressesEvent  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPressesEvent  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPressesEvent  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPressesEvent  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPressesEvent  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPressesEvent  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPressesEvent  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPressesEvent  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPressesEvent  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIPressesEvent *(^)(id value,NSString *key))set_ValueKey;


@end