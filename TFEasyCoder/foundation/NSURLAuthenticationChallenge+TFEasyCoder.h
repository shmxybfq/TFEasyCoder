//
//  NSURLAuthenticationChallenge+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSURLAuthenticationChallengeEasyCoderBlock) (NSURLAuthenticationChallenge * ins);

@interface NSURLAuthenticationChallenge (TFEasyCoder)

+( NSURLAuthenticationChallenge *)easyCoder:(NSURLAuthenticationChallengeEasyCoderBlock)block;
-(NSURLAuthenticationChallenge *)easyCoder:(NSURLAuthenticationChallengeEasyCoderBlock)block;






//superclass pros NSObject
-(NSURLAuthenticationChallenge  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLAuthenticationChallenge  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLAuthenticationChallenge  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLAuthenticationChallenge  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLAuthenticationChallenge  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLAuthenticationChallenge  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLAuthenticationChallenge  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLAuthenticationChallenge  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLAuthenticationChallenge  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLAuthenticationChallenge  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLAuthenticationChallenge  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLAuthenticationChallenge  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLAuthenticationChallenge  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLAuthenticationChallenge  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSURLAuthenticationChallenge *(^)(id value,NSString *key))set_ValueKey;


@end