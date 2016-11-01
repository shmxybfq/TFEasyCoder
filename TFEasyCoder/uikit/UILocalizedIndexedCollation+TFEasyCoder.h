//
//  UILocalizedIndexedCollation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UILocalizedIndexedCollation,UILocalizedIndexedCollation *);

@interface UILocalizedIndexedCollation (TFEasyCoder)

TF_EC_MSTATIC_INT(UILocalizedIndexedCollation, UILocalizedIndexedCollation *);
TF_EC_MINSTANCE_INT(UILocalizedIndexedCollation,UILocalizedIndexedCollation *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UILocalizedIndexedCollation ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UILocalizedIndexedCollation);


@end