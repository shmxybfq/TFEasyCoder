//
//  NSURLCredential+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSURLCredentialEasyCoderBlock) (NSURLCredential * ins);

@interface NSURLCredential (TFEasyCoder)

+( NSURLCredential *)easyCoder:(NSURLCredentialEasyCoderBlock)block;
-(NSURLCredential *)easyCoder:(NSURLCredentialEasyCoderBlock)block;






//superclass pros NSObject
-(NSURLCredential  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLCredential  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLCredential  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLCredential  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLCredential  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLCredential  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLCredential  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLCredential  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLCredential  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLCredential  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLCredential  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLCredential  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLCredential  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLCredential  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSURLCredential *(^)(id value,NSString *key))set_ValueKey;


@end