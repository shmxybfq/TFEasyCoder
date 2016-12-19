//
//  NSFileSecurity+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSFileSecurity (TFEasyCoder)









//superclass pros NSObject
-(NSFileSecurity  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSFileSecurity  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSFileSecurity  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSFileSecurity  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSFileSecurity  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSFileSecurity  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSFileSecurity  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSFileSecurity  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSFileSecurity  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSFileSecurity  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSFileSecurity  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSFileSecurity  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSFileSecurity  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSFileSecurity  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end