//
//  NSMetadataQueryAttributeValueTuple+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMetadataQueryAttributeValueTuple (TFEasyCoder)









//superclass pros NSObject
-(NSMetadataQueryAttributeValueTuple  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMetadataQueryAttributeValueTuple  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMetadataQueryAttributeValueTuple  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMetadataQueryAttributeValueTuple  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMetadataQueryAttributeValueTuple  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMetadataQueryAttributeValueTuple  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMetadataQueryAttributeValueTuple  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMetadataQueryAttributeValueTuple  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMetadataQueryAttributeValueTuple  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMetadataQueryAttributeValueTuple  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMetadataQueryAttributeValueTuple  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMetadataQueryAttributeValueTuple  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMetadataQueryAttributeValueTuple  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMetadataQueryAttributeValueTuple  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end