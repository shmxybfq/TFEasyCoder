//
//  UIKeyCommand+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIKeyCommand,UIKeyCommand *);

@interface UIKeyCommand (TFEasyCoder)

TF_EC_MSTATIC_INT(UIKeyCommand, UIKeyCommand *);
TF_EC_MINSTANCE_INT(UIKeyCommand,UIKeyCommand *);


TF_EC_CHAIN_PROP_INT(UIKeyCommand ,NSString *,discoverabilityTitle);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIKeyCommand ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIKeyCommand);


@end