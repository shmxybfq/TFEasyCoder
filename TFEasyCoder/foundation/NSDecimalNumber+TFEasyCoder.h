//
//  NSDecimalNumber+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDecimalNumber,NSDecimalNumber *);

@interface NSDecimalNumber (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDecimalNumber, NSDecimalNumber *);
TF_EC_MINSTANCE_INT(NSDecimalNumber,NSDecimalNumber *);






//superclass pros NSNumber
//superclass pros NSValue
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSDecimalNumber ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSDecimalNumber);


@end