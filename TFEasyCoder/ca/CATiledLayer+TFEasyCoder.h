//
//  CATiledLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CATiledLayer,CATiledLayer *);

@interface CATiledLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CATiledLayer, CATiledLayer *);
TF_EC_MINSTANCE_INT(CATiledLayer,CATiledLayer *);



TF_EC_CHAIN_PROP_INT(CATiledLayer ,unsigned long long,levelsOfDetail);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,unsigned long long,levelsOfDetailBias);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CGSize,tileSize);

@end