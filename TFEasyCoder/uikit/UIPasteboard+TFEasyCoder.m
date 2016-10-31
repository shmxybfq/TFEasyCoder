//
//  UIPasteboard+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPasteboard+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPasteboard (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPasteboard, UIPasteboard *);
TF_EC_MINSTANCE_IMP(UIPasteboard, UIPasteboard *);


TF_EC_CHAIN_PROP_IMP(UIPasteboard ,NSString *,string)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,NSArray *,strings)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,NSArray *,URLs)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,UIImage *,image)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,NSArray *,images)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,UIColor *,color)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,NSArray *,colors)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,BOOL,persistent)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,NSArray *,items)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPasteboard ,long long,accessibilityNavigationStyle)





@end