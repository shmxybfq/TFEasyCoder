//
//  UIActivityItemProvider+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIActivityItemProvider+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@implementation UIActivityItemProvider (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIActivityItemProvider, UIActivityItemProvider *);
TF_EC_MINSTANCE_IMP(UIActivityItemProvider, UIActivityItemProvider *);







//superclass pros NSOperation
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,long long,queuePriority)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,double,threadPriority)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,long long,qualityOfService)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,NSString *,name)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIActivityItemProvider ,long long,accessibilityNavigationStyle)





@end
