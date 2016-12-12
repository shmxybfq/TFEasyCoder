//
//  NSURLComponents+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLComponents (TFEasyCoder)





-(NSURLComponents  *(^)(NSString *  scheme))set_scheme;
-(NSURLComponents  *(^)(NSString *  user))set_user;
-(NSURLComponents  *(^)(NSString *  password))set_password;
-(NSURLComponents  *(^)(NSString *  host))set_host;
-(NSURLComponents  *(^)(NSNumber *  port))set_port;
-(NSURLComponents  *(^)(NSString *  path))set_path;
-(NSURLComponents  *(^)(NSString *  query))set_query;
-(NSURLComponents  *(^)(NSString *  fragment))set_fragment;
-(NSURLComponents  *(^)(NSString *  percentEncodedUser))set_percentEncodedUser;
-(NSURLComponents  *(^)(NSString *  percentEncodedPassword))set_percentEncodedPassword;
-(NSURLComponents  *(^)(NSString *  percentEncodedHost))set_percentEncodedHost;
-(NSURLComponents  *(^)(NSString *  percentEncodedPath))set_percentEncodedPath;
-(NSURLComponents  *(^)(NSString *  percentEncodedQuery))set_percentEncodedQuery;
-(NSURLComponents  *(^)(NSString *  percentEncodedFragment))set_percentEncodedFragment;
-(NSURLComponents  *(^)(NSArray *  queryItems))set_queryItems;




//superclass pros NSObject
-(NSURLComponents  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLComponents  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLComponents  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLComponents  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLComponents  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLComponents  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLComponents  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLComponents  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLComponents  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLComponents  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLComponents  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLComponents  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLComponents  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLComponents  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end