//
//  NSMutableCharacterSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSMutableCharacterSetEasyCoderBlock) (NSMutableCharacterSet * ins);

@interface NSMutableCharacterSet (TFEasyCoder)

+( NSMutableCharacterSet *)easyCoder:(NSMutableCharacterSetEasyCoderBlock)block;
-(NSMutableCharacterSet *)easyCoder:(NSMutableCharacterSetEasyCoderBlock)block;






//superclass pros NSCharacterSet
//superclass pros NSObject
-(NSMutableCharacterSet  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMutableCharacterSet  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMutableCharacterSet  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMutableCharacterSet  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMutableCharacterSet  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMutableCharacterSet  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMutableCharacterSet  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMutableCharacterSet  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMutableCharacterSet  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMutableCharacterSet  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMutableCharacterSet  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMutableCharacterSet  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMutableCharacterSet  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMutableCharacterSet  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSMutableCharacterSet *(^)(id value,NSString *key))set_ValueKey;


@end