//
//  NSAssertionHandler+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSAssertionHandlerEasyCoderBlock) (NSAssertionHandler * ins);

@interface NSAssertionHandler (TFEasyCoder)

+( NSAssertionHandler *)easyCoder:(NSAssertionHandlerEasyCoderBlock)block;
-(NSAssertionHandler *)easyCoder:(NSAssertionHandlerEasyCoderBlock)block;






//superclass pros NSObject
-(NSAssertionHandler  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSAssertionHandler  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSAssertionHandler  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSAssertionHandler  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSAssertionHandler  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSAssertionHandler  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSAssertionHandler  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSAssertionHandler  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSAssertionHandler  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSAssertionHandler  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSAssertionHandler  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSAssertionHandler  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSAssertionHandler  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSAssertionHandler  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSAssertionHandler *(^)(id value,NSString *key))set_ValueKey;


@end