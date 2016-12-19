//
//  UIDocument+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIDocument (TFEasyCoder)





-(UIDocument  *(^)(NSDate *  fileModificationDate))set_fileModificationDate;
-(UIDocument  *(^)(NSUndoManager *  undoManager))set_undoManager;





//superclass pros NSObject
-(UIDocument  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIDocument  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIDocument  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIDocument  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIDocument  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIDocument  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIDocument  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIDocument  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIDocument  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIDocument  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIDocument  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIDocument  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIDocument  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIDocument  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end