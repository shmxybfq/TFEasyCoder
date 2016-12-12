//
//  NSMutableArray+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMutableArray (TFEasyCoder)









//superclass pros NSArray
//superclass pros NSObject
-(NSMutableArray  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMutableArray  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMutableArray  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMutableArray  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMutableArray  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMutableArray  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMutableArray  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMutableArray  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMutableArray  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMutableArray  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMutableArray  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMutableArray  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMutableArray  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMutableArray  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end