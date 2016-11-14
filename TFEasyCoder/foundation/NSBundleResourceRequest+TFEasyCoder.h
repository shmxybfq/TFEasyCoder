//
//  NSBundleResourceRequest+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSBundleResourceRequestEasyCoderBlock) (NSBundleResourceRequest * ins);

@interface NSBundleResourceRequest (TFEasyCoder)

+( NSBundleResourceRequest *)easyCoder:(NSBundleResourceRequestEasyCoderBlock)block;
-(NSBundleResourceRequest *)easyCoder:(NSBundleResourceRequestEasyCoderBlock)block;


-(NSBundleResourceRequest  *(^)(double  loadingPriority))set_loadingPriority;




//superclass pros NSObject
-(NSBundleResourceRequest  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSBundleResourceRequest  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSBundleResourceRequest  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSBundleResourceRequest  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSBundleResourceRequest  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSBundleResourceRequest  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSBundleResourceRequest  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSBundleResourceRequest  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSBundleResourceRequest  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSBundleResourceRequest  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSBundleResourceRequest  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSBundleResourceRequest  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSBundleResourceRequest  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSBundleResourceRequest  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSBundleResourceRequest *(^)(id value,NSString *key))set_ValueKey;


@end