//
//  NSArray+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSArray,NSArray *);

@interface NSArray (TFEasyCoder)

TF_EC_MSTATIC_INT(NSArray, NSArray *);
TF_EC_MINSTANCE_INT(NSArray,NSArray *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSArray ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSArray ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSArray ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSArray ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSArray ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSArray ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSArray ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSArray ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSArray ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSArray ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSArray ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSArray ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSArray ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSArray ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSArray);


@end