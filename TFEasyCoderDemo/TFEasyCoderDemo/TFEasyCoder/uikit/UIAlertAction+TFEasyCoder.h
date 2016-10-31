//
//  UIAlertAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIAlertAction,UIAlertAction *);

@interface UIAlertAction (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAlertAction, UIAlertAction *);
TF_EC_MINSTANCE_INT(UIAlertAction,UIAlertAction *);

TF_EC_CHAIN_PROP_INT(UIAlertAction ,BOOL,enabled);





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIAlertAction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIAlertAction ,long long,accessibilityNavigationStyle)





@end