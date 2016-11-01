//
//  NSMetadataItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMetadataItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMetadataItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMetadataItem, NSMetadataItem *);
TF_EC_MINSTANCE_IMP(NSMetadataItem, NSMetadataItem *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMetadataItem ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSMetadataItem);


@end