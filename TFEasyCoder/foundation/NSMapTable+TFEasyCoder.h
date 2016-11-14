//
//  NSMapTable+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSMapTableEasyCoderBlock) (NSMapTable * ins);

@interface NSMapTable (TFEasyCoder)

+( NSMapTable *)easyCoder:(NSMapTableEasyCoderBlock)block;
-(NSMapTable *)easyCoder:(NSMapTableEasyCoderBlock)block;






//superclass pros NSObject
-(NSMapTable  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMapTable  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMapTable  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMapTable  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMapTable  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMapTable  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMapTable  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMapTable  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMapTable  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMapTable  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMapTable  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMapTable  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMapTable  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMapTable  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSMapTable *(^)(id value,NSString *key))set_ValueKey;


@end