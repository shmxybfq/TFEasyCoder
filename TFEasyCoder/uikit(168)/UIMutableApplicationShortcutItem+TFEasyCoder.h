//
//  UIMutableApplicationShortcutItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIMutableApplicationShortcutItem (TFEasyCoder)





-(UIMutableApplicationShortcutItem  *(^)(NSString *  type))set_type;
-(UIMutableApplicationShortcutItem  *(^)(NSString *  localizedTitle))set_localizedTitle;
-(UIMutableApplicationShortcutItem  *(^)(NSString *  localizedSubtitle))set_localizedSubtitle;
-(UIMutableApplicationShortcutItem  *(^)(UIApplicationShortcutIcon *  icon))set_icon;
-(UIMutableApplicationShortcutItem  *(^)(NSDictionary *  userInfo))set_userInfo;





//superclass pros UIApplicationShortcutItem
//superclass pros NSObject
-(UIMutableApplicationShortcutItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIMutableApplicationShortcutItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIMutableApplicationShortcutItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIMutableApplicationShortcutItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIMutableApplicationShortcutItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIMutableApplicationShortcutItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIMutableApplicationShortcutItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIMutableApplicationShortcutItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIMutableApplicationShortcutItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIMutableApplicationShortcutItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIMutableApplicationShortcutItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIMutableApplicationShortcutItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIMutableApplicationShortcutItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIMutableApplicationShortcutItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end