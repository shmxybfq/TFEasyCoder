//
//  UITextRange+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITextRange,UITextRange *);

@interface UITextRange (TFEasyCoder)

TF_EC_MSTATIC_INT(UITextRange, UITextRange *);
TF_EC_MINSTANCE_INT(UITextRange,UITextRange *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITextRange ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITextRange ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITextRange ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITextRange ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITextRange ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITextRange ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITextRange ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITextRange ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITextRange ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITextRange ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITextRange ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITextRange ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITextRange ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITextRange ,long long,accessibilityNavigationStyle)





@end