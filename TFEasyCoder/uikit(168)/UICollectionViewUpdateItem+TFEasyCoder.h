//
//  UICollectionViewUpdateItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UICollectionViewUpdateItem (TFEasyCoder)








//superclass pros NSObject
-(UICollectionViewUpdateItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UICollectionViewUpdateItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UICollectionViewUpdateItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UICollectionViewUpdateItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UICollectionViewUpdateItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UICollectionViewUpdateItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UICollectionViewUpdateItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UICollectionViewUpdateItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UICollectionViewUpdateItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UICollectionViewUpdateItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UICollectionViewUpdateItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UICollectionViewUpdateItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UICollectionViewUpdateItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UICollectionViewUpdateItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end