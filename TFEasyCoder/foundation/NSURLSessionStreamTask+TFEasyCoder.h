//
//  NSURLSessionStreamTask+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLSessionStreamTask,NSURLSessionStreamTask *);

@interface NSURLSessionStreamTask (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLSessionStreamTask, NSURLSessionStreamTask *);
TF_EC_MINSTANCE_INT(NSURLSessionStreamTask,NSURLSessionStreamTask *);






//superclass pros NSURLSessionTask
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,NSString *,taskDescription)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,float,priority)
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLSessionStreamTask ,long long,accessibilityNavigationStyle)





@end