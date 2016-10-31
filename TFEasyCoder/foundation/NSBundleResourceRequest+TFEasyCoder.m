//
//  NSBundleResourceRequest+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSBundleResourceRequest+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSBundleResourceRequest (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSBundleResourceRequest, NSBundleResourceRequest *);
TF_EC_MINSTANCE_IMP(NSBundleResourceRequest, NSBundleResourceRequest *);


TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,double,loadingPriority)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSBundleResourceRequest ,long long,accessibilityNavigationStyle)





@end