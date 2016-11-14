//
//  UICollectionViewLayoutInvalidationContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UICollectionViewLayoutInvalidationContextEasyCoderBlock) (UICollectionViewLayoutInvalidationContext * ins);

@interface UICollectionViewLayoutInvalidationContext (TFEasyCoder)

+( UICollectionViewLayoutInvalidationContext *)easyCoder:(UICollectionViewLayoutInvalidationContextEasyCoderBlock)block;
-(UICollectionViewLayoutInvalidationContext *)easyCoder:(UICollectionViewLayoutInvalidationContextEasyCoderBlock)block;


-(UICollectionViewLayoutInvalidationContext  *(^)(CGPoint  contentOffsetAdjustment))set_contentOffsetAdjustment;
-(UICollectionViewLayoutInvalidationContext  *(^)(CGSize  contentSizeAdjustment))set_contentSizeAdjustment;




//superclass pros NSObject
-(UICollectionViewLayoutInvalidationContext  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UICollectionViewLayoutInvalidationContext  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UICollectionViewLayoutInvalidationContext  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UICollectionViewLayoutInvalidationContext  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UICollectionViewLayoutInvalidationContext  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UICollectionViewLayoutInvalidationContext  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UICollectionViewLayoutInvalidationContext  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UICollectionViewLayoutInvalidationContext  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UICollectionViewLayoutInvalidationContext  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UICollectionViewLayoutInvalidationContext  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UICollectionViewLayoutInvalidationContext  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UICollectionViewLayoutInvalidationContext  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UICollectionViewLayoutInvalidationContext  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UICollectionViewLayoutInvalidationContext  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UICollectionViewLayoutInvalidationContext *(^)(id value,NSString *key))set_ValueKey;


@end