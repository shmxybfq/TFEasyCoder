//
//  NSURLProtectionSpace+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLProtectionSpace,NSURLProtectionSpace *);

@interface NSURLProtectionSpace (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLProtectionSpace, NSURLProtectionSpace *);
TF_EC_MINSTANCE_INT(NSURLProtectionSpace,NSURLProtectionSpace *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLProtectionSpace ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSURLProtectionSpace);


@end