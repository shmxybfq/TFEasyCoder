//
//  UITouch+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITouch,UITouch *);

@interface UITouch (TFEasyCoder)

TF_EC_MSTATIC_INT(UITouch, UITouch *);
TF_EC_MINSTANCE_INT(UITouch,UITouch *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITouch ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITouch ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITouch ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITouch ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITouch ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITouch ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITouch ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITouch ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITouch ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITouch ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITouch ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITouch ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITouch ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITouch ,long long,accessibilityNavigationStyle)





@end