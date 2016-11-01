//
//  NSFileAccessIntent+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSFileAccessIntent,NSFileAccessIntent *);

@interface NSFileAccessIntent (TFEasyCoder)

TF_EC_MSTATIC_INT(NSFileAccessIntent, NSFileAccessIntent *);
TF_EC_MINSTANCE_INT(NSFileAccessIntent,NSFileAccessIntent *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSFileAccessIntent ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSFileAccessIntent);


@end