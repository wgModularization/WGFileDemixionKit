//  Header.h
//  QuanQuanNursing
//
//  Created by huanghaipo on 16/1/20.
//  Copyright © 2016年 伯仲. All rights reserved.
//

#ifndef Header_h
#define Header_h

#define SYS_CLIENTVER  [[[NSBundle mainBundle] infoDictionary] objectForKey:@"sys-clientVersion"]

//全局宏开关
//******环境配置开关,打开TESTENV切换至测试环境, 打开UAT_ON是灰度测试环境，两个都关闭就是连接生产环境
//#define TESTENV_ON //开发环境
//#define UAT_ON  //灰度测试
//#define SIT_ON //测试环境

//===========================SIT 测试环境===============================

#ifdef SIT_ON

#define QuanQaunURL @"http://sit.317hu.com"//测试环境  护士培训2.1.1
//#define QuanQaunURL @"http://172.16.150.169:9090"
#define NurseTraningURL @"http://nursetrainsit.317hu.com"//开发测试环境  1.3.8
//#define NurseTraningURL @"http://nursetrain.jssrmyy.com"//开发测试环境
//#define NurseTraningURL @"http://nursetrain.sit1.317hu.com"//开发测试环境  1.3.8
#define COUPONS_DOMAIN_URL  @"http://couponsit.317hu.com"//VIP测试环境前缀

#define NurseTraninfHttpUrl @"http://nursetrainsit.317hu.com"
#define JIANGSU_URL @"http://nursetrain.jssrmyy.com"//江苏人民医院测试环境前缀
//#define NurseTraninfHttpUrl @"http://nursetrain.sit1.317hu.com"
#define NodeJsURL     @"https://easyadminsit.317hu.com/api/catalogs"
#define quanQuanImageUrl @"http://7xtqgc.com1.z0.glb.clouddn.com"//测试环境七牛服务器
#define UPLOAD_IMAGEURl  ([NSString stringWithFormat:@"%@/image", quanQuanImageUrl])
#define kHost @"172.16.150.201"
#define kPort 8000
#define kEnv (@"sit")
#define Hu_Bugly_ON   //腾讯异常捕获开关（目前只捕获线上的和UAT的）
#define Baidu_PUSH_API_KEY  @"H5C9vWWz31Pl2dc6eRgkYxVj"
#define NIM_APP_KEY @"4ff37913f11b81f62d00d1fdc1f80804"//
#define loginPhone @"13800000031"//内购账号
//疾病IP
#define kIllnessURL @"http://sit.317hu.com"//疾病单独接口

//测试环境数据统计
#define DataReportURL @"http://satisfaction.sit.317hu.com"
#define CourseCenterURL @"http://course.sit.317hu.com" //课程中心url
#define UserCenterURL @"http://ucsit.317hu.com:8082/userCentral-web" //用户中心
#define TradeCenterURL @"http://tc.sit.317hu.com/trade-center-web" //交易中心
#define CFYUrl @"http://cfy.sit.yiguanyuan.cn"
#define ShuLanUrl @"http://ygy.sit.yiguanyuan.cn"//内部测试
#define ShuLanyingzhiyinghui @"http://sit.yiguanyuan.cn" //应知应会前缀
#define hosId (894)
//===========================DEV 开发环境===============================

#elif defined TESTENV_ON
#define QuanQaunURL @"http://dev.317hu.com"//开发测试环境  1.3.8
//#define SC_NurseTraningURL @"http://172.16.110.17:8080"
//#define NurseTraningURL @"http://nursetraindev1.317hu.com"//开发测试环境
#define NurseTraningURL @"http://nursetraindev.317hu.com"//开发测试环境
//#define NurseTraningURL @"http://nursetrain.jssrmyy.com"//练习题域名 目前先用这个
#define JIANGSU_URL @"http://nursetrain.jssrmyy.com"//江苏人民医院测试环境前缀
#define COUPONS_DOMAIN_URL  @"http://coupondev.317hu.com"//VIP测试环境前缀


