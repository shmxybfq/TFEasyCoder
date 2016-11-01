//
//  NSURLSessionDownloadTask+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLSessionDownloadTask,NSURLSessionDownloadTask *);

@interface NSURLSessionDownloadTask (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLSessionDownloadTask, NSURLSessionDownloadTask *);
TF_EC_MINSTANCE_INT(NSURLSessionDownloadTask,NSURLSessionDownloadTask *);






//superclass pros NSURLSessionTask
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,NSString *,taskDescription)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,float,priority)
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLSessionDownloadTask ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSURLSessionDownloadTask);


@end