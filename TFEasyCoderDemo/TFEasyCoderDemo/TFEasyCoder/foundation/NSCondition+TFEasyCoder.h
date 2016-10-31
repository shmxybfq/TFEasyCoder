//
//  NSCondition+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSCondition,NSCondition *);

@interface NSCondition (TFEasyCoder)

TF_EC_MSTATIC_INT(NSCondition, NSCondition *);
TF_EC_MINSTANCE_INT(NSCondition,NSCondition *);


TF_EC_CHAIN_PROP_INT(NSCondition ,NSString *,name);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSCondition ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSCondition ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSCondition ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSCondition ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSCondition ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSCondition ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSCondition ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSCondition ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSCondition ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSCondition ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSCondition ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSCondition ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSCondition ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSCondition ,long long,accessibilityNavigationStyle)





@end