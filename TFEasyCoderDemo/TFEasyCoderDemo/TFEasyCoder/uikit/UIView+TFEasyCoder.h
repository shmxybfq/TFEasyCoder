//
//  UIView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIView,UIView *);

@interface UIView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIView, UIView *);
TF_EC_MINSTANCE_INT(UIView,UIView *);


TF_EC_CHAIN_PROP_INT(UIView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIView ,UIColor *,backgroundColor)



//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIView ,long long,accessibilityNavigationStyle)





@end