//
//  NSMetadataQueryResultGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMetadataQueryResultGroup (TFEasyCoder)









//superclass pros NSObject
-(NSMetadataQueryResultGroup  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMetadataQueryResultGroup  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMetadataQueryResultGroup  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMetadataQueryResultGroup  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMetadataQueryResultGroup  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMetadataQueryResultGroup  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMetadataQueryResultGroup  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMetadataQueryResultGroup  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMetadataQueryResultGroup  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMetadataQueryResultGroup  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMetadataQueryResultGroup  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMetadataQueryResultGroup  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMetadataQueryResultGroup  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMetadataQueryResultGroup  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end