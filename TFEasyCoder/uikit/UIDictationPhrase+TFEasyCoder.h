//
//  UIDictationPhrase+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UIDictationPhraseEasyCoderBlock) (UIDictationPhrase * ins);

@interface UIDictationPhrase (TFEasyCoder)

+( UIDictationPhrase *)easyCoder:(UIDictationPhraseEasyCoderBlock)block;
-(UIDictationPhrase *)easyCoder:(UIDictationPhraseEasyCoderBlock)block;






//superclass pros NSObject
-(UIDictationPhrase  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIDictationPhrase  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIDictationPhrase  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIDictationPhrase  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIDictationPhrase  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIDictationPhrase  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIDictationPhrase  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIDictationPhrase  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIDictationPhrase  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIDictationPhrase  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIDictationPhrase  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIDictationPhrase  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIDictationPhrase  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIDictationPhrase  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIDictationPhrase *(^)(id value,NSString *key))set_ValueKey;


@end