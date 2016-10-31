//
//  UIFont+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIFont,UIFont *);

@interface UIFont (TFEasyCoder)

TF_EC_MSTATIC_INT(UIFont, UIFont *);
TF_EC_MINSTANCE_INT(UIFont,UIFont *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIFont ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIFont ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIFont ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIFont ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIFont ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIFont ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIFont ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIFont ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIFont ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIFont ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIFont ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIFont ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIFont ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIFont ,long long,accessibilityNavigationStyle)





@end