//
//  UIEvent+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIEvent,UIEvent *);

@interface UIEvent (TFEasyCoder)

TF_EC_MSTATIC_INT(UIEvent, UIEvent *);
TF_EC_MINSTANCE_INT(UIEvent,UIEvent *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIEvent ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIEvent ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIEvent ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIEvent ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIEvent ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIEvent ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIEvent ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIEvent ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIEvent ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIEvent ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIEvent ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIEvent ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIEvent ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIEvent ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIEvent);


@end