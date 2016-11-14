//
//  UILexiconEntry+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UILexiconEntryEasyCoderBlock) (UILexiconEntry * ins);

@interface UILexiconEntry (TFEasyCoder)

+( UILexiconEntry *)easyCoder:(UILexiconEntryEasyCoderBlock)block;
-(UILexiconEntry *)easyCoder:(UILexiconEntryEasyCoderBlock)block;






//superclass pros NSObject
-(UILexiconEntry  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UILexiconEntry  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UILexiconEntry  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UILexiconEntry  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UILexiconEntry  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UILexiconEntry  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UILexiconEntry  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UILexiconEntry  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UILexiconEntry  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UILexiconEntry  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UILexiconEntry  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UILexiconEntry  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UILexiconEntry  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UILexiconEntry  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UILexiconEntry *(^)(id value,NSString *key))set_ValueKey;


@end