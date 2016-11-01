//
//  NSValue+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSValue,NSValue *);

@interface NSValue (TFEasyCoder)

TF_EC_MSTATIC_INT(NSValue, NSValue *);
TF_EC_MINSTANCE_INT(NSValue,NSValue *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSValue ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSValue ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSValue ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSValue ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSValue ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSValue ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSValue ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSValue ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSValue ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSValue ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSValue ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSValue ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSValue ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSValue ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSValue);


@end