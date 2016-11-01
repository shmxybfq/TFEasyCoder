//
//  NSNetServiceBrowser+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSNetServiceBrowser+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSNetServiceBrowser (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSNetServiceBrowser, NSNetServiceBrowser *);
TF_EC_MINSTANCE_IMP(NSNetServiceBrowser, NSNetServiceBrowser *);


TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,id<NSNetServiceBrowserDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,BOOL,includesPeerToPeer)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSNetServiceBrowser);


@end