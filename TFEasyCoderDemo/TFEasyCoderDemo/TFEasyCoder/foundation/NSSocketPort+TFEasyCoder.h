//
//  NSSocketPort+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSSocketPort,NSSocketPort *);

@interface NSSocketPort (TFEasyCoder)

TF_EC_MSTATIC_INT(NSSocketPort, NSSocketPort *);
TF_EC_MINSTANCE_INT(NSSocketPort,NSSocketPort *);






//superclass pros NSPort
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSSocketPort ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSSocketPort ,long long,accessibilityNavigationStyle)





@end