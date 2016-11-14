//
//  UITableViewFocusUpdateContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UITableViewFocusUpdateContextEasyCoderBlock) (UITableViewFocusUpdateContext * ins);

@interface UITableViewFocusUpdateContext (TFEasyCoder)

+( UITableViewFocusUpdateContext *)easyCoder:(UITableViewFocusUpdateContextEasyCoderBlock)block;
-(UITableViewFocusUpdateContext *)easyCoder:(UITableViewFocusUpdateContextEasyCoderBlock)block;






//superclass pros UIFocusUpdateContext
//superclass pros NSObject
-(UITableViewFocusUpdateContext  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITableViewFocusUpdateContext  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITableViewFocusUpdateContext  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITableViewFocusUpdateContext  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITableViewFocusUpdateContext  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITableViewFocusUpdateContext  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITableViewFocusUpdateContext  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITableViewFocusUpdateContext  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITableViewFocusUpdateContext  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITableViewFocusUpdateContext  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITableViewFocusUpdateContext  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITableViewFocusUpdateContext  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITableViewFocusUpdateContext  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITableViewFocusUpdateContext  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UITableViewFocusUpdateContext *(^)(id value,NSString *key))set_ValueKey;


@end