//
//  UITextInputMode+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITextInputMode,UITextInputMode *);

@interface UITextInputMode (TFEasyCoder)

TF_EC_MSTATIC_INT(UITextInputMode, UITextInputMode *);
TF_EC_MINSTANCE_INT(UITextInputMode,UITextInputMode *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITextInputMode ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITextInputMode ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UITextInputMode);


@end