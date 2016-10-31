//
//  UIResponder+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIResponder,UIResponder *);

@interface UIResponder (TFEasyCoder)

TF_EC_MSTATIC_INT(UIResponder, UIResponder *);
TF_EC_MINSTANCE_INT(UIResponder,UIResponder *);


TF_EC_CHAIN_PROP_INT(UIResponder ,NSUserActivity *,userActivity);





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIResponder ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIResponder ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIResponder ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIResponder ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIResponder ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIResponder ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIResponder ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIResponder ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIResponder ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIResponder ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIResponder ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIResponder ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIResponder ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIResponder ,long long,accessibilityNavigationStyle)





@end