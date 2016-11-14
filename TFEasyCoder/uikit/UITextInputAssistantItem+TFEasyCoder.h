//
//  UITextInputAssistantItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UITextInputAssistantItemEasyCoderBlock) (UITextInputAssistantItem * ins);

@interface UITextInputAssistantItem (TFEasyCoder)

+( UITextInputAssistantItem *)easyCoder:(UITextInputAssistantItemEasyCoderBlock)block;
-(UITextInputAssistantItem *)easyCoder:(UITextInputAssistantItemEasyCoderBlock)block;


-(UITextInputAssistantItem  *(^)(BOOL  allowsHidingShortcuts))set_allowsHidingShortcuts;
-(UITextInputAssistantItem  *(^)(NSArray *  leadingBarButtonGroups))set_leadingBarButtonGroups;
-(UITextInputAssistantItem  *(^)(NSArray *  trailingBarButtonGroups))set_trailingBarButtonGroups;





//superclass pros NSObject
-(UITextInputAssistantItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITextInputAssistantItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITextInputAssistantItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITextInputAssistantItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITextInputAssistantItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITextInputAssistantItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITextInputAssistantItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITextInputAssistantItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITextInputAssistantItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITextInputAssistantItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITextInputAssistantItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITextInputAssistantItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITextInputAssistantItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITextInputAssistantItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UITextInputAssistantItem *(^)(id value,NSString *key))set_ValueKey;


@end