//
//  UIFocusGuide+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIFocusGuide,UIFocusGuide *);

@interface UIFocusGuide (TFEasyCoder)

TF_EC_MSTATIC_INT(UIFocusGuide, UIFocusGuide *);
TF_EC_MINSTANCE_INT(UIFocusGuide,UIFocusGuide *);


TF_EC_CHAIN_PROP_INT(UIFocusGuide ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,UIView *,preferredFocusedView);




//superclass pros UILayoutGuide
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,UIView *,owningView);
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,NSString *,identifier);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,long long,accessibilityNavigationStyle)





@end