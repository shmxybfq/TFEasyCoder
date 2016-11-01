//
//  UIVisualEffectView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIVisualEffectView,UIVisualEffectView *);

@interface UIVisualEffectView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIVisualEffectView, UIVisualEffectView *);
TF_EC_MINSTANCE_INT(UIVisualEffectView,UIVisualEffectView *);


TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,UIVisualEffect *,effect);





//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIVisualEffectView ,long long,accessibilityNavigationStyle)





@end
