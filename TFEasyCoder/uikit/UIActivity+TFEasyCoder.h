//
//  UIActivity+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIActivity,UIActivity *);

@interface UIActivity (TFEasyCoder)

TF_EC_MSTATIC_INT(UIActivity, UIActivity *);
TF_EC_MINSTANCE_INT(UIActivity,UIActivity *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIActivity ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIActivity ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIActivity ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIActivity ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIActivity ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIActivity ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIActivity ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIActivity ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIActivity ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIActivity ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIActivity ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIActivity ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIActivity ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIActivity ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIActivity);


@end