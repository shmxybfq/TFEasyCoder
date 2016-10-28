//
//  UICollectionViewLayoutInvalidationContext+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionViewLayoutInvalidationContext+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionViewLayoutInvalidationContext (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionViewLayoutInvalidationContext, UICollectionViewLayoutInvalidationContext *);
TF_EC_MINSTANCE_IMP(UICollectionViewLayoutInvalidationContext, UICollectionViewLayoutInvalidationContext *);


TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutInvalidationContext ,CGPoint,contentOffsetAdjustment)
TF_EC_CHAIN_PROP_IMP(UICollectionViewLayoutInvalidationContext ,CGSize,contentSizeAdjustment)
@end