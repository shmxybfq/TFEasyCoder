//
//  NSUndoManager+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSUndoManager (TFEasyCoder)





-(NSUndoManager  *(^)(BOOL  groupsByEvent))set_groupsByEvent;
-(NSUndoManager  *(^)(unsigned long long  levelsOfUndo))set_levelsOfUndo;
-(NSUndoManager  *(^)(NSArray *  runLoopModes))set_runLoopModes;




//superclass pros NSObject
-(NSUndoManager  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSUndoManager  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSUndoManager  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSUndoManager  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSUndoManager  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSUndoManager  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSUndoManager  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSUndoManager  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSUndoManager  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSUndoManager  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSUndoManager  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSUndoManager  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSUndoManager  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSUndoManager  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end