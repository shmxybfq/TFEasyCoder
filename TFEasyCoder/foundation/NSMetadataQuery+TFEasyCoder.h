//
//  NSMetadataQuery+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMetadataQuery (TFEasyCoder)





-(NSMetadataQuery  *(^)(id<NSMetadataQueryDelegate>   delegate))set_delegate;
-(NSMetadataQuery  *(^)(NSPredicate *  predicate))set_predicate;
-(NSMetadataQuery  *(^)(NSArray *  sortDescriptors))set_sortDescriptors;
-(NSMetadataQuery  *(^)(NSArray *  valueListAttributes))set_valueListAttributes;
-(NSMetadataQuery  *(^)(NSArray *  groupingAttributes))set_groupingAttributes;
-(NSMetadataQuery  *(^)(double  notificationBatchingInterval))set_notificationBatchingInterval;
-(NSMetadataQuery  *(^)(NSArray *  searchScopes))set_searchScopes;
-(NSMetadataQuery  *(^)(NSArray *  searchItems))set_searchItems;
-(NSMetadataQuery  *(^)(NSOperationQueue *  operationQueue))set_operationQueue;




//superclass pros NSObject
-(NSMetadataQuery  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMetadataQuery  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMetadataQuery  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMetadataQuery  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMetadataQuery  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMetadataQuery  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMetadataQuery  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMetadataQuery  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMetadataQuery  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMetadataQuery  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMetadataQuery  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMetadataQuery  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMetadataQuery  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMetadataQuery  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end