//
//  UIPrinter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPrinter (TFEasyCoder)









//superclass pros NSObject
-(UIPrinter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPrinter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPrinter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPrinter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPrinter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPrinter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPrinter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPrinter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPrinter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPrinter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPrinter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPrinter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPrinter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPrinter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end