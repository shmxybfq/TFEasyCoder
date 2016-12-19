//
//  NSPersonNameComponents+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSPersonNameComponents (TFEasyCoder)





-(NSPersonNameComponents  *(^)(NSString *  namePrefix))set_namePrefix;
-(NSPersonNameComponents  *(^)(NSString *  givenName))set_givenName;
-(NSPersonNameComponents  *(^)(NSString *  middleName))set_middleName;
-(NSPersonNameComponents  *(^)(NSString *  familyName))set_familyName;
-(NSPersonNameComponents  *(^)(NSString *  nameSuffix))set_nameSuffix;
-(NSPersonNameComponents  *(^)(NSString *  nickname))set_nickname;
-(NSPersonNameComponents  *(^)(NSPersonNameComponents *  phoneticRepresentation))set_phoneticRepresentation;




//superclass pros NSObject
-(NSPersonNameComponents  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSPersonNameComponents  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSPersonNameComponents  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSPersonNameComponents  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSPersonNameComponents  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSPersonNameComponents  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSPersonNameComponents  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSPersonNameComponents  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSPersonNameComponents  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSPersonNameComponents  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSPersonNameComponents  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSPersonNameComponents  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSPersonNameComponents  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSPersonNameComponents  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end