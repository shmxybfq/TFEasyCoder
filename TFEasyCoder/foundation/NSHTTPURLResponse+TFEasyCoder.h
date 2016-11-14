//
//  NSHTTPURLResponse+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSHTTPURLResponseEasyCoderBlock) (NSHTTPURLResponse * ins);

@interface NSHTTPURLResponse (TFEasyCoder)

+( NSHTTPURLResponse *)easyCoder:(NSHTTPURLResponseEasyCoderBlock)block;
-(NSHTTPURLResponse *)easyCoder:(NSHTTPURLResponseEasyCoderBlock)block;






//superclass pros NSURLResponse
//superclass pros NSObject
-(NSHTTPURLResponse  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSHTTPURLResponse  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSHTTPURLResponse  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSHTTPURLResponse  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSHTTPURLResponse  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSHTTPURLResponse  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSHTTPURLResponse  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSHTTPURLResponse  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSHTTPURLResponse  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSHTTPURLResponse  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSHTTPURLResponse  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSHTTPURLResponse  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSHTTPURLResponse  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSHTTPURLResponse  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSHTTPURLResponse *(^)(id value,NSString *key))set_ValueKey;


@end