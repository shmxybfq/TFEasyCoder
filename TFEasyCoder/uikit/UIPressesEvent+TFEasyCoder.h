//
//  UIPressesEvent+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPressesEvent,UIPressesEvent *);

@interface UIPressesEvent (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPressesEvent, UIPressesEvent *);
TF_EC_MINSTANCE_INT(UIPressesEvent,UIPressesEvent *);






//superclass pros UIEvent
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPressesEvent ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIPressesEvent);


@end