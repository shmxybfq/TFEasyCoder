//
//  NSError+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSError,NSError *);

@interface NSError (TFEasyCoder)

TF_EC_MSTATIC_INT(NSError, NSError *);
TF_EC_MINSTANCE_INT(NSError,NSError *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSError ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSError ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSError ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSError ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSError ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSError ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSError ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSError ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSError ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSError ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSError ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSError ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSError ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSError ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSError);


@end