//
//  NSByteCountFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSByteCountFormatter,NSByteCountFormatter *);

@interface NSByteCountFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSByteCountFormatter, NSByteCountFormatter *);
TF_EC_MINSTANCE_INT(NSByteCountFormatter,NSByteCountFormatter *);


TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,unsigned long long,allowedUnits);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,long long,countStyle);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,allowsNonnumericFormatting);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,includesUnit);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,includesCount);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,includesActualByteCount);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,adaptive);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,zeroPadsFractionDigits);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,long long,formattingContext);




//superclass pros NSFormatter
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSByteCountFormatter);


@end