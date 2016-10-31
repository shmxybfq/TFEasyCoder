//
//  UIPrintPaper+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPrintPaper,UIPrintPaper *);

@interface UIPrintPaper (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPrintPaper, UIPrintPaper *);
TF_EC_MINSTANCE_INT(UIPrintPaper,UIPrintPaper *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPrintPaper ,long long,accessibilityNavigationStyle)





@end