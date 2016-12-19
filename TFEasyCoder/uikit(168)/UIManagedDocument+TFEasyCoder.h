//
//  UIManagedDocument+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIManagedDocument (TFEasyCoder)





-(UIManagedDocument  *(^)(NSDictionary *  persistentStoreOptions))set_persistentStoreOptions;
-(UIManagedDocument  *(^)(NSString *  modelConfiguration))set_modelConfiguration;




//superclass pros UIDocument
-(UIManagedDocument  *(^)(NSDate *  fileModificationDate))set_fileModificationDate;
-(UIManagedDocument  *(^)(NSUndoManager *  undoManager))set_undoManager;
//superclass pros NSObject
-(UIManagedDocument  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIManagedDocument  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIManagedDocument  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIManagedDocument  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIManagedDocument  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIManagedDocument  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIManagedDocument  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIManagedDocument  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIManagedDocument  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIManagedDocument  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIManagedDocument  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIManagedDocument  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIManagedDocument  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIManagedDocument  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end