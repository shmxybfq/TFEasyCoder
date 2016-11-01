//
//  UIPreviewAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPreviewAction,UIPreviewAction *);

@interface UIPreviewAction (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPreviewAction, UIPreviewAction *);
TF_EC_MINSTANCE_INT(UIPreviewAction,UIPreviewAction *);







//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPreviewAction ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIPreviewAction);


@end