//
//  NSURLConnection+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLConnection+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLConnection (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLConnection, NSURLConnection *);
TF_EC_MINSTANCE_IMP(NSURLConnection, NSURLConnection *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLConnection ,long long,accessibilityNavigationStyle)





@end