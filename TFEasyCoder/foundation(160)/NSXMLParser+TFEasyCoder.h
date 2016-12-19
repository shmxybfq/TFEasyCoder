//
//  NSXMLParser+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSXMLParser (TFEasyCoder)





-(NSXMLParser  *(^)(id<NSXMLParserDelegate>   delegate))set_delegate;
-(NSXMLParser  *(^)(BOOL  shouldProcessNamespaces))set_shouldProcessNamespaces;
-(NSXMLParser  *(^)(BOOL  shouldReportNamespacePrefixes))set_shouldReportNamespacePrefixes;
-(NSXMLParser  *(^)(unsigned long long  externalEntityResolvingPolicy))set_externalEntityResolvingPolicy;
-(NSXMLParser  *(^)(NSSet *  allowedExternalEntityURLs))set_allowedExternalEntityURLs;
-(NSXMLParser  *(^)(BOOL  shouldResolveExternalEntities))set_shouldResolveExternalEntities;




//superclass pros NSObject
-(NSXMLParser  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSXMLParser  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSXMLParser  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSXMLParser  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSXMLParser  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSXMLParser  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSXMLParser  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSXMLParser  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSXMLParser  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSXMLParser  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSXMLParser  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSXMLParser  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSXMLParser  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSXMLParser  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end