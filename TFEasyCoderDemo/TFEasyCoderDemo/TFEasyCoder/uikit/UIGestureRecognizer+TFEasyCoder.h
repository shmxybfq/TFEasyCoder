//
//  UIGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIGestureRecognizer,UIGestureRecognizer *);

@interface UIGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UIGestureRecognizer, UIGestureRecognizer *);
TF_EC_MINSTANCE_INT(UIGestureRecognizer,UIGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,BOOL,cancelsTouchesInView);
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,BOOL,delaysTouchesBegan);
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,BOOL,delaysTouchesEnded);
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,NSArray *,allowedTouchTypes);
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,NSArray *,allowedPressTypes);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,long long,accessibilityNavigationStyle)





@end