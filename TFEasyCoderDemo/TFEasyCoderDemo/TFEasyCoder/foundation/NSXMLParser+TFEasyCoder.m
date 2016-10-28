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

@end