//
//  NSEnumerator+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSEnumerator+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSEnumerator (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSEnumerator, NSEnumerator *);
TF_EC_MINSTANCE_IMP(NSEnumerator, NSEnumerator *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSEnumerator ,long long,accessibilityNavigationStyle)





@end