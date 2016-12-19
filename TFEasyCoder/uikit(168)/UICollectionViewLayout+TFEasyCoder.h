//
//  UICollectionViewLayout+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UICollectionViewLayout (TFEasyCoder)









//superclass pros NSObject
-(UICollectionViewLayout  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UICollectionViewLayout  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UICollectionViewLayout  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UICollectionViewLayout  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UICollectionViewLayout  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UICollectionViewLayout  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UICollectionViewLayout  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UICollectionViewLayout  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UICollectionViewLayout  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UICollectionViewLayout  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UICollectionViewLayout  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UICollectionViewLayout  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UICollectionViewLayout  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UICollectionViewLayout  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end