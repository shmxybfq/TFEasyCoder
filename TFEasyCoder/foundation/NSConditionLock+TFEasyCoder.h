//
//  NSConditionLock+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSConditionLock,NSConditionLock *);

@interface NSConditionLock (TFEasyCoder)

TF_EC_MSTATIC_INT(NSConditionLock, NSConditionLock *);
TF_EC_MINSTANCE_INT(NSConditionLock,NSConditionLock *);


TF_EC_CHAIN_PROP_INT(NSConditionLock ,NSString *,name);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSConditionLock ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSConditionLock ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSConditionLock);


@end