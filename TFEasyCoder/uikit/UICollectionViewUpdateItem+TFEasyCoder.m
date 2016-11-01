//
//  UICollectionViewUpdateItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionViewUpdateItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionViewUpdateItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionViewUpdateItem, UICollectionViewUpdateItem *);
TF_EC_MINSTANCE_IMP(UICollectionViewUpdateItem, UICollectionViewUpdateItem *);





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UICollectionViewUpdateItem ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UICollectionViewUpdateItem);


@end