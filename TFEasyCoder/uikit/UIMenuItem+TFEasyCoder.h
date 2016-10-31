//
//  UIMenuItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIMenuItem,UIMenuItem *);

@interface UIMenuItem (TFEasyCoder)

TF_EC_MSTATIC_INT(UIMenuItem, UIMenuItem *);
TF_EC_MINSTANCE_INT(UIMenuItem,UIMenuItem *);


TF_EC_CHAIN_PROP_INT(UIMenuItem ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UIMenuItem ,SEL,action);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIMenuItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIMenuItem ,long long,accessibilityNavigationStyle)





@end