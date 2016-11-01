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




//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UISearchBar ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UISearchBar ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UISearchBar ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UISearchBar ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UISearchBar);


@end
