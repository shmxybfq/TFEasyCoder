//
//  UITableViewHeaderFooterView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITableViewHeaderFooterView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITableViewHeaderFooterView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITableViewHeaderFooterView, UITableViewHeaderFooterView *);
TF_EC_MINSTANCE_IMP(UITableViewHeaderFooterView, UITableViewHeaderFooterView *);


TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,UIView *,backgroundView)





//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,long long,accessibilityNavigationStyle)





@end
