//
//  NSEnumerator+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSEnumerator (TFEasyCoder)









//superclass pros NSObject
-(NSEnumerator  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSEnumerator  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSEnumerator  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSEnumerator  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSEnumerator  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSEnumerator  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSEnumerator  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSEnumerator  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSEnumerator  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSEnumerator  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSEnumerator  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSEnumerator  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSEnumerator  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSEnumerator  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end