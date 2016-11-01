//
//  UIDictationPhrase+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDictationPhrase,UIDictationPhrase *);

@interface UIDictationPhrase (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDictationPhrase, UIDictationPhrase *);
TF_EC_MINSTANCE_INT(UIDictationPhrase,UIDictationPhrase *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIDictationPhrase ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIDictationPhrase);


@end