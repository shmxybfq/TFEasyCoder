//
//  NSJSONSerialization+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSJSONSerializationEasyCoderBlock) (NSJSONSerialization * ins);

@interface NSJSONSerialization (TFEasyCoder)

+( NSJSONSerialization *)easyCoder:(NSJSONSerializationEasyCoderBlock)block;
-(NSJSONSerialization *)easyCoder:(NSJSONSerializationEasyCoderBlock)block;






//superclass pros NSObject
-(NSJSONSerialization  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSJSONSerialization  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSJSONSerialization  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSJSONSerialization  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSJSONSerialization  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSJSONSerialization  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSJSONSerialization  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSJSONSerialization  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSJSONSerialization  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSJSONSerialization  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSJSONSerialization  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSJSONSerialization  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSJSONSerialization  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSJSONSerialization  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSJSONSerialization *(^)(id value,NSString *key))set_ValueKey;


@end