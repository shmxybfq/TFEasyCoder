//
//  UIScreenEdgePanGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIScreenEdgePanGestureRecognizer,UIScreenEdgePanGestureRecognizer *);

@interface UIScreenEdgePanGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UIScreenEdgePanGestureRecognizer, UIScreenEdgePanGestureRecognizer *);
TF_EC_MINSTANCE_INT(UIScreenEdgePanGestureRecognizer,UIScreenEdgePanGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,unsigned long long,edges);




//superclass pros UIPanGestureRecognizer
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,unsigned long long,minimumNumberOfTouches);
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,unsigned long long,maximumNumberOfTouches);
//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,BOOL,cancelsTouchesInView);
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,BOOL,delaysTouchesBegan);
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,BOOL,delaysTouchesEnded);
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,NSArray *,allowedTouchTypes);
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,NSArray *,allowedPressTypes);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIScreenEdgePanGestureRecognizer);


@end