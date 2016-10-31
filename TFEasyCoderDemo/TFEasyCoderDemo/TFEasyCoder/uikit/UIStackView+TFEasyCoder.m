//
//  UIStackView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIStackView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIStackView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIStackView, UIStackView *);
TF_EC_MINSTANCE_IMP(UIStackView, UIStackView *);


TF_EC_CHAIN_PROP_IMP(UIStackView ,long long,axis)
TF_EC_CHAIN_PROP_IMP(UIStackView ,long long,distribution)
TF_EC_CHAIN_PROP_IMP(UIStackView ,long long,alignment)
TF_EC_CHAIN_PROP_IMP(UIStackView ,double,spacing)




//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIStackView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIStackView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIStackView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIStackView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIStackView ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIStackView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIStackView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIStackView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIStackView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIStackView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIStackView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIStackView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIStackView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIStackView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIStackView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIStackView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIStackView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIStackView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIStackView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIStackView ,long long,accessibilityNavigationStyle)





@end