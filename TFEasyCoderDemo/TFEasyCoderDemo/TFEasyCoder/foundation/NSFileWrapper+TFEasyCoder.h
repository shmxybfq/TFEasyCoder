//
//  NSFileWrapper+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSFileWrapper,NSFileWrapper *);

@interface NSFileWrapper (TFEasyCoder)

TF_EC_MSTATIC_INT(NSFileWrapper, NSFileWrapper *);
TF_EC_MINSTANCE_INT(NSFileWrapper,NSFileWrapper *);


TF_EC_CHAIN_PROP_INT(NSFileWrapper ,NSString *,preferredFilename);
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,NSString *,filename);
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,NSDictionary *,fileAttributes);

@end