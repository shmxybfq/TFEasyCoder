//
//  NSInputStream+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSInputStream,NSInputStream *);

@interface NSInputStream (TFEasyCoder)

TF_EC_MSTATIC_INT(NSInputStream, NSInputStream *);
TF_EC_MINSTANCE_INT(NSInputStream,NSInputStream *);






//superclass pros NSStream
TF_EC_CHAIN_PROP_INT(NSInputStream ,id<NSStreamDelegate> ,delegate);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSInputStream ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSInputStream ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSInputStream ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSInputStream ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSInputStream ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSInputStream ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSInputStream ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSInputStream ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSInputStream ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSInputStream ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSInputStream ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSInputStream ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSInputStream ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSInputStream ,long long,accessibilityNavigationStyle)





@end