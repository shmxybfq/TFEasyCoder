//
//  NSPort+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSPort,NSPort *);

@interface NSPort (TFEasyCoder)

TF_EC_MSTATIC_INT(NSPort, NSPort *);
TF_EC_MINSTANCE_INT(NSPort,NSPort *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSPort ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSPort ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSPort ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSPort ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSPort ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSPort ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSPort ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSPort ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSPort ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSPort ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSPort ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSPort ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSPort ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSPort ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSPort);


@end