//
//  UIStoryboardUnwindSegueSource+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIStoryboardUnwindSegueSource (TFEasyCoder)









//superclass pros NSObject
-(UIStoryboardUnwindSegueSource  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIStoryboardUnwindSegueSource  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIStoryboardUnwindSegueSource  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIStoryboardUnwindSegueSource  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIStoryboardUnwindSegueSource  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIStoryboardUnwindSegueSource  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIStoryboardUnwindSegueSource  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIStoryboardUnwindSegueSource  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIStoryboardUnwindSegueSource  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIStoryboardUnwindSegueSource  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIStoryboardUnwindSegueSource  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIStoryboardUnwindSegueSource  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIStoryboardUnwindSegueSource  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIStoryboardUnwindSegueSource  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end