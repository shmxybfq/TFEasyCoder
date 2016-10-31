//
//  UIWindow+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIWindow+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIWindow (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIWindow, UIWindow *);
TF_EC_MINSTANCE_IMP(UIWindow, UIWindow *);


TF_EC_CHAIN_PROP_IMP(UIWindow ,UIScreen *,screen)
TF_EC_CHAIN_PROP_IMP(UIWindow ,double,windowLevel)
TF_EC_CHAIN_PROP_IMP(UIWindow ,UIViewController *,rootViewController)






//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIWindow ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIWindow ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIWindow ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIWindow ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIWindow ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIWindow ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIWindow ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIWindow ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIWindow ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIWindow ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIWindow ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIWindow ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIWindow ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIWindow ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIWindow ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIWindow ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIWindow ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIWindow ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIWindow ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIWindow ,long long,accessibilityNavigationStyle)





@end