//
//  UIStoryboardSegue+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIStoryboardSegue,UIStoryboardSegue *);

@interface UIStoryboardSegue (TFEasyCoder)

TF_EC_MSTATIC_INT(UIStoryboardSegue, UIStoryboardSegue *);
TF_EC_MINSTANCE_INT(UIStoryboardSegue,UIStoryboardSegue *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIStoryboardSegue ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIStoryboardSegue);


@end