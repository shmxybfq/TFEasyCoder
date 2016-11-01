//
//  UISwitch+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISwitch+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISwitch (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISwitch, UISwitch *);
TF_EC_MINSTANCE_IMP(UISwitch, UISwitch *);


TF_EC_CHAIN_PROP_IMP(UISwitch ,UIColor *,onTintColor)
TF_EC_CHAIN_PROP_IMP(UISwitch ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UISwitch ,UIColor *,thumbTintColor)
TF_EC_CHAIN_PROP_IMP(UISwitch ,UIImage *,onImage)
TF_EC_CHAIN_PROP_IMP(UISwitch ,UIImage *,offImage)
TF_EC_CHAIN_PROP_IMP(UISwitch ,BOOL,on)





//superclass pros UIControl
TF_EC_CHAIN_PROP_IMP(UISwitch ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UISwitch ,BOOL,selected)
TF_EC_CHAIN_PROP_IMP(UISwitch ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UISwitch ,long long,contentVerticalAlignment)
TF_EC_CHAIN_PROP_IMP(UISwitch ,long long,contentHorizontalAlignment)
//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UISwitch ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UISwitch ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UISwitch ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UISwitch ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UISwitch ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UISwitch ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UISwitch ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UISwitch ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UISwitch ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UISwitch ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UISwitch ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UISwitch ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UISwitch ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UISwitch ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UISwitch ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UISwitch ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UISwitch ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UISwitch ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UISwitch ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UISwitch ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UISwitch ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UISwitch ,long long,accessibilityNavigationStyle)





@end
