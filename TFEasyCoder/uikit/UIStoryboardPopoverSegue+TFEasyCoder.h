//
//  UIStoryboardPopoverSegue+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_BLOCK(UIStoryboardPopoverSegue,UIStoryboardPopoverSegue *);

@interface UIStoryboardPopoverSegue (TFEasyCoder)

TF_EC_MSTATIC_INT(UIStoryboardPopoverSegue, UIStoryboardPopoverSegue *);
TF_EC_MINSTANCE_INT(UIStoryboardPopoverSegue,UIStoryboardPopoverSegue *);






//superclass pros UIStoryboardSegue
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIStoryboardPopoverSegue ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIStoryboardPopoverSegue);


@end
