//
//  UIAcceleration+TFEasyCoder.h
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


TF_EC_BLOCK(UIAcceleration,UIAcceleration *);

@interface UIAcceleration (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAcceleration, UIAcceleration *);
TF_EC_MINSTANCE_INT(UIAcceleration,UIAcceleration *);


//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIAcceleration ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIAcceleration ,long long,accessibilityNavigationStyle)




@end
