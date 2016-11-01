//
//  UISearchDisplayController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISearchDisplayController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISearchDisplayController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISearchDisplayController, UISearchDisplayController *);
TF_EC_MINSTANCE_IMP(UISearchDisplayController, UISearchDisplayController *);


TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,id<UISearchDisplayDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,BOOL,active)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,id<UITableViewDataSource>  ,searchResultsDataSource)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,id<UITableViewDelegate>  ,searchResultsDelegate)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,NSString *,searchResultsTitle)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,BOOL,displaysSearchBarInNavigationBar)





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UISearchDisplayController);


@end