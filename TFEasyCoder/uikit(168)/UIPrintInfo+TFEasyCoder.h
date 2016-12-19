//
//  UIPrintInfo+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPrintInfo (TFEasyCoder)





-(UIPrintInfo  *(^)(NSString *  printerID))set_printerID;
-(UIPrintInfo  *(^)(NSString *  jobName))set_jobName;
-(UIPrintInfo  *(^)(long long  outputType))set_outputType;
-(UIPrintInfo  *(^)(long long  orientation))set_orientation;
-(UIPrintInfo  *(^)(long long  duplex))set_duplex;





//superclass pros NSObject
-(UIPrintInfo  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPrintInfo  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPrintInfo  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPrintInfo  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPrintInfo  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPrintInfo  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPrintInfo  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPrintInfo  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPrintInfo  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPrintInfo  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPrintInfo  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPrintInfo  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPrintInfo  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPrintInfo  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end