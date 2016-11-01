//
//  UILexicon+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UILexicon,UILexicon *);

@interface UILexicon (TFEasyCoder)

TF_EC_MSTATIC_INT(UILexicon, UILexicon *);
TF_EC_MINSTANCE_INT(UILexicon,UILexicon *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UILexicon ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UILexicon ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UILexicon ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UILexicon ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UILexicon ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UILexicon ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UILexicon ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UILexicon ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UILexicon ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UILexicon ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UILexicon ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UILexicon ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UILexicon ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UILexicon ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UILexicon);


@end