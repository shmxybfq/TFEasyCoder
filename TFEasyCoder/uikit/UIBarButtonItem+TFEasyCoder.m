//
//  UIBarButtonItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIBarButtonItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIBarButtonItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIBarButtonItem, UIBarButtonItem *);
TF_EC_MINSTANCE_IMP(UIBarButtonItem, UIBarButtonItem *);


TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,UIEdgeInsets,imageInsets)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,long long,style)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,double,width)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,NSSet *,possibleTitles)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,UIView *,customView)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,SEL,action)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,UIColor *,tintColor)






//superclass pros UIBarItem
//TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,UIImage *,image)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,UIImage *,landscapeImagePhone)
//TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,UIEdgeInsets,imageInsets)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,UIEdgeInsets,landscapeImagePhoneInsets)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,long long,tag)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIBarButtonItem);


@end