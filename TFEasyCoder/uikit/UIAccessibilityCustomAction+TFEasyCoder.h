//
//  UIAccessibilityCustomAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIAccessibilityCustomAction,UIAccessibilityCustomAction *);

@interface UIAccessibilityCustomAction (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAccessibilityCustomAction, UIAccessibilityCustomAction *);
TF_EC_MINSTANCE_INT(UIAccessibilityCustomAction,UIAccessibilityCustomAction *);


TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,NSString *,name);
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,SEL,selector);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,long long,accessibilityNavigationStyle)





@end