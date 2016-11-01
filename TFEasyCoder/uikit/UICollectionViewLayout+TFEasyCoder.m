//
//  UICollectionViewLayout+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionViewLayout+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionViewLayout (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionViewLayout, UICollectionViewLayout *);
TF_EC_MINSTANCE_IMP(UICollectionViewLayout, UICollectionViewLayout *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayout ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UICollectionViewLayout);


@end