#define NurseTraninfHttpUrl @"http://nursetraindev.317hu.com"
#define NodeJsURL     @"https://easyadminsit.317hu.com/api/catalogs"
#define quanQuanImageUrl @"http://7xtqgc.com1.z0.glb.clouddn.com"//测试环境
#define UPLOAD_IMAGEURl  ([NSString stringWithFormat:@"%@/image", quanQuanImageUrl])
//#define quanQuanImageUrl @"http://7xnzni.com2.z0.glb.qiniucdn.com/"//七牛地址
#define kHost @"172.16.150.201"
#define kPort 8000
#define kEnv (@"test")
#define loginPhone @"15670967649"//内购账号
//疾病IP
#define kIllnessURL @"http://accurate.dev.317hu.com"//疾病单独接口

#define Baidu_PUSH_API_KEY  @"H5C9vWWz31Pl2dc6eRgkYxVj"
#define NIM_APP_KEY @"4ff37913f11b81f62d00d1fdc1f80804"//
//开发环境数据统计
#define DataReportURL @"http://satisfaction.dev.317hu.com"
#define CourseCenterURL @"http://course.dev.317hu.com"   //课程中心url
//#define CourseCenterURL @"http://172.16.150.150:8080"   //课程中心url 测试
#define UserCenterURL @"http://usercentral.dev.317hu.com:8081/userCentral-web" //用户中心
#define TradeCenterURL @"http://tc.dev.317hu.com/trade-center-web" //交易中心
#define CFYUrl @"http://cfy.dev.yiguanyuan.cn"//重附一接口
#define ShuLanUrl @"https://ygy.dev.yiguanyuan.cn"//树兰https
#define ShuLanyingzhiyinghui @"http://sit.yiguanyuan.cn"
#define hosId (894)
//===========================UAT 灰度环境===============================

#elif defined UAT_ON

#define QuanQaunURL @"https://uat.317hu.com"  //@"http://uat.317hu.com"//UAT环境
//#define NurseTraningURL @"http://nursetrain.jssrmyy.com"//开发测试环境  1.3.8
#define NurseTraningURL @"https://nursetrainuat.317hu.com"//开发测试环境  1.3.8
#define COUPONS_DOMAIN_URL  @"http://couponuat.317hu.com"//VIP测试环境前缀

#define NurseTraninfHttpUrl @"http://nursetrainuat.317hu.com"
#define JIANGSU_URL @"http://nursetrain.jssrmyy.com"//江苏人民医院测试环境前缀
#define NodeJsURL     @"http://easyadminuat.317hu.com/api/catalogs"
#define quanQuanImageUrl @"http://image.317hu.com"//正式环境
#define UPLOAD_IMAGEURl  ([NSString stringWithFormat:@"%@/image", quanQuanImageUrl])
#define kHost @"120.55.190.139"
#define kPort 8000
#define kEnv (@"uat")
#define loginPhone @"13282803513"//内购账号
//疾病IP
#define kIllnessURL @"http://accurate.uat.317hu.com"//疾病单独接口

#define Baidu_PUSH_API_KEY  @"H5C9vWWz31Pl2dc6eRgkYxVj"
#define NIM_APP_KEY @"5fc4decb835e7f8465a35fe4de160f95"//
//#define Hu_Bugly_ON   //腾讯异常捕获开关（目前只捕获线上的和UAT的11）
#define HuBPushModeProduction_ON

//UAT环境数据统计
#define DataReportURL @"http://uat.statistics.317hu.com"
#define CourseCenterURL @"http://uat.coursecenter.317hu.com"   //课程中心url
#define UserCenterURL @"http://uatusercentral.317hu.com/userCentral-web" //用户中心
#define TradeCenterURL @"http://tc.uat.317hu.com/trade-center-web" //交易中心
#define CFYUrl @"http://serviceuat.cy.3y7h.com"
#define ShuLanUrl @"https://uat.service.yiguanyuan.cn"//https接口
#define ShuLanyingzhiyinghui @"https://uat.yiguanyuan.cn"
#define hosId (894)
#else

//===========================正式环境===============================
#define QuanQaunURL  @"http://317hu.com"//正式环境
#define NurseTraningURL @"https://nursetrain.prd.317hu.com"
#define NurseTraninfHttpUrl @"http://nursetrain.prd.317hu.com"
#define JIANGSU_URL @"http://nursetrain.jsph.org.cn"//江苏人民医院测试环境前缀
#define COUPONS_DOMAIN_URL  @"http://coupon.317hu.com"//VIP测试环境前缀

