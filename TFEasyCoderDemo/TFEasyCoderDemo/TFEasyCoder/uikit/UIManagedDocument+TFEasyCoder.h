//
//  UIManagedDocument+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIManagedDocument,UIManagedDocument *);

@interface UIManagedDocument (TFEasyCoder)

TF_EC_MSTATIC_INT(UIManagedDocument, UIManagedDocument *);
TF_EC_MINSTANCE_INT(UIManagedDocument,UIManagedDocument *);


TF_EC_CHAIN_PROP_INT(UIManagedDocument ,NSDictionary *,persistentStoreOptions);
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,NSString *,modelConfiguration);

@end