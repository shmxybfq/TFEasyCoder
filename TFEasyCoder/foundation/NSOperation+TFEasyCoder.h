//
//  NSOperation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSOperation,NSOperation *);

@interface NSOperation (TFEasyCoder)

TF_EC_MSTATIC_INT(NSOperation, NSOperation *);
TF_EC_MINSTANCE_INT(NSOperation,NSOperation *);


TF_EC_CHAIN_PROP_INT(NSOperation ,long long,queuePriority);
TF_EC_CHAIN_PROP_INT(NSOperation ,double,threadPriority);
TF_EC_CHAIN_PROP_INT(NSOperation ,long long,qualityOfService);
TF_EC_CHAIN_PROP_INT(NSOperation ,NSString *,name);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSOperation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSOperation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSOperation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSOperation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSOperation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSOperation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSOperation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSOperation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSOperation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSOperation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSOperation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSOperation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSOperation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSOperation ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSOperation);


@end