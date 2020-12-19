//
//  BaseTableViewCell.h
//  HeroCoinSDK
//
//  Created by admin on 2018/5/16.
//  Copyright © 2018年 zhutaofeng. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,CellSourceType) {
    CellSourceTypeCode,
    CellSourceTypeXib,
};

typedef NS_ENUM(NSInteger, CoinTradeDetailCellTitleType) {
    CellTitleType_ToAddress = 0,
    CellTitleType_FromAddress,
    CellTitleType_GasFee,
    CellTitleType_Memo,
    CellTitleType_TxHash,
    CellTitleType_Block,
    CellTitleType_Timestamp,
} ;

@interface BaseTableViewCell : UITableViewCell

@property(nonatomic,strong)NSIndexPath *indexPath;
@property(nonatomic,  weak)id delegate;


//初始化子试图，子类需要重写
-(void)initView;
//设置数据，子类需要重写
-(void)setData:(id)data;
-(void)setData:(id)data indexPath:(NSIndexPath *)indexPath;
-(void)setData:(id)data indexPath:(NSIndexPath *)indexPath delegate:(id)delegate;
-(void)setData:(id)data other:(id)other indexPath:(NSIndexPath *)indexPath delegate:(id)delegate;

//获取手动计算高度,子类需要重写
+ (CGFloat)getManualHeightWithData:(id)data;
+ (CGFloat)getManualHeightWithData:(id)data other:(id)other;
+ (CGFloat)getManualHeightWithTableView:(UITableView *)tableView cellSourceType:(CellSourceType)type;
//获取手动计算高度,子类不重写
+ (CGFloat)getAutoHeightWithTableView:(UITableView *)tableView cellSourceType:(CellSourceType)type;
//获取cell
+(instancetype)dequeueReusableCell:(UITableView *)tableView cellSourceType:(CellSourceType)type;

@end
