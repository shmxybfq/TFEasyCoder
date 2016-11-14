//
//  NSOrderedSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSOrderedSetEasyCoderBlock) (NSOrderedSet * ins);

@interface NSOrderedSet (TFEasyCoder)

+( NSOrderedSet *)easyCoder:(NSOrderedSetEasyCoderBlock)block;
-(NSOrderedSet *)easyCoder:(NSOrderedSetEasyCoderBlock)block;






//superclass pros NSObject
-(NSOrderedSet  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSOrderedSet  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSOrderedSet  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSOrderedSet  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSOrderedSet  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSOrderedSet  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSOrderedSet  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSOrderedSet  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSOrderedSet  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSOrderedSet  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSOrderedSet  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSOrderedSet  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSOrderedSet  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSOrderedSet  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSOrderedSet *(^)(id value,NSString *key))set_ValueKey;


@end