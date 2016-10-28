//
//  UISearchBar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISearchBar,UISearchBar *);

@interface UISearchBar (TFEasyCoder)

TF_EC_MSTATIC_INT(UISearchBar, UISearchBar *);
TF_EC_MINSTANCE_INT(UISearchBar,UISearchBar *);



TF_EC_CHAIN_PROP_INT(UISearchBar ,long long,barStyle)
TF_EC_CHAIN_PROP_INT(UISearchBar ,id<UISearchBarDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UISearchBar ,NSString *,text)
TF_EC_CHAIN_PROP_INT(UISearchBar ,NSString *,prompt)
TF_EC_CHAIN_PROP_INT(UISearchBar ,NSString *,placeholder)
TF_EC_CHAIN_PROP_INT(UISearchBar ,BOOL,showsBookmarkButton)
TF_EC_CHAIN_PROP_INT(UISearchBar ,BOOL,showsCancelButton)
TF_EC_CHAIN_PROP_INT(UISearchBar ,BOOL,showsSearchResultsButton)
TF_EC_CHAIN_PROP_INT(UISearchBar ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_INT(UISearchBar ,UIColor *,barTintColor)
TF_EC_CHAIN_PROP_INT(UISearchBar ,unsigned long long,searchBarStyle)
TF_EC_CHAIN_PROP_INT(UISearchBar ,BOOL,translucent)
TF_EC_CHAIN_PROP_INT(UISearchBar ,NSArray *,scopeButtonTitles)
TF_EC_CHAIN_PROP_INT(UISearchBar ,long long,selectedScopeButtonIndex)
TF_EC_CHAIN_PROP_INT(UISearchBar ,BOOL,showsScopeBar)
TF_EC_CHAIN_PROP_INT(UISearchBar ,UIView *,inputAccessoryView)
TF_EC_CHAIN_PROP_INT(UISearchBar ,UIImage *,backgroundImage)
TF_EC_CHAIN_PROP_INT(UISearchBar ,UIImage *,scopeBarBackgroundImage)
TF_EC_CHAIN_PROP_INT(UISearchBar ,UIOffset,searchFieldBackgroundPositionAdjustment)
TF_EC_CHAIN_PROP_INT(UISearchBar ,UIOffset,searchTextPositionAdjustment)
TF_EC_CHAIN_PROP_INT(UISearchBar ,long long,autocapitalizationType)
TF_EC_CHAIN_PROP_INT(UISearchBar ,long long,autocorrectionType)
TF_EC_CHAIN_PROP_INT(UISearchBar ,long long,spellCheckingType)
TF_EC_CHAIN_PROP_INT(UISearchBar ,long long,keyboardType)
TF_EC_CHAIN_PROP_INT(UISearchBar ,long long,keyboardAppearance)
TF_EC_CHAIN_PROP_INT(UISearchBar ,long long,returnKeyType)
TF_EC_CHAIN_PROP_INT(UISearchBar ,BOOL,enablesReturnKeyAutomatically)
TF_EC_CHAIN_PROP_INT(UISearchBar ,BOOL,secureTextEntry)


@end