//
//  UICollectionViewTransitionLayout+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UICollectionViewTransitionLayout (TFEasyCoder)





-(UICollectionViewTransitionLayout  *(^)(double  transitionProgress))set_transitionProgress;




//superclass pros UICollectionViewLayout
//superclass pros NSObject
-(UICollectionViewTransitionLayout  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UICollectionViewTransitionLayout  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UICollectionViewTransitionLayout  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UICollectionViewTransitionLayout  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UICollectionViewTransitionLayout  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UICollectionViewTransitionLayout  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UICollectionViewTransitionLayout  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UICollectionViewTransitionLayout  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UICollectionViewTransitionLayout  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UICollectionViewTransitionLayout  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UICollectionViewTransitionLayout  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UICollectionViewTransitionLayout  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UICollectionViewTransitionLayout  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UICollectionViewTransitionLayout  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end