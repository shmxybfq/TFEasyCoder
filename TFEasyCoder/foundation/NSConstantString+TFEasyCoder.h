//
//  NSConstantString+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSConstantString,NSConstantString *);

@interface NSConstantString (TFEasyCoder)

TF_EC_MSTATIC_INT(NSConstantString, NSConstantString *);
TF_EC_MINSTANCE_INT(NSConstantString,NSConstantString *);






//superclass pros NSSimpleCString
//superclass pros NSString
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSConstantString ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSConstantString ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSConstantString ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSConstantString ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSConstantString ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSConstantString ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSConstantString ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSConstantString ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSConstantString ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSConstantString ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSConstantString ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSConstantString ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSConstantString ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSConstantString ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSConstantString);


@end