//
//  NSSortDescriptor+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSSortDescriptor (TFEasyCoder)









//superclass pros NSObject
-(NSSortDescriptor  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSSortDescriptor  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSSortDescriptor  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSSortDescriptor  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSSortDescriptor  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSSortDescriptor  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSSortDescriptor  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSSortDescriptor  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSSortDescriptor  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSSortDescriptor  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSSortDescriptor  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSSortDescriptor  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSSortDescriptor  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSSortDescriptor  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end