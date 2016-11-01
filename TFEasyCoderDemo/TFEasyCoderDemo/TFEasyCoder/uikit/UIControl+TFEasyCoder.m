//
//  UIControl+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIControl+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIControl (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIControl, UIControl *);
TF_EC_MINSTANCE_IMP(UIControl, UIControl *);


TF_EC_CHAIN_PROP_IMP(UIControl ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIControl ,BOOL,selected)
TF_EC_CHAIN_PROP_IMP(UIControl ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UIControl ,long long,contentVerticalAlignment)
TF_EC_CHAIN_PROP_IMP(UIControl ,long long,contentHorizontalAlignment)




//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIControl ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIControl ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIControl ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIControl ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIControl ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIControl ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIControl ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIControl ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIControl ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIControl ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIControl ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIControl ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIControl ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIControl ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIControl ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIControl ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIControl ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIControl ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIControl ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIControl ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIControl ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIControl ,long long,accessibilityNavigationStyle)





@end
