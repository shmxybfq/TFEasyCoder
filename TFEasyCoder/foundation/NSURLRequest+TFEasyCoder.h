//
//  NSURLRequest+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLRequest,NSURLRequest *);

@interface NSURLRequest (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLRequest, NSURLRequest *);
TF_EC_MINSTANCE_INT(NSURLRequest,NSURLRequest *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLRequest ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLRequest ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSURLRequest);


@end