//
//  NSCachedURLResponse+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSCachedURLResponseEasyCoderBlock) (NSCachedURLResponse * ins);

@interface NSCachedURLResponse (TFEasyCoder)

+( NSCachedURLResponse *)easyCoder:(NSCachedURLResponseEasyCoderBlock)block;
-(NSCachedURLResponse *)easyCoder:(NSCachedURLResponseEasyCoderBlock)block;






//superclass pros NSObject
-(NSCachedURLResponse  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSCachedURLResponse  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSCachedURLResponse  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSCachedURLResponse  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSCachedURLResponse  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSCachedURLResponse  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSCachedURLResponse  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSCachedURLResponse  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSCachedURLResponse  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSCachedURLResponse  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSCachedURLResponse  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSCachedURLResponse  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSCachedURLResponse  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSCachedURLResponse  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSCachedURLResponse *(^)(id value,NSString *key))set_ValueKey;


@end