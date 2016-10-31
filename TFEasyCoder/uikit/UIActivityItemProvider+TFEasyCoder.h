//
//  UIActivityItemProvider+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIActivityItemProvider,UIActivityItemProvider *);

@interface UIActivityItemProvider (TFEasyCoder)

TF_EC_MSTATIC_INT(UIActivityItemProvider, UIActivityItemProvider *);
TF_EC_MINSTANCE_INT(UIActivityItemProvider,UIActivityItemProvider *);






//superclass pros NSOperation
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,long long,queuePriority);
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,double,threadPriority);
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,long long,qualityOfService);
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,NSString *,name);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIActivityItemProvider ,long long,accessibilityNavigationStyle)





@end