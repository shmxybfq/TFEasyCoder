//
//  UIDocumentInteractionController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIDocumentInteractionController (TFEasyCoder)






-(UIDocumentInteractionController  *(^)(id<UIDocumentInteractionControllerDelegate>    delegate))set_delegate;
-(UIDocumentInteractionController  *(^)(NSString *  UTI))set_UTI;
-(UIDocumentInteractionController  *(^)(NSString *  name))set_name;




//superclass pros NSObject
-(UIDocumentInteractionController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIDocumentInteractionController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIDocumentInteractionController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIDocumentInteractionController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIDocumentInteractionController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIDocumentInteractionController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIDocumentInteractionController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIDocumentInteractionController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIDocumentInteractionController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIDocumentInteractionController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIDocumentInteractionController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIDocumentInteractionController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIDocumentInteractionController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIDocumentInteractionController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end