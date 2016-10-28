//
//  UIAttachmentBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIAttachmentBehavior,UIAttachmentBehavior *);

@interface UIAttachmentBehavior (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAttachmentBehavior, UIAttachmentBehavior *);
TF_EC_MINSTANCE_INT(UIAttachmentBehavior,UIAttachmentBehavior *);


TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,CGPoint,anchorPoint);
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,double,length);
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,double,damping);
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,double,frequency);
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,double,frictionTorque);

@end