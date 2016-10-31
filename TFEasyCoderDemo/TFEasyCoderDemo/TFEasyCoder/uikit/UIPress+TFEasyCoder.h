//
//  UIPress+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPress,UIPress *);

@interface UIPress (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPress, UIPress *);
TF_EC_MINSTANCE_INT(UIPress,UIPress *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPress ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPress ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPress ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPress ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPress ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPress ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPress ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPress ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPress ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPress ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPress ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPress ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPress ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPress ,long long,accessibilityNavigationStyle)





@end