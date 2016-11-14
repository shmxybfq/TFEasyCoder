//
//  UICollectionViewFocusUpdateContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UICollectionViewFocusUpdateContextEasyCoderBlock) (UICollectionViewFocusUpdateContext * ins);

@interface UICollectionViewFocusUpdateContext (TFEasyCoder)

+( UICollectionViewFocusUpdateContext *)easyCoder:(UICollectionViewFocusUpdateContextEasyCoderBlock)block;
-(UICollectionViewFocusUpdateContext *)easyCoder:(UICollectionViewFocusUpdateContextEasyCoderBlock)block;






//superclass pros UIFocusUpdateContext
//superclass pros NSObject
-(UICollectionViewFocusUpdateContext  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UICollectionViewFocusUpdateContext  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UICollectionViewFocusUpdateContext  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UICollectionViewFocusUpdateContext  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UICollectionViewFocusUpdateContext  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UICollectionViewFocusUpdateContext  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UICollectionViewFocusUpdateContext  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UICollectionViewFocusUpdateContext  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UICollectionViewFocusUpdateContext  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UICollectionViewFocusUpdateContext  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UICollectionViewFocusUpdateContext  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UICollectionViewFocusUpdateContext  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UICollectionViewFocusUpdateContext  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UICollectionViewFocusUpdateContext  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UICollectionViewFocusUpdateContext *(^)(id value,NSString *key))set_ValueKey;


@end