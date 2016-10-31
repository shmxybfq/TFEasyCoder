//
//  NSShadow+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSShadow+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSShadow (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSShadow, NSShadow *);
TF_EC_MINSTANCE_IMP(NSShadow, NSShadow *);


TF_EC_CHAIN_PROP_IMP(NSShadow ,CGSize,shadowOffset)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSShadow ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSShadow ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSShadow ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSShadow ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSShadow ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSShadow ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSShadow ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSShadow ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSShadow ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSShadow ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSShadow ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSShadow ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSShadow ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSShadow ,long long,accessibilityNavigationStyle)





@end