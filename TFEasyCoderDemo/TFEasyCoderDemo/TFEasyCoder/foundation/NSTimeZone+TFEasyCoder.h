//
//  NSTimeZone+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSTimeZone,NSTimeZone *);

@interface NSTimeZone (TFEasyCoder)

TF_EC_MSTATIC_INT(NSTimeZone, NSTimeZone *);
TF_EC_MINSTANCE_INT(NSTimeZone,NSTimeZone *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSTimeZone ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSTimeZone ,long long,accessibilityNavigationStyle)





@end