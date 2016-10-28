//
//  UIBarButtonItemGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIBarButtonItemGroup,UIBarButtonItemGroup *);

@interface UIBarButtonItemGroup (TFEasyCoder)

TF_EC_MSTATIC_INT(UIBarButtonItemGroup, UIBarButtonItemGroup *);
TF_EC_MINSTANCE_INT(UIBarButtonItemGroup,UIBarButtonItemGroup *);


TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,NSArray *,barButtonItems);
TF_EC_CHAIN_PROP_INT(UIBarButtonItemGroup ,UIBarButtonItem *,representativeItem);


@end