//
//  NSNotification+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSNotification+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSNotification (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSNotification, NSNotification *);
TF_EC_MINSTANCE_IMP(NSNotification, NSNotification *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSNotification ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSNotification ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSNotification ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSNotification ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSNotification ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSNotification ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSNotification ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSNotification ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSNotification ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSNotification ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSNotification ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSNotification ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSNotification ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSNotification ,long long,accessibilityNavigationStyle)





@end