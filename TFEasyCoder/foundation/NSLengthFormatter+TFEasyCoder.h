//
//  NSLengthFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLengthFormatter,NSLengthFormatter *);

@interface NSLengthFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLengthFormatter, NSLengthFormatter *);
TF_EC_MINSTANCE_INT(NSLengthFormatter,NSLengthFormatter *);


TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,NSNumberFormatter *,numberFormatter);
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,long long,unitStyle);
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,BOOL,forPersonHeightUse);




//superclass pros NSFormatter
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSLengthFormatter);


@end