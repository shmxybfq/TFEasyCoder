//
//  UIDevice+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDevice,UIDevice *);

@interface UIDevice (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDevice, UIDevice *);
TF_EC_MINSTANCE_INT(UIDevice,UIDevice *);


TF_EC_CHAIN_PROP_INT(UIDevice ,BOOL,batteryMonitoringEnabled);
TF_EC_CHAIN_PROP_INT(UIDevice ,BOOL,proximityMonitoringEnabled);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIDevice ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIDevice ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIDevice ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIDevice ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIDevice ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIDevice ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIDevice ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIDevice ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIDevice ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIDevice ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIDevice ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIDevice ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIDevice ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIDevice ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIDevice);


@end