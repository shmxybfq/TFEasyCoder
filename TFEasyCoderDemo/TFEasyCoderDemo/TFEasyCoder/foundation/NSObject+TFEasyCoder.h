//
//  NSObject+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSObject,NSObject *);

@interface NSObject (TFEasyCoder)

TF_EC_MSTATIC_INT(NSObject, NSObject *);
TF_EC_MINSTANCE_INT(NSObject,NSObject *);

TF_EC_CHAIN_PROP_INT(NSObject ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSObject ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSObject ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSObject ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSObject ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSObject ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSObject ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSObject ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSObject ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSObject ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSObject ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSObject ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSObject ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSObject ,long long,accessibilityNavigationStyle)



@end