//
//  NSInvocationOperation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSInvocationOperation,NSInvocationOperation *);

@interface NSInvocationOperation (TFEasyCoder)

TF_EC_MSTATIC_INT(NSInvocationOperation, NSInvocationOperation *);
TF_EC_MINSTANCE_INT(NSInvocationOperation,NSInvocationOperation *);






//superclass pros NSOperation
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,long long,queuePriority);
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,double,threadPriority);
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,long long,qualityOfService);
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,NSString *,name);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSInvocationOperation ,long long,accessibilityNavigationStyle)





@end