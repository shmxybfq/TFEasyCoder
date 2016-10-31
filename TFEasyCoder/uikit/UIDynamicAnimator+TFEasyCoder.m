//
//  UIDynamicAnimator+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDynamicAnimator+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDynamicAnimator (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDynamicAnimator, UIDynamicAnimator *);
TF_EC_MINSTANCE_IMP(UIDynamicAnimator, UIDynamicAnimator *);


TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,id<UIDynamicAnimatorDelegate>  ,delegate)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,long long,accessibilityNavigationStyle)





@end