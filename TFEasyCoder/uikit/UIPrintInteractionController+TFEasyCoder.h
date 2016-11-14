//
//  UIPrintInteractionController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UIPrintInteractionControllerEasyCoderBlock) (UIPrintInteractionController * ins);

@interface UIPrintInteractionController (TFEasyCoder)

+( UIPrintInteractionController *)easyCoder:(UIPrintInteractionControllerEasyCoderBlock)block;
-(UIPrintInteractionController *)easyCoder:(UIPrintInteractionControllerEasyCoderBlock)block;


-(UIPrintInteractionController  *(^)(UIPrintInfo *  printInfo))set_printInfo;
-(UIPrintInteractionController  *(^)(id<UIPrintInteractionControllerDelegate>   delegate))set_delegate;
-(UIPrintInteractionController  *(^)(BOOL  showsNumberOfCopies))set_showsNumberOfCopies;
-(UIPrintInteractionController  *(^)(BOOL  showsPaperSelectionForLoadedPapers))set_showsPaperSelectionForLoadedPapers;
-(UIPrintInteractionController  *(^)(UIPrintFormatter *  printFormatter))set_printFormatter;
-(UIPrintInteractionController  *(^)(NSArray *  printingItems))set_printingItems;





//superclass pros NSObject
-(UIPrintInteractionController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPrintInteractionController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPrintInteractionController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPrintInteractionController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPrintInteractionController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPrintInteractionController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPrintInteractionController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPrintInteractionController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPrintInteractionController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPrintInteractionController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPrintInteractionController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPrintInteractionController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPrintInteractionController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPrintInteractionController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIPrintInteractionController *(^)(id value,NSString *key))set_ValueKey;


@end