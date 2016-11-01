//
//  NSHTTPCookie+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSHTTPCookie,NSHTTPCookie *);

@interface NSHTTPCookie (TFEasyCoder)

TF_EC_MSTATIC_INT(NSHTTPCookie, NSHTTPCookie *);
TF_EC_MINSTANCE_INT(NSHTTPCookie,NSHTTPCookie *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSHTTPCookie ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSHTTPCookie);


@end