//
//  NSFileHandle+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSFileHandleEasyCoderBlock) (NSFileHandle * ins);

@interface NSFileHandle (TFEasyCoder)

+( NSFileHandle *)easyCoder:(NSFileHandleEasyCoderBlock)block;
-(NSFileHandle *)easyCoder:(NSFileHandleEasyCoderBlock)block;






//superclass pros NSObject
-(NSFileHandle  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSFileHandle  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSFileHandle  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSFileHandle  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSFileHandle  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSFileHandle  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSFileHandle  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSFileHandle  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSFileHandle  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSFileHandle  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSFileHandle  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSFileHandle  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSFileHandle  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSFileHandle  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSFileHandle *(^)(id value,NSString *key))set_ValueKey;


@end