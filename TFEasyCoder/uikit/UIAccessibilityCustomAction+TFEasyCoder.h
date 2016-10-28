//
//  UIAccessibilityCustomAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIAccessibilityCustomAction,UIAccessibilityCustomAction *);

@interface UIAccessibilityCustomAction (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAccessibilityCustomAction, UIAccessibilityCustomAction *);
TF_EC_MINSTANCE_INT(UIAccessibilityCustomAction,UIAccessibilityCustomAction *);


TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,NSString *,name);
TF_EC_CHAIN_PROP_INT(UIAccessibilityCustomAction ,SEL,selector);

@end