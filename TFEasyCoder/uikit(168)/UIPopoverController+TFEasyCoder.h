//
//  UIPopoverController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>



#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"




@interface UIPopoverController (TFEasyCoder)




-(UIPopoverController  *(^)(id<UIPopoverControllerDelegate>    delegate))set_delegate;
-(UIPopoverController  *(^)(UIViewController *  contentViewController))set_contentViewController;
-(UIPopoverController  *(^)(CGSize  popoverContentSize))set_popoverContentSize;
-(UIPopoverController  *(^)(NSArray *  passthroughViews))set_passthroughViews;
-(UIPopoverController  *(^)(UIColor *  backgroundColor))set_backgroundColor;
-(UIPopoverController  *(^)(UIEdgeInsets  popoverLayoutMargins))set_popoverLayoutMargins;
-(UIPopoverController  *(^)(Class  popoverBackgroundViewClass))set_popoverBackgroundViewClass;





//superclass pros NSObject
-(UIPopoverController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPopoverController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPopoverController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPopoverController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPopoverController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPopoverController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPopoverController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPopoverController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPopoverController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPopoverController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPopoverController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPopoverController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPopoverController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPopoverController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end