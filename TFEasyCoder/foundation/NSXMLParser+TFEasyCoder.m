//
//  NSXMLParser+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSXMLParser+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSXMLParser (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSXMLParser, NSXMLParser *);
TF_EC_MINSTANCE_IMP(NSXMLParser, NSXMLParser *);


TF_EC_CHAIN_PROP_IMP(NSXMLParser ,id<NSXMLParserDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,BOOL,shouldProcessNamespaces)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,BOOL,shouldReportNamespacePrefixes)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,unsigned long long,externalEntityResolvingPolicy)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,NSSet *,allowedExternalEntityURLs)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,BOOL,shouldResolveExternalEntities)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSXMLParser ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSXMLParser);


@end