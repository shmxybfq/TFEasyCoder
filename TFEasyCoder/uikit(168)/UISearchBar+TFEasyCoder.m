//
//  UISearchBar+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISearchBar+TFEasyCoder.h"


@implementation UISearchBar (TFEasyCoder)





-(UISearchBar  *(^)(long long  barStyle))set_barStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  barStyle){
        weakSelf.barStyle = barStyle;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(id<UISearchBarDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UISearchBarDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(NSString *  text))set_text{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  text){
        weakSelf.text = text;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(NSString *  prompt))set_prompt{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  prompt){
        weakSelf.prompt = prompt;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(NSString *  placeholder))set_placeholder{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  placeholder){
        weakSelf.placeholder = placeholder;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(BOOL  showsBookmarkButton))set_showsBookmarkButton{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsBookmarkButton){
        weakSelf.showsBookmarkButton = showsBookmarkButton;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(BOOL  showsCancelButton))set_showsCancelButton{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsCancelButton){
        weakSelf.showsCancelButton = showsCancelButton;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(BOOL  showsSearchResultsButton))set_showsSearchResultsButton{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsSearchResultsButton){
        weakSelf.showsSearchResultsButton = showsSearchResultsButton;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(UIColor *  tintColor))set_tintColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  tintColor){
        weakSelf.tintColor = tintColor;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(UIColor *  barTintColor))set_barTintColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  barTintColor){
        weakSelf.barTintColor = barTintColor;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(unsigned long long  searchBarStyle))set_searchBarStyle{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  searchBarStyle){
        weakSelf.searchBarStyle = searchBarStyle;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(BOOL  translucent))set_translucent{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  translucent){
        weakSelf.translucent = translucent;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(NSArray *  scopeButtonTitles))set_scopeButtonTitles{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  scopeButtonTitles){
        weakSelf.scopeButtonTitles = scopeButtonTitles;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(long long  selectedScopeButtonIndex))set_selectedScopeButtonIndex{
    __weak typeof(self) weakSelf = self;
    return ^(long long  selectedScopeButtonIndex){
        weakSelf.selectedScopeButtonIndex = selectedScopeButtonIndex;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(BOOL  showsScopeBar))set_showsScopeBar{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsScopeBar){
        weakSelf.showsScopeBar = showsScopeBar;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(UIView *  inputAccessoryView))set_inputAccessoryView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  inputAccessoryView){
        weakSelf.inputAccessoryView = inputAccessoryView;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(UIImage *  backgroundImage))set_backgroundImage{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  backgroundImage){
        weakSelf.backgroundImage = backgroundImage;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(UIImage *  scopeBarBackgroundImage))set_scopeBarBackgroundImage{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  scopeBarBackgroundImage){
        weakSelf.scopeBarBackgroundImage = scopeBarBackgroundImage;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(UIOffset  searchFieldBackgroundPositionAdjustment))set_searchFieldBackgroundPositionAdjustment{
    __weak typeof(self) weakSelf = self;
    return ^(UIOffset  searchFieldBackgroundPositionAdjustment){
        weakSelf.searchFieldBackgroundPositionAdjustment = searchFieldBackgroundPositionAdjustment;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(UIOffset  searchTextPositionAdjustment))set_searchTextPositionAdjustment{
    __weak typeof(self) weakSelf = self;
    return ^(UIOffset  searchTextPositionAdjustment){
        weakSelf.searchTextPositionAdjustment = searchTextPositionAdjustment;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(long long  autocapitalizationType))set_autocapitalizationType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  autocapitalizationType){
        weakSelf.autocapitalizationType = autocapitalizationType;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(long long  autocorrectionType))set_autocorrectionType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  autocorrectionType){
        weakSelf.autocorrectionType = autocorrectionType;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(long long  spellCheckingType))set_spellCheckingType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  spellCheckingType){
        weakSelf.spellCheckingType = spellCheckingType;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(long long  keyboardType))set_keyboardType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  keyboardType){
        weakSelf.keyboardType = keyboardType;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(long long  keyboardAppearance))set_keyboardAppearance{
    __weak typeof(self) weakSelf = self;
    return ^(long long  keyboardAppearance){
        weakSelf.keyboardAppearance = keyboardAppearance;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(long long  returnKeyType))set_returnKeyType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  returnKeyType){
        weakSelf.returnKeyType = returnKeyType;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(BOOL  enablesReturnKeyAutomatically))set_enablesReturnKeyAutomatically{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enablesReturnKeyAutomatically){
        weakSelf.enablesReturnKeyAutomatically = enablesReturnKeyAutomatically;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(BOOL  secureTextEntry))set_secureTextEntry{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  secureTextEntry){
        weakSelf.secureTextEntry = secureTextEntry;
        return weakSelf;
    };
}





//superclass pros UIView
-(UISearchBar  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UISearchBar  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UISearchBar  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UISearchBar  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
