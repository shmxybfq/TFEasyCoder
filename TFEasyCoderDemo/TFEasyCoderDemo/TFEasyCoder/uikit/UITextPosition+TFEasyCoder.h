//
//  UITextPosition+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITextPosition,UITextPosition *);

@interface UITextPosition (TFEasyCoder)

TF_EC_MSTATIC_INT(UITextPosition, UITextPosition *);
TF_EC_MINSTANCE_INT(UITextPosition,UITextPosition *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITextPosition ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITextPosition ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITextPosition ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITextPosition ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITextPosition ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITextPosition ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITextPosition ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITextPosition ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITextPosition ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITextPosition ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITextPosition ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITextPosition ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITextPosition ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITextPosition ,long long,accessibilityNavigationStyle)





@end