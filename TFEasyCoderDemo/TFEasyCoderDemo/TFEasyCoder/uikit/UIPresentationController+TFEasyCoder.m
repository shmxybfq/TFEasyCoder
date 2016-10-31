//
//  UIPresentationController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPresentationController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPresentationController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPresentationController, UIPresentationController *);
TF_EC_MINSTANCE_IMP(UIPresentationController, UIPresentationController *);



TF_EC_CHAIN_PROP_IMP(UIPresentationController ,id<UIAdaptivePresentationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,UITraitCollection *,overrideTraitCollection)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,long long,accessibilityNavigationStyle)





@end