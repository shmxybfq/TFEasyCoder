//
//  NSKeyedUnarchiver+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSKeyedUnarchiver,NSKeyedUnarchiver *);

@interface NSKeyedUnarchiver (TFEasyCoder)

TF_EC_MSTATIC_INT(NSKeyedUnarchiver, NSKeyedUnarchiver *);
TF_EC_MINSTANCE_INT(NSKeyedUnarchiver,NSKeyedUnarchiver *);


TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,id<NSKeyedUnarchiverDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,BOOL,requiresSecureCoding);




//superclass pros NSCoder
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,long long,accessibilityNavigationStyle)





@end