//
//  UISearchBar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UISearchBar (TFEasyCoder)






-(UISearchBar  *(^)(long long  barStyle))set_barStyle;
-(UISearchBar  *(^)(id<UISearchBarDelegate>    delegate))set_delegate;
-(UISearchBar  *(^)(NSString *  text))set_text;
-(UISearchBar  *(^)(NSString *  prompt))set_prompt;
-(UISearchBar  *(^)(NSString *  placeholder))set_placeholder;
-(UISearchBar  *(^)(BOOL  showsBookmarkButton))set_showsBookmarkButton;
-(UISearchBar  *(^)(BOOL  showsCancelButton))set_showsCancelButton;
-(UISearchBar  *(^)(BOOL  showsSearchResultsButton))set_showsSearchResultsButton;
-(UISearchBar  *(^)(UIColor *  tintColor))set_tintColor;
-(UISearchBar  *(^)(UIColor *  barTintColor))set_barTintColor;
-(UISearchBar  *(^)(unsigned long long  searchBarStyle))set_searchBarStyle;
-(UISearchBar  *(^)(BOOL  translucent))set_translucent;
-(UISearchBar  *(^)(NSArray *  scopeButtonTitles))set_scopeButtonTitles;
-(UISearchBar  *(^)(long long  selectedScopeButtonIndex))set_selectedScopeButtonIndex;
-(UISearchBar  *(^)(BOOL  showsScopeBar))set_showsScopeBar;
-(UISearchBar  *(^)(UIView *  inputAccessoryView))set_inputAccessoryView;
-(UISearchBar  *(^)(UIImage *  backgroundImage))set_backgroundImage;
-(UISearchBar  *(^)(UIImage *  scopeBarBackgroundImage))set_scopeBarBackgroundImage;
-(UISearchBar  *(^)(UIOffset  searchFieldBackgroundPositionAdjustment))set_searchFieldBackgroundPositionAdjustment;
-(UISearchBar  *(^)(UIOffset  searchTextPositionAdjustment))set_searchTextPositionAdjustment;
-(UISearchBar  *(^)(long long  autocapitalizationType))set_autocapitalizationType;
-(UISearchBar  *(^)(long long  autocorrectionType))set_autocorrectionType;
-(UISearchBar  *(^)(long long  spellCheckingType))set_spellCheckingType;
-(UISearchBar  *(^)(long long  keyboardType))set_keyboardType;
-(UISearchBar  *(^)(long long  keyboardAppearance))set_keyboardAppearance;
-(UISearchBar  *(^)(long long  returnKeyType))set_returnKeyType;
-(UISearchBar  *(^)(BOOL  enablesReturnKeyAutomatically))set_enablesReturnKeyAutomatically;
-(UISearchBar  *(^)(BOOL  secureTextEntry))set_secureTextEntry;





//superclass pros UIView
-(UISearchBar  *(^)(UIView *  maskView))set_maskView;
-(UISearchBar  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UISearchBar  *(^)(long long  tag))set_tag;
-(UISearchBar  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UISearchBar  *(^)(CGPoint  center))set_center;
-(UISearchBar  *(^)(CGRect  frame))set_frame;
-(UISearchBar  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UISearchBar  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UISearchBar  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UISearchBar  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UISearchBar  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UISearchBar  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UISearchBar  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UISearchBar  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UISearchBar  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UISearchBar  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UISearchBar  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UISearchBar  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UISearchBar  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UISearchBar  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UISearchBar  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UISearchBar  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
