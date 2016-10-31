//
//  UILongPressGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UILongPressGestureRecognizer,UILongPressGestureRecognizer *);

@interface UILongPressGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UILongPressGestureRecognizer, UILongPressGestureRecognizer *);
TF_EC_MINSTANCE_INT(UILongPressGestureRecognizer,UILongPressGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,unsigned long long,numberOfTapsRequired);
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,double,minimumPressDuration);
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,double,allowableMovement);





//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,BOOL,cancelsTouchesInView);
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,BOOL,delaysTouchesBegan);
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,BOOL,delaysTouchesEnded);
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,NSArray *,allowedTouchTypes);
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,NSArray *,allowedPressTypes);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,long long,accessibilityNavigationStyle)





@end