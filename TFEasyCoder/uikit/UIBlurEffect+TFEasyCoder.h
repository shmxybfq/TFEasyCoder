//
//  UIBlurEffect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIBlurEffect,UIBlurEffect *);

@interface UIBlurEffect (TFEasyCoder)

TF_EC_MSTATIC_INT(UIBlurEffect, UIBlurEffect *);
TF_EC_MINSTANCE_INT(UIBlurEffect,UIBlurEffect *);






//superclass pros UIVisualEffect
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIBlurEffect ,long long,accessibilityNavigationStyle)





@end