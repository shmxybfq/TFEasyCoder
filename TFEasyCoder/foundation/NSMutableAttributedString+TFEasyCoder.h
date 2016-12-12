//
//  NSMutableAttributedString+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMutableAttributedString (TFEasyCoder)









//superclass pros NSAttributedString
//superclass pros NSObject
-(NSMutableAttributedString  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMutableAttributedString  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMutableAttributedString  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMutableAttributedString  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMutableAttributedString  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMutableAttributedString  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMutableAttributedString  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMutableAttributedString  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMutableAttributedString  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMutableAttributedString  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMutableAttributedString  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMutableAttributedString  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMutableAttributedString  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMutableAttributedString  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end