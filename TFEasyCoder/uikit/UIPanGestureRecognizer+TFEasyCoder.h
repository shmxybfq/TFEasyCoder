//
//  UIPanGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPanGestureRecognizer,UIPanGestureRecognizer *);

@interface UIPanGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPanGestureRecognizer, UIPanGestureRecognizer *);
TF_EC_MINSTANCE_INT(UIPanGestureRecognizer,UIPanGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,unsigned long long,minimumNumberOfTouches);
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,unsigned long long,maximumNumberOfTouches);




//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,BOOL,cancelsTouchesInView);
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,BOOL,delaysTouchesBegan);
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,BOOL,delaysTouchesEnded);
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,NSArray *,allowedTouchTypes);
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,NSArray *,allowedPressTypes);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPanGestureRecognizer ,long long,accessibilityNavigationStyle)





@end