//
//  UIPreviewActionGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPreviewActionGroup,UIPreviewActionGroup *);

@interface UIPreviewActionGroup (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPreviewActionGroup, UIPreviewActionGroup *);
TF_EC_MINSTANCE_INT(UIPreviewActionGroup,UIPreviewActionGroup *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPreviewActionGroup ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIPreviewActionGroup);


@end