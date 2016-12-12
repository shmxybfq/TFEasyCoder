//
//  NSUserActivity+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSUserActivity (TFEasyCoder)





-(NSUserActivity  *(^)(NSString *  title))set_title;
-(NSUserActivity  *(^)(NSDictionary *  userInfo))set_userInfo;
-(NSUserActivity  *(^)(NSSet *  requiredUserInfoKeys))set_requiredUserInfoKeys;
-(NSUserActivity  *(^)(BOOL  needsSave))set_needsSave;
-(NSUserActivity  *(^)(NSDate *  expirationDate))set_expirationDate;
-(NSUserActivity  *(^)(NSSet *  keywords))set_keywords;
-(NSUserActivity  *(^)(BOOL  supportsContinuationStreams))set_supportsContinuationStreams;
-(NSUserActivity  *(^)(id<NSUserActivityDelegate>   delegate))set_delegate;
-(NSUserActivity  *(^)(BOOL  eligibleForHandoff))set_eligibleForHandoff;
-(NSUserActivity  *(^)(BOOL  eligibleForSearch))set_eligibleForSearch;
-(NSUserActivity  *(^)(BOOL  eligibleForPublicIndexing))set_eligibleForPublicIndexing;




//superclass pros NSObject
-(NSUserActivity  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSUserActivity  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSUserActivity  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSUserActivity  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSUserActivity  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSUserActivity  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSUserActivity  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSUserActivity  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSUserActivity  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSUserActivity  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSUserActivity  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSUserActivity  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSUserActivity  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSUserActivity  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end