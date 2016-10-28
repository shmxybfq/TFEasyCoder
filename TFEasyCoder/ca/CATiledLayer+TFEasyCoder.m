//
//  CATiledLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CATiledLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CATiledLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CATiledLayer, CATiledLayer *);
TF_EC_MINSTANCE_IMP(CATiledLayer, CATiledLayer *);



TF_EC_CHAIN_PROP_IMP(CATiledLayer ,unsigned long long,levelsOfDetail)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,unsigned long long,levelsOfDetailBias)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CGSize,tileSize)

@end