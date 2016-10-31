//
//  NSURLSessionUploadTask+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLSessionUploadTask,NSURLSessionUploadTask *);

@interface NSURLSessionUploadTask (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLSessionUploadTask, NSURLSessionUploadTask *);
TF_EC_MINSTANCE_INT(NSURLSessionUploadTask,NSURLSessionUploadTask *);






//superclass pros NSURLSessionDataTask
//superclass pros NSURLSessionTask
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,NSString *,taskDescription)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,float,priority)
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLSessionUploadTask ,long long,accessibilityNavigationStyle)





@end