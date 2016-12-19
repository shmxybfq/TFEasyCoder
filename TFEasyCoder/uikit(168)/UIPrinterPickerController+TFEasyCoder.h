//
//  UIPrinterPickerController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPrinterPickerController (TFEasyCoder)





-(UIPrinterPickerController  *(^)(id<UIPrinterPickerControllerDelegate>   delegate))set_delegate;




//superclass pros NSObject
-(UIPrinterPickerController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPrinterPickerController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPrinterPickerController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPrinterPickerController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPrinterPickerController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPrinterPickerController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPrinterPickerController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPrinterPickerController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPrinterPickerController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPrinterPickerController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPrinterPickerController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPrinterPickerController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPrinterPickerController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPrinterPickerController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end