//
//  UICollectionViewLayoutAttributes+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UICollectionViewLayoutAttributes (TFEasyCoder)





-(UICollectionViewLayoutAttributes  *(^)(CGPoint  center))set_center;
-(UICollectionViewLayoutAttributes  *(^)(CGSize  size))set_size;
-(UICollectionViewLayoutAttributes  *(^)(CATransform3D  transform3D))set_transform3D;
-(UICollectionViewLayoutAttributes  *(^)(CGAffineTransform  transform))set_transform;
-(UICollectionViewLayoutAttributes  *(^)(double  alpha))set_alpha;
-(UICollectionViewLayoutAttributes  *(^)(long long  zIndex))set_zIndex;
-(UICollectionViewLayoutAttributes  *(^)(BOOL  hidden))set_hidden;
-(UICollectionViewLayoutAttributes  *(^)(NSIndexPath *  indexPath))set_indexPath;




//superclass pros NSObject
-(UICollectionViewLayoutAttributes  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UICollectionViewLayoutAttributes  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UICollectionViewLayoutAttributes  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UICollectionViewLayoutAttributes  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UICollectionViewLayoutAttributes  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UICollectionViewLayoutAttributes  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UICollectionViewLayoutAttributes  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UICollectionViewLayoutAttributes  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UICollectionViewLayoutAttributes  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UICollectionViewLayoutAttributes  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UICollectionViewLayoutAttributes  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UICollectionViewLayoutAttributes  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UICollectionViewLayoutAttributes  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UICollectionViewLayoutAttributes  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end