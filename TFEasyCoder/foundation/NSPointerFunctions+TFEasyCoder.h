//
//  NSPointerFunctions+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSPointerFunctions,NSPointerFunctions *);

@interface NSPointerFunctions (TFEasyCoder)

TF_EC_MSTATIC_INT(NSPointerFunctions, NSPointerFunctions *);
TF_EC_MINSTANCE_INT(NSPointerFunctions,NSPointerFunctions *);


TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,BOOL,usesStrongWriteBarrier)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,BOOL,usesWeakReadAndWriteBarriers)





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSPointerFunctions ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSPointerFunctions);


@end