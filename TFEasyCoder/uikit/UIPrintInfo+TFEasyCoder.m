//
//  UIPrintInfo+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPrintInfo+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPrintInfo (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPrintInfo, UIPrintInfo *);
TF_EC_MINSTANCE_IMP(UIPrintInfo, UIPrintInfo *);


TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,NSString *,printerID)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,NSString *,jobName)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,long long,outputType)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,long long,orientation)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,long long,duplex)





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIPrintInfo);


@end