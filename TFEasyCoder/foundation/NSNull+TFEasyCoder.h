//
//  NSNull+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSNull,NSNull *);

@interface NSNull (TFEasyCoder)

TF_EC_MSTATIC_INT(NSNull, NSNull *);
TF_EC_MINSTANCE_INT(NSNull,NSNull *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSNull ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSNull ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSNull ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSNull ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSNull ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSNull ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSNull ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSNull ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSNull ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSNull ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSNull ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSNull ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSNull ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSNull ,long long,accessibilityNavigationStyle)





@end