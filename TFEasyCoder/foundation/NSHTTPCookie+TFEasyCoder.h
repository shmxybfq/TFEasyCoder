//
//  NSHTTPCookie+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSHTTPCookieEasyCoderBlock) (NSHTTPCookie * ins);

@interface NSHTTPCookie (TFEasyCoder)

+( NSHTTPCookie *)easyCoder:(NSHTTPCookieEasyCoderBlock)block;
-(NSHTTPCookie *)easyCoder:(NSHTTPCookieEasyCoderBlock)block;






//superclass pros NSObject
-(NSHTTPCookie  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSHTTPCookie  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSHTTPCookie  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSHTTPCookie  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSHTTPCookie  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSHTTPCookie  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSHTTPCookie  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSHTTPCookie  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSHTTPCookie  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSHTTPCookie  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSHTTPCookie  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSHTTPCookie  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSHTTPCookie  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSHTTPCookie  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSHTTPCookie *(^)(id value,NSString *key))set_ValueKey;


@end