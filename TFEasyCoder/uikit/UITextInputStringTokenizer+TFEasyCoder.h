//
//  UITextInputStringTokenizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITextInputStringTokenizer,UITextInputStringTokenizer *);

@interface UITextInputStringTokenizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UITextInputStringTokenizer, UITextInputStringTokenizer *);
TF_EC_MINSTANCE_INT(UITextInputStringTokenizer,UITextInputStringTokenizer *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITextInputStringTokenizer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UITextInputStringTokenizer);


@end