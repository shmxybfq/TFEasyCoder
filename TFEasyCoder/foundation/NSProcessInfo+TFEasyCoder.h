//
//  NSProcessInfo+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSProcessInfoEasyCoderBlock) (NSProcessInfo * ins);

@interface NSProcessInfo (TFEasyCoder)

+( NSProcessInfo *)easyCoder:(NSProcessInfoEasyCoderBlock)block;
-(NSProcessInfo *)easyCoder:(NSProcessInfoEasyCoderBlock)block;


-(NSProcessInfo  *(^)(NSString *  processName))set_processName;





//superclass pros NSObject
-(NSProcessInfo  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSProcessInfo  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSProcessInfo  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSProcessInfo  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSProcessInfo  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSProcessInfo  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSProcessInfo  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSProcessInfo  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSProcessInfo  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSProcessInfo  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSProcessInfo  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSProcessInfo  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSProcessInfo  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSProcessInfo  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSProcessInfo *(^)(id value,NSString *key))set_ValueKey;


@end