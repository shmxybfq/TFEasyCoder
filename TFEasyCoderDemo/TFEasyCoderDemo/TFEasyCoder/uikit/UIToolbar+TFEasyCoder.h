//
//  UIToolbar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIToolbar,UIToolbar *);

@interface UIToolbar (TFEasyCoder)

TF_EC_MSTATIC_INT(UIToolbar, UIToolbar *);
TF_EC_MINSTANCE_INT(UIToolbar,UIToolbar *);


TF_EC_CHAIN_PROP_INT(UIToolbar ,long long,barStyle);
TF_EC_CHAIN_PROP_INT(UIToolbar ,NSArray *,items);
TF_EC_CHAIN_PROP_INT(UIToolbar ,BOOL,translucent);
TF_EC_CHAIN_PROP_INT(UIToolbar ,UIColor *,tintColor);
TF_EC_CHAIN_PROP_INT(UIToolbar ,UIColor *,barTintColor);
TF_EC_CHAIN_PROP_INT(UIToolbar ,id<UIToolbarDelegate> ,delegate);





//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIToolbar ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIToolbar ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIToolbar ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIToolbar ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIToolbar ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIToolbar ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIToolbar ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIToolbar ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIToolbar ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIToolbar ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIToolbar ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIToolbar ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIToolbar ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIToolbar ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIToolbar ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIToolbar ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIToolbar ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIToolbar ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIToolbar ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIToolbar ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIToolbar ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIToolbar ,long long,accessibilityNavigationStyle)





@end
