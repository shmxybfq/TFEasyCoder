//
//  UIImageAsset+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIImageAsset,UIImageAsset *);

@interface UIImageAsset (TFEasyCoder)

TF_EC_MSTATIC_INT(UIImageAsset, UIImageAsset *);
TF_EC_MINSTANCE_INT(UIImageAsset,UIImageAsset *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIImageAsset ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIImageAsset ,long long,accessibilityNavigationStyle)





@end