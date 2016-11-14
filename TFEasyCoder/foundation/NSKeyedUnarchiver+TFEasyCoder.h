//
//  NSKeyedUnarchiver+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSKeyedUnarchiverEasyCoderBlock) (NSKeyedUnarchiver * ins);

@interface NSKeyedUnarchiver (TFEasyCoder)

+( NSKeyedUnarchiver *)easyCoder:(NSKeyedUnarchiverEasyCoderBlock)block;
-(NSKeyedUnarchiver *)easyCoder:(NSKeyedUnarchiverEasyCoderBlock)block;


-(NSKeyedUnarchiver  *(^)(id<NSKeyedUnarchiverDelegate>   delegate))set_delegate;
-(NSKeyedUnarchiver  *(^)(BOOL  requiresSecureCoding))set_requiresSecureCoding;




//superclass pros NSCoder
//superclass pros NSObject
-(NSKeyedUnarchiver  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSKeyedUnarchiver  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSKeyedUnarchiver  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSKeyedUnarchiver  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSKeyedUnarchiver  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSKeyedUnarchiver  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSKeyedUnarchiver  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSKeyedUnarchiver  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSKeyedUnarchiver  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSKeyedUnarchiver  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSKeyedUnarchiver  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSKeyedUnarchiver  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSKeyedUnarchiver  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSKeyedUnarchiver  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSKeyedUnarchiver *(^)(id value,NSString *key))set_ValueKey;


@end