//
//  NSURLResponse+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLResponse+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLResponse (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLResponse, NSURLResponse *);
TF_EC_MINSTANCE_IMP(NSURLResponse, NSURLResponse *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLResponse ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSURLResponse);


@end