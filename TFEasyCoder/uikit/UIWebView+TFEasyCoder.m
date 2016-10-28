//
//  UIWebView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIWebView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIWebView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIWebView, UIWebView *);
TF_EC_MINSTANCE_IMP(UIWebView, UIWebView *);


TF_EC_CHAIN_PROP_IMP(UIWebView ,id<UIWebViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,scalesPageToFit)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,detectsPhoneNumbers)
TF_EC_CHAIN_PROP_IMP(UIWebView ,unsigned long long,dataDetectorTypes)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,allowsInlineMediaPlayback)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,mediaPlaybackRequiresUserAction)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,mediaPlaybackAllowsAirPlay)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,suppressesIncrementalRendering)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,keyboardDisplayRequiresUserAction)
TF_EC_CHAIN_PROP_IMP(UIWebView ,long long,paginationMode)
TF_EC_CHAIN_PROP_IMP(UIWebView ,long long,paginationBreakingMode)
TF_EC_CHAIN_PROP_IMP(UIWebView ,double,pageLength)
TF_EC_CHAIN_PROP_IMP(UIWebView ,double,gapBetweenPages)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,allowsPictureInPictureMediaPlayback)
TF_EC_CHAIN_PROP_IMP(UIWebView ,BOOL,allowsLinkPreview)

@end