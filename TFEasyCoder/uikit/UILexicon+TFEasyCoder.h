//
//  UILexicon+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UILexiconEasyCoderBlock) (UILexicon * ins);

@interface UILexicon (TFEasyCoder)

+( UILexicon *)easyCoder:(UILexiconEasyCoderBlock)block;
-(UILexicon *)easyCoder:(UILexiconEasyCoderBlock)block;






//superclass pros NSObject
-(UILexicon  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UILexicon  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UILexicon  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UILexicon  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UILexicon  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UILexicon  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UILexicon  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UILexicon  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UILexicon  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UILexicon  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UILexicon  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UILexicon  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UILexicon  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UILexicon  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UILexicon *(^)(id value,NSString *key))set_ValueKey;


@end