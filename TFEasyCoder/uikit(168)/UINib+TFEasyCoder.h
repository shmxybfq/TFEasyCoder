//
//  UINib+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UINib (TFEasyCoder)









//superclass pros NSObject
-(UINib  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UINib  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UINib  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UINib  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UINib  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UINib  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UINib  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UINib  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UINib  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UINib  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UINib  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UINib  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UINib  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UINib  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end