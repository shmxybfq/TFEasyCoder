//
//  UIPasteboard+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPasteboard (TFEasyCoder)





-(UIPasteboard  *(^)(NSString *  string))set_string;
-(UIPasteboard  *(^)(NSArray *  strings))set_strings;
-(UIPasteboard  *(^)(NSArray *  URLs))set_URLs;
-(UIPasteboard  *(^)(UIImage *  image))set_image;
-(UIPasteboard  *(^)(NSArray *  images))set_images;
-(UIPasteboard  *(^)(UIColor *  color))set_color;
-(UIPasteboard  *(^)(NSArray *  colors))set_colors;
-(UIPasteboard  *(^)(BOOL  persistent))set_persistent;
-(UIPasteboard  *(^)(NSArray *  items))set_items;




//superclass pros NSObject
-(UIPasteboard  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPasteboard  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPasteboard  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPasteboard  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPasteboard  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPasteboard  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPasteboard  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPasteboard  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPasteboard  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPasteboard  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPasteboard  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPasteboard  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPasteboard  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPasteboard  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end