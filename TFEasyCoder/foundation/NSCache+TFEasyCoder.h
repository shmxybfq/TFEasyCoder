//
//  NSCache+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSCache,NSCache *);

@interface NSCache (TFEasyCoder)

TF_EC_MSTATIC_INT(NSCache, NSCache *);
TF_EC_MINSTANCE_INT(NSCache,NSCache *);


TF_EC_CHAIN_PROP_INT(NSCache ,NSString *,name);
TF_EC_CHAIN_PROP_INT(NSCache ,id<NSCacheDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSCache ,unsigned long long,totalCostLimit);
TF_EC_CHAIN_PROP_INT(NSCache ,unsigned long long,countLimit);
TF_EC_CHAIN_PROP_INT(NSCache ,BOOL,evictsObjectsWithDiscardedContent);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSCache ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSCache ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSCache ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSCache ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSCache ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSCache ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSCache ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSCache ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSCache ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSCache ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSCache ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSCache ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSCache ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSCache ,long long,accessibilityNavigationStyle)





@end