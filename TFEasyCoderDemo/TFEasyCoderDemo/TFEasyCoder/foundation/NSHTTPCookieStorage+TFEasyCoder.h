//
//  NSHTTPCookieStorage+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSHTTPCookieStorage,NSHTTPCookieStorage *);

@interface NSHTTPCookieStorage (TFEasyCoder)

TF_EC_MSTATIC_INT(NSHTTPCookieStorage, NSHTTPCookieStorage *);
TF_EC_MINSTANCE_INT(NSHTTPCookieStorage,NSHTTPCookieStorage *);


TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,unsigned long long,cookieAcceptPolicy);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSHTTPCookieStorage ,long long,accessibilityNavigationStyle)





@end