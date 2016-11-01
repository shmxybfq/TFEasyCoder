//
//  NSUserActivity+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSUserActivity+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSUserActivity (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSUserActivity, NSUserActivity *);
TF_EC_MINSTANCE_IMP(NSUserActivity, NSUserActivity *);


TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSDictionary *,userInfo)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSSet *,requiredUserInfoKeys)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,needsSave)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSDate *,expirationDate)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSSet *,keywords)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,supportsContinuationStreams)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,id<NSUserActivityDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,eligibleForHandoff)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,eligibleForSearch)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,eligibleForPublicIndexing)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSUserActivity);


@end