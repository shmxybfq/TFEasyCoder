//
//  NSBlockOperation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSBlockOperation,NSBlockOperation *);

@interface NSBlockOperation (TFEasyCoder)

TF_EC_MSTATIC_INT(NSBlockOperation, NSBlockOperation *);
TF_EC_MINSTANCE_INT(NSBlockOperation,NSBlockOperation *);






//superclass pros NSOperation
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,long long,queuePriority);
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,double,threadPriority);
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,long long,qualityOfService);
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,NSString *,name);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSBlockOperation ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSBlockOperation);


@end