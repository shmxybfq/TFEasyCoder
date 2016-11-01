//
//  NSInvocation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSInvocation,NSInvocation *);

@interface NSInvocation (TFEasyCoder)

TF_EC_MSTATIC_INT(NSInvocation, NSInvocation *);
TF_EC_MINSTANCE_INT(NSInvocation,NSInvocation *);


TF_EC_CHAIN_PROP_INT(NSInvocation ,SEL,selector);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSInvocation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSInvocation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSInvocation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSInvocation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSInvocation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSInvocation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSInvocation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSInvocation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSInvocation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSInvocation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSInvocation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSInvocation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSInvocation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSInvocation ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSInvocation);


@end