//
//  UICollectionViewFocusUpdateContext+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionViewFocusUpdateContext+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionViewFocusUpdateContext (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionViewFocusUpdateContext, UICollectionViewFocusUpdateContext *);
TF_EC_MINSTANCE_IMP(UICollectionViewFocusUpdateContext, UICollectionViewFocusUpdateContext *);






//superclass pros UIFocusUpdateContext
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UICollectionViewFocusUpdateContext ,long long,accessibilityNavigationStyle)





@end