#define NodeJsURL     @"https://easyadmin.317hu.com/api/catalogs"
#define quanQuanImageUrl @"http://image.317hu.com"//正式环境
#define UPLOAD_IMAGEURl  ([NSString stringWithFormat:@"%@/image", quanQuanImageUrl])
#define kHost @"120.55.190.139"
#define kPort 8000
#define loginPhone @"18268816410"//内购账号
//疾病IP
#define kIllnessURL @"http://accurate.317hu.com"//疾病单独接口


#define kEnv (@"pro") //生产别忘了打开
#define Baidu_PUSH_API_KEY  @"H5C9vWWz31Pl2dc6eRgkYxVj"
#define NIM_APP_KEY @"5fc4decb835e7f8465a35fe4de160f95"////中卫护信线上环境  注意317护线上也用这个
#define Hu_Bugly_ON   //腾讯异常捕获开关（目前只捕获线上的和UAT的）
#define HuBPushModeProduction_ON


//正式环境数据统计
#define DataReportURL @"http://statistics.317hu.com"
#define CourseCenterURL @"http://coursecenter.317hu.com"   //课程中心url
#define UserCenterURL @"http://usercentral.317hu.com/userCentral-web" //用户中心
#define TradeCenterURL @"http://tradecenter.317hu.com/trade-center-web" //交易中心
#define CFYUrl @"http://service.cy.3y7h.com"
#define ShuLanUrl @"https://service.yiguanyuan.cn"
#define ShuLanyingzhiyinghui @"https://www.yiguanyuan.cn"
#define hosId (894)
#endif

//===============================================================

//#define Hu_IM_ON  //IM相关宏开关  默认是关闭

#define QuanQaunURLJC @"http://172.16.120.28:8080"//贾昶
#define QuanQuanURLHZT @"http://172.16.150.169:6060" //
#define QuanQaunURLXQ @"http://172.16.110.54:8080"//刘先亮
#define QuanQaunURLLHW @"http://172.16.120.11:8080" //罗汉文
#define QuanQaunURSB @"http://172.16.110.5:8080" //沈斌
#define QuanQaunURLXZG @"http://172.16.150.173:8085" //谢中贵

//==============================全局宏开关=========================
//**********调试模式
//#define __DEBUG   //该开关默认都关闭


#ifdef __DEBUG
//debug模式下 不会将阿里埋点数据上传到线上环境库
#undef kEnv
#define kEnv (@"test")
//debug模式下 不上传奔溃日志
#undef Hu_Bugly_ON

#endif

#ifdef __DEBUG
//#define        AUTO_LOGIN
#define        TRACE_LOG
#define NSLog(format, ...) printf("\n[%s] %s [第%d行] %s\n", __TIME__, __FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ## __VA_ARGS__] UTF8String]);
#define  wy_LOG
#endif

//二级开关
#ifdef wy_LOG
#define        wyLog        NSLog
#else
#define        wyLog(format, ...)
#endif

#ifdef        TRACE_LOG
#define        TRACELOG        NSLog
#else
#define        TRACELOG(format, ...)
#endif
#ifdef      AUTO_LOGIN
//公司后台测试环境
//http://bzwechatdev.317hu.com/care-central/page/login  sa/a123456
//sit2.317hu.com


#define     LOGIN_ACCOUNT  @"15068752394"  //  测试账号
#define     LOGIN_PASSWORD @"a12345678"

#endif



#define kPushKey @"H5C9vWWz31Pl2dc6eRgkYxVj"//伯仲账号（appstore版本的）Key
//#define kPushKey @"cEpLCwfdYwCLlwviajiaTKP3"//智康账号（蒲公英版本的）Key


//NSLog开关 注释关闭 打开输出
#define SWITCH

#ifdef SWITCH
#define HULog(format, ...)  NSLog((format), ##__VA_ARGS__)
#else
#define HULog(...)
#endif


//判断设备的屏幕尺寸
//  4/4s系列
#define IS_SCREEN_35_INCH    (SCREEN_MAX_LENGTH<568)
//  5/5s系列
#define IS_SCREEN_40_INCH    (SCREEN_MAX_LENGTH==568)
//  6/7/8系列
#define IS_SCREEN_47_INCH    (SCREEN_MAX_LENGTH==667)
//  plus系列
#define IS_SCREEN_55_INCH    (SCREEN_MAX_LENGTH==736)
//  iphoneX
#define IS_IPHONEX (SCREEN_MAX_LENGTH==812)

