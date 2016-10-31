//
//  UIFieldBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIFieldBehavior,UIFieldBehavior *);

@interface UIFieldBehavior (TFEasyCoder)

TF_EC_MSTATIC_INT(UIFieldBehavior, UIFieldBehavior *);
TF_EC_MINSTANCE_INT(UIFieldBehavior,UIFieldBehavior *);


TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,CGPoint,position);
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,double,strength);
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,double,falloff);
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,double,minimumRadius);
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,CGVector,direction);
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,double,smoothness);
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,double,animationSpeed);




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,long long,accessibilityNavigationStyle)





@end