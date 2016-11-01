//
//  UILayoutGuide+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UILayoutGuide,UILayoutGuide *);

@interface UILayoutGuide (TFEasyCoder)

TF_EC_MSTATIC_INT(UILayoutGuide, UILayoutGuide *);
TF_EC_MINSTANCE_INT(UILayoutGuide,UILayoutGuide *);


TF_EC_CHAIN_PROP_INT(UILayoutGuide ,UIView *,owningView);
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,NSString *,identifier);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UILayoutGuide);


@end