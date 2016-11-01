//
//  UICollectionViewFlowLayout+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionViewFlowLayout+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionViewFlowLayout (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionViewFlowLayout, UICollectionViewFlowLayout *);
TF_EC_MINSTANCE_IMP(UICollectionViewFlowLayout, UICollectionViewFlowLayout *);


TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,double,minimumLineSpacing)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,double,minimumInteritemSpacing)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,CGSize,itemSize)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,CGSize,estimatedItemSize)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,long long,scrollDirection)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,UIEdgeInsets,sectionInset)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,BOOL,sectionHeadersPinToVisibleBounds)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,BOOL,sectionFootersPinToVisibleBounds)




//superclass pros UICollectionViewLayout
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFlowLayout ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UICollectionViewFlowLayout);


@end