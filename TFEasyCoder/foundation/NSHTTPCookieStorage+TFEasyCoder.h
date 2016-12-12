//
//  NSHTTPCookieStorage+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSHTTPCookieStorage (TFEasyCoder)





-(NSHTTPCookieStorage  *(^)(unsigned long long  cookieAcceptPolicy))set_cookieAcceptPolicy;




//superclass pros NSObject
-(NSHTTPCookieStorage  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSHTTPCookieStorage  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSHTTPCookieStorage  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSHTTPCookieStorage  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSHTTPCookieStorage  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSHTTPCookieStorage  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSHTTPCookieStorage  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSHTTPCookieStorage  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSHTTPCookieStorage  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSHTTPCookieStorage  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSHTTPCookieStorage  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSHTTPCookieStorage  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSHTTPCookieStorage  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSHTTPCookieStorage  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end