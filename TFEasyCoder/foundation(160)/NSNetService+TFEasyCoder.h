//
//  NSNetService+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSNetService (TFEasyCoder)





-(NSNetService  *(^)(id<NSNetServiceDelegate>   delegate))set_delegate;
-(NSNetService  *(^)(BOOL  includesPeerToPeer))set_includesPeerToPeer;




//superclass pros NSObject
-(NSNetService  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSNetService  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSNetService  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSNetService  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSNetService  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSNetService  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSNetService  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSNetService  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSNetService  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSNetService  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSNetService  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSNetService  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSNetService  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSNetService  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end