//
//  UITextSelectionRect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITextSelectionRect,UITextSelectionRect *);

@interface UITextSelectionRect (TFEasyCoder)

TF_EC_MSTATIC_INT(UITextSelectionRect, UITextSelectionRect *);
TF_EC_MINSTANCE_INT(UITextSelectionRect,UITextSelectionRect *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITextSelectionRect ,long long,accessibilityNavigationStyle)





@end