//
//  NSSimpleCString+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSSimpleCStringEasyCoderBlock) (NSSimpleCString * ins);

@interface NSSimpleCString (TFEasyCoder)

+( NSSimpleCString *)easyCoder:(NSSimpleCStringEasyCoderBlock)block;
-(NSSimpleCString *)easyCoder:(NSSimpleCStringEasyCoderBlock)block;






//superclass pros NSString
//superclass pros NSObject
-(NSSimpleCString  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSSimpleCString  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSSimpleCString  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSSimpleCString  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSSimpleCString  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSSimpleCString  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSSimpleCString  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSSimpleCString  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSSimpleCString  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSSimpleCString  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSSimpleCString  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSSimpleCString  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSSimpleCString  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSSimpleCString  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSSimpleCString *(^)(id value,NSString *key))set_ValueKey;


@end