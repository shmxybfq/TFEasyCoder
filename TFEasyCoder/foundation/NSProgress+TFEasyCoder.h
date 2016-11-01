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




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSProgress ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSProgress ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSProgress ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSProgress ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSProgress ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSProgress ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSProgress ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSProgress ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSProgress ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSProgress ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSProgress ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSProgress ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSProgress ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSProgress ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSProgress);


@end