//
//  NSMachPort+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMachPort,NSMachPort *);

@interface NSMachPort (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMachPort, NSMachPort *);
//TF_EC_MINSTANCE_INT(NSMachPort,NSMachPort *);






//superclass pros NSPort
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMachPort ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMachPort ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMachPort ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMachPort ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMachPort ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMachPort ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMachPort ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMachPort ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMachPort ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMachPort ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMachPort ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMachPort ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMachPort ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMachPort ,long long,accessibilityNavigationStyle)





@end