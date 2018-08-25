//
//  HuCommonMethod.h
//  HuCategoryKit
//
//  Created by wanggang on 2018/8/22.
//

#import <Foundation/Foundation.h>

@interface HuCommonMethod : NSObject

//资源获取函数,可区分并指定皮肤类型
+ (UIFont *)systemFontOfSize:(CGFloat)fontSize WithStyleType:(NSString *)styleType;
/**
 * @brief   全局统一控制字体函数
 * @return  字体对象指针
 * @desc    默认字体为@"Arial-BoldMT"
 */

+ (UIFont *)systemFontOfSize:(CGFloat)fontSize;

/**
 * @brief   全局统一控制字体函数
 * @return  字体对象指针
 * @desc    默认字体为@"PingFangSC-Regular
 */
+ (UIFont *)systemFontOfPixelSize:(NSUInteger)pxSize;
/**
 * @brief   全局统一控制字体函数
 * @param   fontFace 指定字体
 * @return  字体对象指针
 * @desc    默认字体为@"PingFangSC-Regular
 */
+ (UIFont *)systemFontOfPixelSize:(NSUInteger)pxSize withFontFace:(NSString*)fontFace;

/**
 * 适配SE
 */
+ (UIFont *)hfl_systemFontOfPixelSize:(NSUInteger)pxSize;

/**
 * @brief   根据字符串获取颜色的函数
 * @param   clrString 为颜色字符串形如：“#rrggbb”或“#rrggbbaa”,最后两位为透明度。
 * @return  颜色对象指针
 * @desc    透明度没有则默认为完全不透明
 */
+ (UIColor *)uiColorFromString:(NSString *)clrString;
/**
 获得指定大小，颜色，透明色的视图
 
 @return 视图
 */
+ (UIView *)separateView:(CGRect)frame color:(UIColor*)color alpha:(CGFloat)alpha;

/**
 分割视图，bgColor 是整个视图的背景样色，lineColor 是分割视图边框的颜色
 
 @return 视图
 */
+ (UIView *)separateView:(CGRect)frame bgColor:(UIColor*)color lineColor:(UIColor*)lineColor;

/**
 隐藏多余cell的分割线
 @param tableView 需要隐藏的表格
 */
+ (void)setExtraCellLineHidden: (UITableView *)tableView;

//适配iOS11
+ (void)automaticTableviewBar:(UITableView *)tableView vc:(UIViewController *)vc;

@end
