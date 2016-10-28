//
//  NSProgress+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSProgress,NSProgress *);

@interface NSProgress (TFEasyCoder)

TF_EC_MSTATIC_INT(NSProgress, NSProgress *);
TF_EC_MINSTANCE_INT(NSProgress,NSProgress *);



TF_EC_CHAIN_PROP_INT(NSProgress ,long long,totalUnitCount);
TF_EC_CHAIN_PROP_INT(NSProgress ,long long,completedUnitCount);
TF_EC_CHAIN_PROP_INT(NSProgress ,NSString *,localizedDescription);
TF_EC_CHAIN_PROP_INT(NSProgress ,NSString *,localizedAdditionalDescription);
TF_EC_CHAIN_PROP_INT(NSProgress ,BOOL,cancellable);
TF_EC_CHAIN_PROP_INT(NSProgress ,BOOL,pausable);
TF_EC_CHAIN_PROP_INT(NSProgress ,NSString *,kind);

@end