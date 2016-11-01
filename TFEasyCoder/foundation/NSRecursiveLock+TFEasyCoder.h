//
//  NSRecursiveLock+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSRecursiveLock,NSRecursiveLock *);

@interface NSRecursiveLock (TFEasyCoder)

TF_EC_MSTATIC_INT(NSRecursiveLock, NSRecursiveLock *);
TF_EC_MINSTANCE_INT(NSRecursiveLock,NSRecursiveLock *);


TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,NSString *,name);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSRecursiveLock ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSRecursiveLock);


@end