//
//  NSNetServiceBrowser+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSNetServiceBrowser,NSNetServiceBrowser *);

@interface NSNetServiceBrowser (TFEasyCoder)

TF_EC_MSTATIC_INT(NSNetServiceBrowser, NSNetServiceBrowser *);
TF_EC_MINSTANCE_INT(NSNetServiceBrowser,NSNetServiceBrowser *);


TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,id<NSNetServiceBrowserDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,BOOL,includesPeerToPeer);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSNetServiceBrowser);


@end