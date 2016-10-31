//
//  UIDynamicItemGroup+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDynamicItemGroup+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDynamicItemGroup (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDynamicItemGroup, UIDynamicItemGroup *);
TF_EC_MINSTANCE_IMP(UIDynamicItemGroup, UIDynamicItemGroup *);


TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,CGAffineTransform,transform)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,long long,accessibilityNavigationStyle)





@end