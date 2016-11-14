//
//  NSSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSSetEasyCoderBlock) (NSSet * ins);

@interface NSSet (TFEasyCoder)

+( NSSet *)easyCoder:(NSSetEasyCoderBlock)block;
-(NSSet *)easyCoder:(NSSetEasyCoderBlock)block;






//superclass pros NSObject
-(NSSet  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSSet  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSSet  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSSet  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSSet  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSSet  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSSet  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSSet  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSSet  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSSet  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSSet  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSSet  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSSet  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSSet  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSSet *(^)(id value,NSString *key))set_ValueKey;


@end