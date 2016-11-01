//
//  NSDataAsset+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDataAsset,NSDataAsset *);

@interface NSDataAsset (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDataAsset, NSDataAsset *);
TF_EC_MINSTANCE_INT(NSDataAsset,NSDataAsset *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSDataAsset ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSDataAsset ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSDataAsset);


@end