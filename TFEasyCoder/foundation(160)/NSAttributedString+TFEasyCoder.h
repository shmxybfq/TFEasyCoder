//
//  NSAttributedString+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSAttributedString (TFEasyCoder)









//superclass pros NSObject
-(NSAttributedString  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSAttributedString  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSAttributedString  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSAttributedString  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSAttributedString  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSAttributedString  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSAttributedString  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSAttributedString  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSAttributedString  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSAttributedString  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSAttributedString  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSAttributedString  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSAttributedString  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSAttributedString  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end