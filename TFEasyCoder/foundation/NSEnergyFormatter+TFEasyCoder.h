//
//  NSEnergyFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSEnergyFormatter,NSEnergyFormatter *);

@interface NSEnergyFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSEnergyFormatter, NSEnergyFormatter *);
TF_EC_MINSTANCE_INT(NSEnergyFormatter,NSEnergyFormatter *);


TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,NSNumberFormatter *,numberFormatter);
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,long long,unitStyle);
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,BOOL,forFoodEnergyUse);




//superclass pros NSFormatter
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSEnergyFormatter);


@end