//
//  NSJSONSerialization+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSJSONSerialization,NSJSONSerialization *);

@interface NSJSONSerialization (TFEasyCoder)

TF_EC_MSTATIC_INT(NSJSONSerialization, NSJSONSerialization *);
TF_EC_MINSTANCE_INT(NSJSONSerialization,NSJSONSerialization *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSJSONSerialization ,long long,accessibilityNavigationStyle)





@end