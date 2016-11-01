//
//  NSBundle+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSBundle,NSBundle *);

@interface NSBundle (TFEasyCoder)

TF_EC_MSTATIC_INT(NSBundle, NSBundle *);
TF_EC_MINSTANCE_INT(NSBundle,NSBundle *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSBundle ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSBundle ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSBundle ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSBundle ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSBundle ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSBundle ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSBundle ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSBundle ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSBundle ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSBundle ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSBundle ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSBundle ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSBundle ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSBundle ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSBundle);


@end