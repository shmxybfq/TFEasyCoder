//
//  UIRefreshControl+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIRefreshControl+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIRefreshControl (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIRefreshControl, UIRefreshControl *);
TF_EC_MINSTANCE_IMP(UIRefreshControl, UIRefreshControl *);


TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,NSAttributedString *,attributedTitle)




//superclass pros UIControl
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,BOOL,selected)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,long long,contentVerticalAlignment)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,long long,contentHorizontalAlignment)
//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,long long,accessibilityNavigationStyle)





@end