//
//  NSShadow+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSShadow (TFEasyCoder)





-(NSShadow  *(^)(CGSize  shadowOffset))set_shadowOffset;




//superclass pros NSObject
-(NSShadow  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSShadow  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSShadow  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSShadow  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSShadow  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSShadow  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSShadow  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSShadow  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSShadow  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSShadow  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSShadow  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSShadow  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSShadow  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSShadow  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end