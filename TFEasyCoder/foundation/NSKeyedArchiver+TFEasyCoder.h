//
//  NSKeyedArchiver+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSKeyedArchiver,NSKeyedArchiver *);

@interface NSKeyedArchiver (TFEasyCoder)

TF_EC_MSTATIC_INT(NSKeyedArchiver, NSKeyedArchiver *);
TF_EC_MINSTANCE_INT(NSKeyedArchiver,NSKeyedArchiver *);


TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,id<NSKeyedArchiverDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,unsigned long long,outputFormat);
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,BOOL,requiresSecureCoding);




//superclass pros NSCoder
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSKeyedArchiver);


@end