//
//  NSPersonNameComponentsFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSPersonNameComponentsFormatter,NSPersonNameComponentsFormatter *);

@interface NSPersonNameComponentsFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSPersonNameComponentsFormatter, NSPersonNameComponentsFormatter *);
TF_EC_MINSTANCE_INT(NSPersonNameComponentsFormatter,NSPersonNameComponentsFormatter *);


TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,long long,style);
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,BOOL,phonetic);




//superclass pros NSFormatter
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSPersonNameComponentsFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSPersonNameComponentsFormatter);


@end