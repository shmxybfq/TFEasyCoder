//
//  NSLayoutYAxisAnchor+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSLayoutYAxisAnchorEasyCoderBlock) (NSLayoutYAxisAnchor * ins);

@interface NSLayoutYAxisAnchor (TFEasyCoder)

+( NSLayoutYAxisAnchor *)easyCoder:(NSLayoutYAxisAnchorEasyCoderBlock)block;
-(NSLayoutYAxisAnchor *)easyCoder:(NSLayoutYAxisAnchorEasyCoderBlock)block;






//superclass pros NSLayoutAnchor
//superclass pros NSObject
-(NSLayoutYAxisAnchor  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSLayoutYAxisAnchor  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSLayoutYAxisAnchor  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSLayoutYAxisAnchor  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSLayoutYAxisAnchor  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSLayoutYAxisAnchor  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSLayoutYAxisAnchor  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSLayoutYAxisAnchor  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSLayoutYAxisAnchor  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSLayoutYAxisAnchor  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSLayoutYAxisAnchor  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSLayoutYAxisAnchor  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSLayoutYAxisAnchor  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSLayoutYAxisAnchor  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSLayoutYAxisAnchor *(^)(id value,NSString *key))set_ValueKey;


@end