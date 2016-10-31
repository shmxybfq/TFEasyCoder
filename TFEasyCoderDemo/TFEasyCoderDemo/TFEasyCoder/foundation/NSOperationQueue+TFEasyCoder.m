//
//  NSOperationQueue+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSOperationQueue+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSOperationQueue (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSOperationQueue, NSOperationQueue *);
TF_EC_MINSTANCE_IMP(NSOperationQueue, NSOperationQueue *);


TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,long long,maxConcurrentOperationCount)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,BOOL,suspended)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,long long,qualityOfService)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,dispatch_queue_t ,underlyingQueue)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,long long,accessibilityNavigationStyle)





@end