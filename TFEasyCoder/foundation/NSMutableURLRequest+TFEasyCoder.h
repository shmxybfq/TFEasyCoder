//
//  NSMutableURLRequest+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMutableURLRequest (TFEasyCoder)





-(NSMutableURLRequest  *(^)(NSString *  HTTPMethod))set_HTTPMethod;
-(NSMutableURLRequest  *(^)(NSDictionary *  allHTTPHeaderFields))set_allHTTPHeaderFields;
-(NSMutableURLRequest  *(^)(NSData *  HTTPBody))set_HTTPBody;
-(NSMutableURLRequest  *(^)(NSInputStream *  HTTPBodyStream))set_HTTPBodyStream;
-(NSMutableURLRequest  *(^)(BOOL  HTTPShouldHandleCookies))set_HTTPShouldHandleCookies;
-(NSMutableURLRequest  *(^)(BOOL  HTTPShouldUsePipelining))set_HTTPShouldUsePipelining;
-(NSMutableURLRequest  *(^)(unsigned long long  cachePolicy))set_cachePolicy;
-(NSMutableURLRequest  *(^)(double  timeoutInterval))set_timeoutInterval;
-(NSMutableURLRequest  *(^)(unsigned long long  networkServiceType))set_networkServiceType;
-(NSMutableURLRequest  *(^)(BOOL  allowsCellularAccess))set_allowsCellularAccess;




//superclass pros NSURLRequest
//superclass pros NSObject
-(NSMutableURLRequest  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMutableURLRequest  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMutableURLRequest  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMutableURLRequest  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMutableURLRequest  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMutableURLRequest  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMutableURLRequest  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMutableURLRequest  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMutableURLRequest  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMutableURLRequest  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMutableURLRequest  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMutableURLRequest  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMutableURLRequest  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMutableURLRequest  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end