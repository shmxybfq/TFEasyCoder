//
//  UISwipeGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISwipeGestureRecognizer,UISwipeGestureRecognizer *);

@interface UISwipeGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UISwipeGestureRecognizer, UISwipeGestureRecognizer *);
TF_EC_MINSTANCE_INT(UISwipeGestureRecognizer,UISwipeGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,unsigned long long,direction);





//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,BOOL,cancelsTouchesInView);
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,BOOL,delaysTouchesBegan);
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,BOOL,delaysTouchesEnded);
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,NSArray *,allowedTouchTypes);
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,NSArray *,allowedPressTypes);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UISwipeGestureRecognizer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UISwipeGestureRecognizer);


@end