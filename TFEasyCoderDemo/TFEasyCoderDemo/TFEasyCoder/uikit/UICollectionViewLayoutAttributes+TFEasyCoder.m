//
//  UICollectionViewLayoutAttributes+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionViewLayoutAttributes+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionViewLayoutAttributes (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionViewLayoutAttributes, UICollectionViewLayoutAttributes *);
TF_EC_MINSTANCE_IMP(UICollectionViewLayoutAttributes, UICollectionViewLayoutAttributes *);


TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,CGSize,size)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,CATransform3D,transform3D)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,CGAffineTransform,transform)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,double,alpha)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,long long,zIndex)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,BOOL,hidden)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,NSIndexPath *,indexPath)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutAttributes ,long long,accessibilityNavigationStyle)





@end