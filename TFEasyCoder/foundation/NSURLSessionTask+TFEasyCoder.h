//
//  NSURLSessionTask+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLSessionTask,NSURLSessionTask *);

@interface NSURLSessionTask (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLSessionTask, NSURLSessionTask *);
TF_EC_MINSTANCE_INT(NSURLSessionTask,NSURLSessionTask *);



TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,NSString *,taskDescription)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,float,priority)




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,long long,accessibilityNavigationStyle)





@end