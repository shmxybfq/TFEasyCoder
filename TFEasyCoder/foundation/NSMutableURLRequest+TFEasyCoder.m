//
//  NSMutableURLRequest+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableURLRequest+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableURLRequest (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableURLRequest, NSMutableURLRequest *);
TF_EC_MINSTANCE_IMP(NSMutableURLRequest, NSMutableURLRequest *);


TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSString *,HTTPMethod)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSDictionary *,allHTTPHeaderFields)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSData *,HTTPBody)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSInputStream *,HTTPBodyStream)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,BOOL,HTTPShouldHandleCookies)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,BOOL,HTTPShouldUsePipelining)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,unsigned long long,cachePolicy)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,double,timeoutInterval)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,unsigned long long,networkServiceType)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,BOOL,allowsCellularAccess)




//superclass pros NSURLRequest
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSMutableURLRequest);


@end