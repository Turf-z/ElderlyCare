//
//  ZJZCenterSection.h
//  ElderlyCare
//
//  Created by Jzzhou on 16/3/10.
//
//

#import <Foundation/Foundation.h>
@class ZJZCenterItem;

@interface ZJZCenterSection : NSObject
/** 头部标题 */
@property (strong, nonatomic) NSString *headerTitle;
/** 尾部标题 */
@property (strong, nonatomic) NSString *footerTitle;
/** 行数 */
@property (strong, nonatomic) NSMutableArray *items;
/** 标题 */
@property (strong, nonatomic) NSString *title;

+ (instancetype)initWithHeaderTitle:(NSString *)headerTitle footerTitle:(NSString *)footerTitle;
//添加Item
-(void)addItem:(ZJZCenterItem*)item;
//添加自定义标题的行
-(void)addItemWithTitle:(NSString*)title;
//添加带有左图标的行
-(void)addItemWithTitle:(NSString*)title Image:(UIImage*)image;

@end
