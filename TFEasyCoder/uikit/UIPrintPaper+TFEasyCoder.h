//
//  UIPrintPaper+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPrintPaper (TFEasyCoder)









//superclass pros NSObject
-(UIPrintPaper  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPrintPaper  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPrintPaper  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPrintPaper  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPrintPaper  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPrintPaper  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPrintPaper  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPrintPaper  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPrintPaper  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPrintPaper  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPrintPaper  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPrintPaper  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPrintPaper  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPrintPaper  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end