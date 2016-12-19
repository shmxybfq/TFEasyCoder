//
//  UISearchDisplayController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>



#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"




@interface UISearchDisplayController (TFEasyCoder)





-(UISearchDisplayController  *(^)(id<UISearchDisplayDelegate>   delegate))set_delegate;
-(UISearchDisplayController  *(^)(BOOL  active))set_active;
-(UISearchDisplayController  *(^)(id<UITableViewDataSource>   searchResultsDataSource))set_searchResultsDataSource;
-(UISearchDisplayController  *(^)(id<UITableViewDelegate>   searchResultsDelegate))set_searchResultsDelegate;
-(UISearchDisplayController  *(^)(NSString *  searchResultsTitle))set_searchResultsTitle;
-(UISearchDisplayController  *(^)(BOOL  displaysSearchBarInNavigationBar))set_displaysSearchBarInNavigationBar;





//superclass pros NSObject
-(UISearchDisplayController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UISearchDisplayController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UISearchDisplayController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UISearchDisplayController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UISearchDisplayController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UISearchDisplayController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UISearchDisplayController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UISearchDisplayController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UISearchDisplayController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UISearchDisplayController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UISearchDisplayController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UISearchDisplayController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UISearchDisplayController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UISearchDisplayController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end