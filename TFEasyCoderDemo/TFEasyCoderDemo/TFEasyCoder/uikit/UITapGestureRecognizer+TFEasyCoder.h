//
//  UITapGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITapGestureRecognizer,UITapGestureRecognizer *);

@interface UITapGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UITapGestureRecognizer, UITapGestureRecognizer *);
TF_EC_MINSTANCE_INT(UITapGestureRecognizer,UITapGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,unsigned long long,numberOfTapsRequired);
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,unsigned long long,numberOfTouchesRequired);





//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,BOOL,cancelsTouchesInView);
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,BOOL,delaysTouchesBegan);
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,BOOL,delaysTouchesEnded);
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,NSArray *,allowedTouchTypes);
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,NSArray *,allowedPressTypes);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,long long,accessibilityNavigationStyle)





@end