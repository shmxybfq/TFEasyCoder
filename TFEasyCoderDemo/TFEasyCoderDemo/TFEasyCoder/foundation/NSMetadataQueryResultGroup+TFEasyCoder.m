//
//  NSMetadataQueryResultGroup+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMetadataQueryResultGroup+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMetadataQueryResultGroup (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMetadataQueryResultGroup, NSMetadataQueryResultGroup *);
TF_EC_MINSTANCE_IMP(NSMetadataQueryResultGroup, NSMetadataQueryResultGroup *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMetadataQueryResultGroup ,long long,accessibilityNavigationStyle)





@end