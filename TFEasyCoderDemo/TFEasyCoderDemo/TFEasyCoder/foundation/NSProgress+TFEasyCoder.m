//
//  NSProgress+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSProgress+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSProgress (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSProgress, NSProgress *);
TF_EC_MINSTANCE_IMP(NSProgress, NSProgress *);



TF_EC_CHAIN_PROP_IMP(NSProgress ,long long,totalUnitCount)
TF_EC_CHAIN_PROP_IMP(NSProgress ,long long,completedUnitCount)
TF_EC_CHAIN_PROP_IMP(NSProgress ,NSString *,localizedDescription)
TF_EC_CHAIN_PROP_IMP(NSProgress ,NSString *,localizedAdditionalDescription)
TF_EC_CHAIN_PROP_IMP(NSProgress ,BOOL,cancellable)
TF_EC_CHAIN_PROP_IMP(NSProgress ,BOOL,pausable)
TF_EC_CHAIN_PROP_IMP(NSProgress ,NSString *,kind)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSProgress ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSProgress ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSProgress ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSProgress ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSProgress ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSProgress ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSProgress ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSProgress ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSProgress ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSProgress ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSProgress ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSProgress ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSProgress ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSProgress ,long long,accessibilityNavigationStyle)





@end