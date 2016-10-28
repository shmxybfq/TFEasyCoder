//
//  UICollectionViewLayoutInvalidationContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionViewLayoutInvalidationContext,UICollectionViewLayoutInvalidationContext *);

@interface UICollectionViewLayoutInvalidationContext (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionViewLayoutInvalidationContext, UICollectionViewLayoutInvalidationContext *);
TF_EC_MINSTANCE_INT(UICollectionViewLayoutInvalidationContext,UICollectionViewLayoutInvalidationContext *);


TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,CGPoint,contentOffsetAdjustment)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,CGSize,contentSizeAdjustment)

@end