//判定系统版本号
#define IOS10_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)

#define IOS9_OR_LATER  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)

#define IOS8_OR_LATER  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

#define IOS7_OR_LATER  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)

#define IOS6_OR_LATER  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)

//系统常用单例
#define kUserDefaults       [NSUserDefaults standardUserDefaults]
#define kNotificationCenter [NSNotificationCenter defaultCenter]
#define kFileManager        [NSFileManager defaultManager]
#define  _T(x)           NSLocalizedString(x, nil)
#define  IMG(x)          [UIImage imageNamed:x]


//aiden_macro

#define NurseId  ([[NSUserDefaults standardUserDefaults]stringForKey:@"nurseId"])
#define NurseName ([[NSUserDefaults standardUserDefaults]stringForKey:@"name"])
#define HospitalId ([[NSUserDefaults standardUserDefaults]stringForKey:@"hospitalId"])
#define HospitalName ([[NSUserDefaults standardUserDefaults] stringForKey:@"hospital"])
#define NurseLoginPhone [[NSUserDefaults standardUserDefaults] stringForKey:@"mobile"]
#define LoginId ([kUserDefaults stringForKey:@"loginPhoneNumber"])
#define If3175 ([LoginId isEqualToString:@"3175"])
#define UserTypeId ([[kUserDefaults objectForKey:@"userTypeId"] integerValue])
#define kHBRect(x,y,w,h) CGRectMake(x, y, w, y)
////是否是在手机上运行
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
//设计分辨率(点)
#define HHBWIDTH [UIScreen mainScreen].bounds.size.width
#define HHBHEIGHT [UIScreen mainScreen].bounds.size.height
//取最大
#define SCREEN_MAX_LENGTH MAX(HHBWIDTH, HHBHEIGHT)
//取最小
#define SCREEN_MIN_LENGTH MIN(HHBWIDTH, HHBHEIGHT)
#define kWidthScale kFontScale
#define curAccount_password_key @"curAccoutPassword"
#define curAccount_password_value [[NSUserDefaults standardUserDefaults]stringForKey:@"curAccoutPassword"]
#define KHistorySearchPath [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:@"HuSearchhistories.plist"]
#define kHuVipExpireTime [kUserDefaults objectForKey:@"hbVipExpireTime"] //vip到期时间
#define kHuVipFlag       [kUserDefaults integerForKey:@"hbVipFlag"] //showFlag; 0=不是vip ;1=是vip已过期; 2=是VIP

#define random(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)/255.0]
#define Hu_aiden_randomColor random(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))
#define Hu_hide_tabBar_height HHBHEIGHT-menuBarView_height-15
#define Hu_default_section_height 0.001
#define Hu_default_zero (0)
#define Hu_5_section_height (5)
#define Hu_10_section_height (10)

//coord
#define Hu_aiden_max_label_height 25 //标题Label高度
#define Hu_aiden_middle_height 20
#define Hu_aiden_least_height 16
#define Hu_aiden_margin_xPos 15
#define Hu_aiden_margin_yPos 10
#define Hu_aiden_line_height 0.5
#define Hu_aiden_zero (0)
#define Hu_aiden_5interval 5
#define Hu_aiden_10interval 10

//fondsize
#define Hu_aiden_21fontSize kHuFont(21)
#define Hu_aiden_21font 21
#define Hu_aiden_18fontSize kHuFont(18)
#define Hu_aiden_18font 18
#define Hu_aiden_16fontSize kHuFont(16)
#define Hu_aiden_16font 16
#define Hu_aiden_14fontSize kHuFont(14)
#define Hu_aiden_14font 14
//颜色
#define Hu_section_color kHuColor(#F5F5FA)
#define Hu_aiden_border_line_color kHuColor(#E5E5E5)


//对自己弱引用
#define WS(weakSelf)  __weak typeof(self)weakSelf = self

//属性传值关键字
#define HuProperty @"property"
//修改初始化方法关键字
#define HuInitWith @"initWith"



//
#ifdef IMAGE_DONOT_USESYS  //默认使用系统的
#define IMAGEOFFILE HuConfigration getImgFile
#else
#define IMAGEOFFILE UIImage imageNamed
#endif

#endif /* Header_h */
