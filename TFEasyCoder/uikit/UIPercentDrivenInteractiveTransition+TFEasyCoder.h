//
//  UIPercentDrivenInteractiveTransition+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPercentDrivenInteractiveTransition,UIPercentDrivenInteractiveTransition *);

@interface UIPercentDrivenInteractiveTransition (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPercentDrivenInteractiveTransition, UIPercentDrivenInteractiveTransition *);
TF_EC_MINSTANCE_INT(UIPercentDrivenInteractiveTransition,UIPercentDrivenInteractiveTransition *);


TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,double,completionSpeed);
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,long long,completionCurve);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIPercentDrivenInteractiveTransition);


@end