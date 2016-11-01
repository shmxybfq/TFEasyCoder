//
//  NSUbiquitousKeyValueStore+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSUbiquitousKeyValueStore,NSUbiquitousKeyValueStore *);

@interface NSUbiquitousKeyValueStore (TFEasyCoder)

TF_EC_MSTATIC_INT(NSUbiquitousKeyValueStore, NSUbiquitousKeyValueStore *);
TF_EC_MINSTANCE_INT(NSUbiquitousKeyValueStore,NSUbiquitousKeyValueStore *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSUbiquitousKeyValueStore ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSUbiquitousKeyValueStore);


@end