//
//  NSThread+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSThread,NSThread *);

@interface NSThread (TFEasyCoder)

TF_EC_MSTATIC_INT(NSThread, NSThread *);
TF_EC_MINSTANCE_INT(NSThread,NSThread *);


TF_EC_CHAIN_PROP_INT(NSThread ,double,threadPriority);
TF_EC_CHAIN_PROP_INT(NSThread ,long long,qualityOfService);
TF_EC_CHAIN_PROP_INT(NSThread ,NSString *,name);
TF_EC_CHAIN_PROP_INT(NSThread ,unsigned long long,stackSize);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSThread ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSThread ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSThread ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSThread ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSThread ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSThread ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSThread ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSThread ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSThread ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSThread ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSThread ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSThread ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSThread ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSThread ,long long,accessibilityNavigationStyle)





@end