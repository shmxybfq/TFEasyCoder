//
//  UIPinchGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPinchGestureRecognizer,UIPinchGestureRecognizer *);

@interface UIPinchGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPinchGestureRecognizer, UIPinchGestureRecognizer *);
TF_EC_MINSTANCE_INT(UIPinchGestureRecognizer,UIPinchGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,double,scale);





//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,BOOL,cancelsTouchesInView);
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,BOOL,delaysTouchesBegan);
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,BOOL,delaysTouchesEnded);
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,NSArray *,allowedTouchTypes);
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,NSArray *,allowedPressTypes);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPinchGestureRecognizer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIPinchGestureRecognizer);


@end