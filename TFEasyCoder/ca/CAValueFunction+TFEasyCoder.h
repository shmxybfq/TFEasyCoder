//
//  CAValueFunction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAValueFunction,CAValueFunction *);

@interface CAValueFunction (TFEasyCoder)

TF_EC_MSTATIC_INT(CAValueFunction, CAValueFunction *);
TF_EC_MINSTANCE_INT(CAValueFunction,CAValueFunction *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAValueFunction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAValueFunction ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(CAValueFunction);


@end