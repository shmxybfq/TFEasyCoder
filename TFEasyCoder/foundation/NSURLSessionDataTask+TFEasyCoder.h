//
//  NSURLSessionDataTask+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLSessionDataTask,NSURLSessionDataTask *);

@interface NSURLSessionDataTask (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLSessionDataTask, NSURLSessionDataTask *);
TF_EC_MINSTANCE_INT(NSURLSessionDataTask,NSURLSessionDataTask *);






//superclass pros NSURLSessionTask
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,NSString *,taskDescription)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,float,priority)
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLSessionDataTask ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSURLSessionDataTask);


@end