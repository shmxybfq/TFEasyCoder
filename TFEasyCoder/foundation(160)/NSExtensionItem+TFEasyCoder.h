//
//  NSExtensionItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSExtensionItem (TFEasyCoder)





-(NSExtensionItem  *(^)(NSAttributedString *  attributedTitle))set_attributedTitle;
-(NSExtensionItem  *(^)(NSAttributedString *  attributedContentText))set_attributedContentText;
-(NSExtensionItem  *(^)(NSArray *  attachments))set_attachments;
-(NSExtensionItem  *(^)(NSDictionary *  userInfo))set_userInfo;




//superclass pros NSObject
-(NSExtensionItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSExtensionItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSExtensionItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSExtensionItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSExtensionItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSExtensionItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSExtensionItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSExtensionItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSExtensionItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSExtensionItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSExtensionItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSExtensionItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSExtensionItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSExtensionItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end