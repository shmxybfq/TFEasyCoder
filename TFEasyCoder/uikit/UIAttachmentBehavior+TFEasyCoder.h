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




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIAttachmentBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIAttachmentBehavior);


@end