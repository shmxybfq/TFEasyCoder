//
//  NSDirectoryEnumerator+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSDirectoryEnumerator+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSDirectoryEnumerator (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSDirectoryEnumerator, NSDirectoryEnumerator *);
TF_EC_MINSTANCE_IMP(NSDirectoryEnumerator, NSDirectoryEnumerator *);






//superclass pros NSEnumerator
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSDirectoryEnumerator ,long long,accessibilityNavigationStyle)





@end