//
//  UICollectionViewTransitionLayout+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionViewTransitionLayout+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionViewTransitionLayout (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionViewTransitionLayout, UICollectionViewTransitionLayout *);
TF_EC_MINSTANCE_IMP(UICollectionViewTransitionLayout, UICollectionViewTransitionLayout *);


TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,double,transitionProgress)




//superclass pros UICollectionViewLayout
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UICollectionViewTransitionLayout ,long long,accessibilityNavigationStyle)





@end