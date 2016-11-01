//
//  NSMutableString+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMutableString,NSMutableString *);

@interface NSMutableString (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMutableString, NSMutableString *);
TF_EC_MINSTANCE_INT(NSMutableString,NSMutableString *);






//superclass pros NSString
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMutableString ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMutableString ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMutableString ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMutableString ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMutableString ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMutableString ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMutableString ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMutableString ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMutableString ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMutableString ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMutableString ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMutableString ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMutableString ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMutableString ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSMutableString);


@end