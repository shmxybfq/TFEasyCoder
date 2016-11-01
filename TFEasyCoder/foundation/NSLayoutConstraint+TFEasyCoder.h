//
//  NSLayoutConstraint+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLayoutConstraint,NSLayoutConstraint *);

@interface NSLayoutConstraint (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLayoutConstraint, NSLayoutConstraint *);
TF_EC_MINSTANCE_INT(NSLayoutConstraint,NSLayoutConstraint *);

TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,float,priority)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,BOOL,shouldBeArchived)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,double,constant)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,BOOL,active)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,NSString *,identifier)




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSLayoutConstraint);


@end