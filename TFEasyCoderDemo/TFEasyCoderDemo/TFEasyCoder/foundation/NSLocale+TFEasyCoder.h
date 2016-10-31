//
//  NSLocale+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLocale,NSLocale *);

@interface NSLocale (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLocale, NSLocale *);
TF_EC_MINSTANCE_INT(NSLocale,NSLocale *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSLocale ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSLocale ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSLocale ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSLocale ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSLocale ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSLocale ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSLocale ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSLocale ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSLocale ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSLocale ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSLocale ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSLocale ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSLocale ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSLocale ,long long,accessibilityNavigationStyle)





@end