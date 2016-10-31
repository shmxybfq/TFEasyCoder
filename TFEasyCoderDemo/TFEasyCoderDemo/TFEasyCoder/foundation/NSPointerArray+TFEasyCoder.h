//
//  NSPointerArray+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSPointerArray,NSPointerArray *);

@interface NSPointerArray (TFEasyCoder)

TF_EC_MSTATIC_INT(NSPointerArray, NSPointerArray *);
TF_EC_MINSTANCE_INT(NSPointerArray,NSPointerArray *);


TF_EC_CHAIN_PROP_INT(NSPointerArray ,unsigned long long,count);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSPointerArray ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSPointerArray ,long long,accessibilityNavigationStyle)





@end