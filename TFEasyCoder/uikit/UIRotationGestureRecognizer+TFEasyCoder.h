//
//  UIRotationGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIRotationGestureRecognizer,UIRotationGestureRecognizer *);

@interface UIRotationGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UIRotationGestureRecognizer, UIRotationGestureRecognizer *);
TF_EC_MINSTANCE_INT(UIRotationGestureRecognizer,UIRotationGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,double,rotation);




//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,BOOL,cancelsTouchesInView);
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,BOOL,delaysTouchesBegan);
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,BOOL,delaysTouchesEnded);
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,NSArray *,allowedTouchTypes);
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,NSArray *,allowedPressTypes);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIRotationGestureRecognizer);


@end