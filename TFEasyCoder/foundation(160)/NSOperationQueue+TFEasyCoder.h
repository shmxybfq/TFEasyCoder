//
//  NSOperationQueue+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSOperationQueue (TFEasyCoder)




-(NSOperationQueue  *(^)(long long  maxConcurrentOperationCount))set_maxConcurrentOperationCount;
-(NSOperationQueue  *(^)(BOOL  suspended))set_suspended;
-(NSOperationQueue  *(^)(NSString *  name))set_name;
-(NSOperationQueue  *(^)(long long  qualityOfService))set_qualityOfService;
-(NSOperationQueue  *(^)(dispatch_queue_t   underlyingQueue))set_underlyingQueue;





//superclass pros NSObject
-(NSOperationQueue  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSOperationQueue  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSOperationQueue  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSOperationQueue  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSOperationQueue  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSOperationQueue  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSOperationQueue  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSOperationQueue  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSOperationQueue  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSOperationQueue  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSOperationQueue  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSOperationQueue  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSOperationQueue  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSOperationQueue  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end