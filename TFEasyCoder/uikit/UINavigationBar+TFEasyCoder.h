//
//  UINavigationBar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UINavigationBar,UINavigationBar *);

@interface UINavigationBar (TFEasyCoder)

TF_EC_MSTATIC_INT(UINavigationBar, UINavigationBar *);
TF_EC_MINSTANCE_INT(UINavigationBar,UINavigationBar *);


TF_EC_CHAIN_PROP_INT(UINavigationBar ,long long,barStyle);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,id<UINavigationBarDelegate>,delegate);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,BOOL,translucent);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,NSArray *,items);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIColor *,tintColor);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIColor *,barTintColor);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIImage *,shadowImage);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,NSDictionary *,titleTextAttributes);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIImage *,backIndicatorImage);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIImage *,backIndicatorTransitionMaskImage);




//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,long long,tag)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UINavigationBar ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UINavigationBar ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UINavigationBar ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UINavigationBar);


@end
