//
//  NSIndexPath+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSIndexPathEasyCoderBlock) (NSIndexPath * ins);

@interface NSIndexPath (TFEasyCoder)

+( NSIndexPath *)easyCoder:(NSIndexPathEasyCoderBlock)block;
-(NSIndexPath *)easyCoder:(NSIndexPathEasyCoderBlock)block;






//superclass pros NSObject
-(NSIndexPath  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSIndexPath  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSIndexPath  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSIndexPath  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSIndexPath  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSIndexPath  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSIndexPath  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSIndexPath  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSIndexPath  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSIndexPath  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSIndexPath  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSIndexPath  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSIndexPath  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSIndexPath  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSIndexPath *(^)(id value,NSString *key))set_ValueKey;


@end