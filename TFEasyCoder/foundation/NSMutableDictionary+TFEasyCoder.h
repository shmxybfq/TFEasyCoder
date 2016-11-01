//
//  NSMutableDictionary+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMutableDictionary,NSMutableDictionary *);

@interface NSMutableDictionary (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMutableDictionary, NSMutableDictionary *);
TF_EC_MINSTANCE_INT(NSMutableDictionary,NSMutableDictionary *);






//superclass pros NSDictionary
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMutableDictionary ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSMutableDictionary);


@end