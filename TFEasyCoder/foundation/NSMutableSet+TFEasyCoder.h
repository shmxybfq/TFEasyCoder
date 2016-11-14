//
//  NSMutableSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSMutableSetEasyCoderBlock) (NSMutableSet * ins);

@interface NSMutableSet (TFEasyCoder)

+( NSMutableSet *)easyCoder:(NSMutableSetEasyCoderBlock)block;
-(NSMutableSet *)easyCoder:(NSMutableSetEasyCoderBlock)block;






//superclass pros NSSet
//superclass pros NSObject
-(NSMutableSet  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMutableSet  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMutableSet  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMutableSet  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMutableSet  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMutableSet  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMutableSet  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMutableSet  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMutableSet  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMutableSet  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMutableSet  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMutableSet  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMutableSet  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMutableSet  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSMutableSet *(^)(id value,NSString *key))set_ValueKey;


@end