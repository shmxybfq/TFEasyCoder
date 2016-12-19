//
//  NSMetadataItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMetadataItem (TFEasyCoder)









//superclass pros NSObject
-(NSMetadataItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMetadataItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMetadataItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMetadataItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMetadataItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMetadataItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMetadataItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMetadataItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMetadataItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMetadataItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMetadataItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMetadataItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMetadataItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMetadataItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end