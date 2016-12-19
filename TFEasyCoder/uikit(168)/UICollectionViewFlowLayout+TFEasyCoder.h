//
//  UICollectionViewFlowLayout+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UICollectionViewFlowLayout (TFEasyCoder)





-(UICollectionViewFlowLayout  *(^)(double  minimumLineSpacing))set_minimumLineSpacing;
-(UICollectionViewFlowLayout  *(^)(double  minimumInteritemSpacing))set_minimumInteritemSpacing;
-(UICollectionViewFlowLayout  *(^)(CGSize  itemSize))set_itemSize;
-(UICollectionViewFlowLayout  *(^)(CGSize  estimatedItemSize))set_estimatedItemSize;
-(UICollectionViewFlowLayout  *(^)(long long  scrollDirection))set_scrollDirection;
-(UICollectionViewFlowLayout  *(^)(UIEdgeInsets  sectionInset))set_sectionInset;
-(UICollectionViewFlowLayout  *(^)(BOOL  sectionHeadersPinToVisibleBounds))set_sectionHeadersPinToVisibleBounds;
-(UICollectionViewFlowLayout  *(^)(BOOL  sectionFootersPinToVisibleBounds))set_sectionFootersPinToVisibleBounds;




//superclass pros UICollectionViewLayout
//superclass pros NSObject
-(UICollectionViewFlowLayout  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UICollectionViewFlowLayout  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UICollectionViewFlowLayout  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UICollectionViewFlowLayout  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UICollectionViewFlowLayout  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UICollectionViewFlowLayout  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UICollectionViewFlowLayout  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UICollectionViewFlowLayout  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UICollectionViewFlowLayout  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UICollectionViewFlowLayout  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UICollectionViewFlowLayout  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UICollectionViewFlowLayout  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UICollectionViewFlowLayout  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UICollectionViewFlowLayout  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end