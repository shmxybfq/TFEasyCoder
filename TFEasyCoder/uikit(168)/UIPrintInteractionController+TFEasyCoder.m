//
//  UIPrintInteractionController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPrintInteractionController+TFEasyCoder.h"


@implementation UIPrintInteractionController (TFEasyCoder)





-(UIPrintInteractionController  *(^)(UIPrintInfo *  printInfo))set_printInfo{
    __weak typeof(self) weakSelf = self;
    return ^(UIPrintInfo *  printInfo){
        weakSelf.printInfo = printInfo;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(id<UIPrintInteractionControllerDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UIPrintInteractionControllerDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(BOOL  showsNumberOfCopies))set_showsNumberOfCopies{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsNumberOfCopies){
        weakSelf.showsNumberOfCopies = showsNumberOfCopies;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(BOOL  showsPaperSelectionForLoadedPapers))set_showsPaperSelectionForLoadedPapers{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsPaperSelectionForLoadedPapers){
        weakSelf.showsPaperSelectionForLoadedPapers = showsPaperSelectionForLoadedPapers;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(UIPrintFormatter *  printFormatter))set_printFormatter{
    __weak typeof(self) weakSelf = self;
    return ^(UIPrintFormatter *  printFormatter){
        weakSelf.printFormatter = printFormatter;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(NSArray *  printingItems))set_printingItems{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  printingItems){
        weakSelf.printingItems = printingItems;
        return weakSelf;
    };
}






//superclass pros NSObject
-(UIPrintInteractionController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIPrintInteractionController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end