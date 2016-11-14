//
//  NSItemProvider+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSItemProviderEasyCoderBlock) (NSItemProvider * ins);

@interface NSItemProvider (TFEasyCoder)

+( NSItemProvider *)easyCoder:(NSItemProviderEasyCoderBlock)block;
-(NSItemProvider *)easyCoder:(NSItemProviderEasyCoderBlock)block;






//superclass pros NSObject
-(NSItemProvider  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSItemProvider  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSItemProvider  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSItemProvider  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSItemProvider  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSItemProvider  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSItemProvider  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSItemProvider  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSItemProvider  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSItemProvider  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSItemProvider  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSItemProvider  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSItemProvider  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSItemProvider  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSItemProvider *(^)(id value,NSString *key))set_ValueKey;


@end