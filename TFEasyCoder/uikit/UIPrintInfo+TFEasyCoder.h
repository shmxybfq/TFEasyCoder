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





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPrintInfo ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIPrintInfo);


@end