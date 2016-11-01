//
//  NSNotificationCenter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSNotificationCenter,NSNotificationCenter *);

@interface NSNotificationCenter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSNotificationCenter, NSNotificationCenter *);
TF_EC_MINSTANCE_INT(NSNotificationCenter,NSNotificationCenter *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSNotificationCenter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSNotificationCenter);


@end