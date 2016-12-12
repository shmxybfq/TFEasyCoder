//
//  NSNetServiceBrowser+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSNetServiceBrowser (TFEasyCoder)





-(NSNetServiceBrowser  *(^)(id<NSNetServiceBrowserDelegate>   delegate))set_delegate;
-(NSNetServiceBrowser  *(^)(BOOL  includesPeerToPeer))set_includesPeerToPeer;




//superclass pros NSObject
-(NSNetServiceBrowser  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSNetServiceBrowser  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSNetServiceBrowser  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSNetServiceBrowser  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSNetServiceBrowser  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSNetServiceBrowser  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSNetServiceBrowser  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSNetServiceBrowser  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSNetServiceBrowser  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSNetServiceBrowser  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSNetServiceBrowser  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSNetServiceBrowser  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSNetServiceBrowser  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSNetServiceBrowser  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end