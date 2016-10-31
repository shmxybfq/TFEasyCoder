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





//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UISearchBar ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UISearchBar ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UISearchBar ,long long,tag)
TF_EC_CHAIN_PROP_INT(UISearchBar ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UISearchBar ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UISearchBar ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UISearchBar ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UISearchBar ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UISearchBar ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UISearchBar ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UISearchBar ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UISearchBar ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UISearchBar ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UISearchBar ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UISearchBar ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UISearchBar ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UISearchBar ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UISearchBar ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UISearchBar ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UISearchBar ,long long,accessibilityNavigationStyle)





@end