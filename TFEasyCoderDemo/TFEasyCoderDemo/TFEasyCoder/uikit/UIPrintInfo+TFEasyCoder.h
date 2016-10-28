//
//  UIPrintInfo+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPrintInfo,UIPrintInfo *);

@interface UIPrintInfo (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPrintInfo, UIPrintInfo *);
TF_EC_MINSTANCE_INT(UIPrintInfo,UIPrintInfo *);


TF_EC_CHAIN_PROP_INT(UIPrintInfo ,NSString *,printerID);
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,NSString *,jobName);
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,long long,outputType);
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,long long,orientation);
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,long long,duplex);


@end