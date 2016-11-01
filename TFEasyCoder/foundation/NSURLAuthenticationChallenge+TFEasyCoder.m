//
//  NSURLAuthenticationChallenge+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLAuthenticationChallenge+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLAuthenticationChallenge (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLAuthenticationChallenge, NSURLAuthenticationChallenge *);
TF_EC_MINSTANCE_IMP(NSURLAuthenticationChallenge, NSURLAuthenticationChallenge *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLAuthenticationChallenge ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSURLAuthenticationChallenge);


@end