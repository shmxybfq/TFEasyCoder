//
//  NSFileWrapper+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSFileWrapper (TFEasyCoder)





-(NSFileWrapper  *(^)(NSString *  preferredFilename))set_preferredFilename;
-(NSFileWrapper  *(^)(NSString *  filename))set_filename;
-(NSFileWrapper  *(^)(NSDictionary *  fileAttributes))set_fileAttributes;




//superclass pros NSObject
-(NSFileWrapper  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSFileWrapper  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSFileWrapper  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSFileWrapper  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSFileWrapper  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSFileWrapper  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSFileWrapper  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSFileWrapper  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSFileWrapper  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSFileWrapper  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSFileWrapper  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSFileWrapper  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSFileWrapper  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSFileWrapper  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end