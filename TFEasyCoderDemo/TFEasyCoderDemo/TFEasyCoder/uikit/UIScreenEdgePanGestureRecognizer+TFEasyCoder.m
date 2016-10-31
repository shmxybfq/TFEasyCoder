//
//  UIScreenEdgePanGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIScreenEdgePanGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIScreenEdgePanGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIScreenEdgePanGestureRecognizer, UIScreenEdgePanGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UIScreenEdgePanGestureRecognizer, UIScreenEdgePanGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,unsigned long long,edges)




//superclass pros UIPanGestureRecognizer
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,unsigned long long,minimumNumberOfTouches)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,unsigned long long,maximumNumberOfTouches)
//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,BOOL,cancelsTouchesInView)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,BOOL,delaysTouchesBegan)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,BOOL,delaysTouchesEnded)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,NSArray *,allowedTouchTypes)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,NSArray *,allowedPressTypes)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,long long,accessibilityNavigationStyle)





@end