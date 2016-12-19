//
//  UIPopoverPresentationController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPopoverPresentationController (TFEasyCoder)




-(UIPopoverPresentationController  *(^)(id<UIPopoverPresentationControllerDelegate>    delegate))set_delegate;
-(UIPopoverPresentationController  *(^)(unsigned long long  permittedArrowDirections))set_permittedArrowDirections;
-(UIPopoverPresentationController  *(^)(UIView *  sourceView))set_sourceView;
-(UIPopoverPresentationController  *(^)(BOOL  canOverlapSourceViewRect))set_canOverlapSourceViewRect;
-(UIPopoverPresentationController  *(^)(UIBarButtonItem *  barButtonItem))set_barButtonItem;
-(UIPopoverPresentationController  *(^)(NSArray *  passthroughViews))set_passthroughViews;
-(UIPopoverPresentationController  *(^)(UIColor *  backgroundColor))set_backgroundColor;
-(UIPopoverPresentationController  *(^)(UIEdgeInsets  popoverLayoutMargins))set_popoverLayoutMargins;
-(UIPopoverPresentationController  *(^)(Class  popoverBackgroundViewClass))set_popoverBackgroundViewClass;




//superclass pros UIPresentationController
//TF_EC_CHAIN_PROP_INT(UIPopoverPresentationController ,id<UIAdaptivePresentationControllerDelegate>  ,delegate)
-(UIPopoverPresentationController  *(^)(UITraitCollection *  overrideTraitCollection))set_overrideTraitCollection;
//superclass pros NSObject
-(UIPopoverPresentationController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPopoverPresentationController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPopoverPresentationController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPopoverPresentationController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPopoverPresentationController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPopoverPresentationController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPopoverPresentationController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPopoverPresentationController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPopoverPresentationController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPopoverPresentationController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPopoverPresentationController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPopoverPresentationController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPopoverPresentationController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPopoverPresentationController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
