//
//  UISearchDisplayController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISearchDisplayController+TFEasyCoder.h"


@implementation UISearchDisplayController (TFEasyCoder)





-(UISearchDisplayController  *(^)(id<UISearchDisplayDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UISearchDisplayDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(BOOL  active))set_active{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  active){
        weakSelf.active = active;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(id<UITableViewDataSource>    searchResultsDataSource))set_searchResultsDataSource{
    __weak typeof(self) weakSelf = self;
    return ^(id<UITableViewDataSource>    searchResultsDataSource){
        weakSelf.searchResultsDataSource = searchResultsDataSource;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(id<UITableViewDelegate>    searchResultsDelegate))set_searchResultsDelegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UITableViewDelegate>    searchResultsDelegate){
        weakSelf.searchResultsDelegate = searchResultsDelegate;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(NSString *  searchResultsTitle))set_searchResultsTitle{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  searchResultsTitle){
        weakSelf.searchResultsTitle = searchResultsTitle;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(BOOL  displaysSearchBarInNavigationBar))set_displaysSearchBarInNavigationBar{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  displaysSearchBarInNavigationBar){
        weakSelf.displaysSearchBarInNavigationBar = displaysSearchBarInNavigationBar;
        return weakSelf;
    };
}






//superclass pros NSObject
-(UISearchDisplayController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UISearchDisplayController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end