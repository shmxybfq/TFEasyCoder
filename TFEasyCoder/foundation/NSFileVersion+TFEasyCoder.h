//
//  NSFileVersion+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSFileVersionEasyCoderBlock) (NSFileVersion * ins);

@interface NSFileVersion (TFEasyCoder)

+( NSFileVersion *)easyCoder:(NSFileVersionEasyCoderBlock)block;
-(NSFileVersion *)easyCoder:(NSFileVersionEasyCoderBlock)block;






//superclass pros NSObject
-(NSFileVersion  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSFileVersion  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSFileVersion  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSFileVersion  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSFileVersion  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSFileVersion  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSFileVersion  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSFileVersion  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSFileVersion  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSFileVersion  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSFileVersion  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSFileVersion  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSFileVersion  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSFileVersion  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSFileVersion *(^)(id value,NSString *key))set_ValueKey;


@end