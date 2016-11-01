//
//  NSString+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSString,NSString *);

@interface NSString (TFEasyCoder)

TF_EC_MSTATIC_INT(NSString, NSString *);
TF_EC_MINSTANCE_INT(NSString,NSString *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSString ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSString ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSString ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSString ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSString ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSString ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSString ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSString ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSString ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSString ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSString ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSString ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSString ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSString ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSString);


@end