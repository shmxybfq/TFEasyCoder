//
//  UICollectionViewFlowLayout+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionViewFlowLayout+TFEasyCoder.h"


@implementation UICollectionViewFlowLayout (TFEasyCoder)





-(UICollectionViewFlowLayout  *(^)(double  minimumLineSpacing))set_minimumLineSpacing{
    __weak typeof(self) weakSelf = self;
    return ^(double  minimumLineSpacing){
        weakSelf.minimumLineSpacing = minimumLineSpacing;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(double  minimumInteritemSpacing))set_minimumInteritemSpacing{
    __weak typeof(self) weakSelf = self;
    return ^(double  minimumInteritemSpacing){
        weakSelf.minimumInteritemSpacing = minimumInteritemSpacing;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(CGSize  itemSize))set_itemSize{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  itemSize){
        weakSelf.itemSize = itemSize;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(CGSize  estimatedItemSize))set_estimatedItemSize{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  estimatedItemSize){
        weakSelf.estimatedItemSize = estimatedItemSize;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(long long  scrollDirection))set_scrollDirection{
    __weak typeof(self) weakSelf = self;
    return ^(long long  scrollDirection){
        weakSelf.scrollDirection = scrollDirection;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(UIEdgeInsets  sectionInset))set_sectionInset{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  sectionInset){
        weakSelf.sectionInset = sectionInset;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(BOOL  sectionHeadersPinToVisibleBounds))set_sectionHeadersPinToVisibleBounds{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  sectionHeadersPinToVisibleBounds){
        weakSelf.sectionHeadersPinToVisibleBounds = sectionHeadersPinToVisibleBounds;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(BOOL  sectionFootersPinToVisibleBounds))set_sectionFootersPinToVisibleBounds{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  sectionFootersPinToVisibleBounds){
        weakSelf.sectionFootersPinToVisibleBounds = sectionFootersPinToVisibleBounds;
        return weakSelf;
    };
}





//superclass pros UICollectionViewLayout
//superclass pros NSObject
-(UICollectionViewFlowLayout  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UICollectionViewFlowLayout  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end