//
//  UIColor+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIColor,UIColor *);

@interface UIColor (TFEasyCoder)

TF_EC_MSTATIC_INT(UIColor, UIColor *);
TF_EC_MINSTANCE_INT(UIColor,UIColor *);





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIColor ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIColor ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIColor ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIColor ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIColor ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIColor ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIColor ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIColor ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIColor ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIColor ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIColor ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIColor ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIColor ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIColor ,long long,accessibilityNavigationStyle)





@end