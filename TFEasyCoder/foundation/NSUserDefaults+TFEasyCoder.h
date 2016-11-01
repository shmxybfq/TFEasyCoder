//
//  NSUserDefaults+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSUserDefaults,NSUserDefaults *);

@interface NSUserDefaults (TFEasyCoder)

TF_EC_MSTATIC_INT(NSUserDefaults, NSUserDefaults *);
TF_EC_MINSTANCE_INT(NSUserDefaults,NSUserDefaults *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSUserDefaults ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSUserDefaults);


@end