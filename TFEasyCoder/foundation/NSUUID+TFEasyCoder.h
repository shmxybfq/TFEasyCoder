//
//  NSUUID+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSUUID,NSUUID *);

@interface NSUUID (TFEasyCoder)

TF_EC_MSTATIC_INT(NSUUID, NSUUID *);
TF_EC_MINSTANCE_INT(NSUUID,NSUUID *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSUUID ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSUUID ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSUUID ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSUUID ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSUUID ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSUUID ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSUUID ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSUUID ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSUUID ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSUUID ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSUUID ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSUUID ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSUUID ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSUUID ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSUUID);


@end