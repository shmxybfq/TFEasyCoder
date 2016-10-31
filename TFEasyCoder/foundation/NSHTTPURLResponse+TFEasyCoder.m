//
//  NSHTTPURLResponse+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSHTTPURLResponse+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSHTTPURLResponse (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSHTTPURLResponse, NSHTTPURLResponse *);
TF_EC_MINSTANCE_IMP(NSHTTPURLResponse, NSHTTPURLResponse *);






//superclass pros NSURLResponse
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSHTTPURLResponse ,long long,accessibilityNavigationStyle)





@end