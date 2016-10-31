//
//  UILexiconEntry+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UILexiconEntry,UILexiconEntry *);

@interface UILexiconEntry (TFEasyCoder)

TF_EC_MSTATIC_INT(UILexiconEntry, UILexiconEntry *);
TF_EC_MINSTANCE_INT(UILexiconEntry,UILexiconEntry *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UILexiconEntry ,long long,accessibilityNavigationStyle)





@end