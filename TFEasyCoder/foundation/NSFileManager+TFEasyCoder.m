//
//  NSFileManager+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSFileManager+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSFileManager (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSFileManager, NSFileManager *);
TF_EC_MINSTANCE_IMP(NSFileManager, NSFileManager *);


TF_EC_CHAIN_PROP_IMP(NSFileManager ,id<NSFileManagerDelegate>  ,delegate)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSFileManager ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSFileManager ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSFileManager);


@end