//
//  UIScreenMode+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIScreenMode,UIScreenMode *);

@interface UIScreenMode (TFEasyCoder)

TF_EC_MSTATIC_INT(UIScreenMode, UIScreenMode *);
TF_EC_MINSTANCE_INT(UIScreenMode,UIScreenMode *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIScreenMode ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIScreenMode ,long long,accessibilityNavigationStyle)





@end