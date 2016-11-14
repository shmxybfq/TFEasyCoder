//
//  NSURLRequest+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSURLRequestEasyCoderBlock) (NSURLRequest * ins);

@interface NSURLRequest (TFEasyCoder)

+( NSURLRequest *)easyCoder:(NSURLRequestEasyCoderBlock)block;
-(NSURLRequest *)easyCoder:(NSURLRequestEasyCoderBlock)block;






//superclass pros NSObject
-(NSURLRequest  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLRequest  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLRequest  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLRequest  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLRequest  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLRequest  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLRequest  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLRequest  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLRequest  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLRequest  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLRequest  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLRequest  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLRequest  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLRequest  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSURLRequest *(^)(id value,NSString *key))set_ValueKey;


@end