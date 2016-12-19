//
//  NSDirectoryEnumerator+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSDirectoryEnumerator (TFEasyCoder)









//superclass pros NSEnumerator
//superclass pros NSObject
-(NSDirectoryEnumerator  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSDirectoryEnumerator  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSDirectoryEnumerator  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSDirectoryEnumerator  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSDirectoryEnumerator  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSDirectoryEnumerator  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSDirectoryEnumerator  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSDirectoryEnumerator  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSDirectoryEnumerator  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSDirectoryEnumerator  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSDirectoryEnumerator  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSDirectoryEnumerator  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSDirectoryEnumerator  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSDirectoryEnumerator  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end