//
//  NSTextAttachment+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSTextAttachment,NSTextAttachment *);

@interface NSTextAttachment (TFEasyCoder)

TF_EC_MSTATIC_INT(NSTextAttachment, NSTextAttachment *);
TF_EC_MINSTANCE_INT(NSTextAttachment,NSTextAttachment *);


TF_EC_CHAIN_PROP_INT(NSTextAttachment ,NSData *,contents);
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,NSString *,fileType);
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,UIImage *,image);
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,NSFileWrapper *,fileWrapper);

@end