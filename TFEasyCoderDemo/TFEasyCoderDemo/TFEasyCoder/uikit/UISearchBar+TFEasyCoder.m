//
//  UISearchBar+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISearchBar+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISearchBar (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISearchBar, UISearchBar *);
TF_EC_MINSTANCE_IMP(UISearchBar, UISearchBar *);


TF_EC_CHAIN_PROP_IMP(UISearchBar ,long long,barStyle)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,id<UISearchBarDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,NSString *,text)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,NSString *,prompt)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,NSString *,placeholder)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,BOOL,showsBookmarkButton)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,BOOL,showsCancelButton)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,BOOL,showsSearchResultsButton)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,UIColor *,barTintColor)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,unsigned long long,searchBarStyle)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,BOOL,translucent)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,NSArray *,scopeButtonTitles)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,long long,selectedScopeButtonIndex)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,BOOL,showsScopeBar)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,UIView *,inputAccessoryView)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,UIImage *,backgroundImage)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,UIImage *,scopeBarBackgroundImage)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,UIOffset,searchFieldBackgroundPositionAdjustment)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,UIOffset,searchTextPositionAdjustment)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,long long,autocapitalizationType)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,long long,autocorrectionType)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,long long,spellCheckingType)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,long long,keyboardType)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,long long,keyboardAppearance)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,long long,returnKeyType)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,BOOL,enablesReturnKeyAutomatically)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,BOOL,secureTextEntry)

@end