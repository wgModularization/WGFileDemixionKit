//
//  GlobNotifyDefine.h
//  317hu
//
//  Created by 朱伟特 on 16/6/23.
//  Copyright © 2016年 伯仲. All rights reserved.
//

#ifndef GlobNotifyDefine_h
#define GlobNotifyDefine_h

typedef void(^blk_Float)(CGFloat);
typedef void(^blk_t)(void);
typedef void(^blk_Int)(NSInteger);
typedef void(^blk_NSString) (NSString*);
typedef void(^blk_button)(UIButton *);
typedef void(^TypeBlock)(NSInteger section, NSInteger row, BOOL isChange);
/**
 *  通知名称
 *
 *  @return 通知等的名称
 */
#define kModifyEditStatusNotification @"modifyEditStatus"
#define kEditCellSystem @"editCellSystem"
#define kEditCellHospital @"editCellHospital"
#define kFinishEditCellSystem @"finishEditCellSystem"
#define kFinishEditCellHospital @"finishEditCellHospital"
#define kNotificationRed @"notificationRed"
#define kTabBarHideRed @"tabBarHideRed"
#define kParamURL @"url"
#define kParamTitle @"title"
#define kShowTitleType @"show_title_type" //1就是用document.title
#define kBeginEditMyHospitalCollect @"BeginEditMyHospitalCollect"
#define kFinishEditMyHospitalCollect @"FinishEditMyHospitalCollect"
#define kEditMyCollectStop @"EditMyCollectStop"
#define kTheLatestIntegral @"TheLatestIntegral"
#define kHideNavigation @"HideNavigation"
#define kCourseBuySuccess @"CourseBuySuccess"
#define kNotificationBuySuccess @"notificationBuySuccess"
#define kCoinCount @"coinCount"
#define kBuyCoinSuccess @"buyCoinSuccess"
#define kPaymentGetStatus @"PaymentGetStatus" //获取第三方支付结果
#define kPaymentSucceed @"paymentSucceed "    //支付成功刷新
#define kPushClassNotification @"pushClassNotification"
#define kEditingCourseSuccess @"EditingCourseSuccess"       //编辑课程
#define kTrainingCourseVideoStop @"trainingCourseVideoStop" //播放暂停
#define kPatientHomePageRefresh @"patientHomePageRefresh"
#define kRecordLastIndexPath @"pecordLastIndexPath" //宣教课程记录索引值
#define kAddSuccessBack @"addSuccessBack"           //患者添加成功返回
#define kFocusOnSuccess @"focusOnSuccess"           //关注成功
#define kPushCourse50 @"单次推送课程不可超过50篇"
#define kPushCourse20 @"单次推送建议20篇以内，超过50篇将限制推送"
//socket相关通知
#define kRefreshPushCourceNotification @"refreshPushClass"        //课程推送
#define kPatientReadingRecordNotification @"patientReadingRecord" ////病人阅读记录
#define kPatientApplyNotification @"patientApply"                 //病人申请消息
#define KOutPatientNotification @"outPatient"                     //住院患者列表
//考试列表相关通知
#define kRefreshExamListNotification @"refreshExamList"             //刷新考试通知列表
#define kEaxmOrTrainRevokeNoification @"examOrTrainRevoke"          //考试或课程移除该用户后， 需要刷新相关页面代码【删除】
#define kRefreshQuizDetailPageNotifiaction @"refreshQuizDetailPage" //随堂测验答完题后，如果是首次答题，需要告知课程详情界面更新底部测试按钮
#define kRefreshOrderListPageNotification @"refreshOrderListPage"   //订单列表页面刷新
#define kRefreshNewAppleyDataNotification @"refreshNewAppleyData"   //患者入院申请数据刷新
#define kRemoveTextViewFocusNotification  @"removeTextViewFocus" //
//规培相关通知
#define kRefreshTrainMainPageNotification @"refreshTrainMainPage" //刷新培训主页通知

#define kWillResignActiveNotification @"willResignActive" //程序切换到后台
#define kDidBecomeActiveNotification @"didBecomeActive"   //程序重新被唤起启动

//HTML5样式
#define CONTENT @"<!DOCTYPE html><html><head lang='en'><meta charset='UTF-8'><title></title><style>body{width:100%;}*{max-width:100%!important;margin:0;padding:0;box-sizing:border-box!important;word-wrap:break-word!important;word-break:break-all}.guidance-class-item{margin:0 15px 15px}p{clear:both;padding:0;margin:0;min-height:1em;white-space:normal}img,video{max-width:100%!important;height:auto!important}blockquote{margin:0;padding-left:10px;border-left:3px solid #dbdbdb}ol,ul,dl{*margin-right:0;padding:0 0 0 30px}hr{border:0;border-top:1px solid #ccc}td, th{word-wrap: break-word;word-break: break-all;border: 1px solid #DDD;}</style></head><body><div class='guidance-class-item' style='position:relative;'>"

#define STYLE1 @"<div class='guidance-class-item-content'><div class='content' style='position:relative'>"

#define STYLE2 @"</div></div>"

#define STYLE3 @"<div style='text-align: center;font-size:12px;height:40px;line-height:40px;border-top:0.5px solid #000;'><img style='width:12px;vertical-align:text-bottom;margin-right: 5px;' src='http://image.317hu.com/o_1avr7e7v71sjj7kn1ccmmmu1s1uh.png' />课程原创于"
#define STYLE4 @"</div>"
//课程来源
#define STYLE5 (@"</div><div style='text-align:center;font-size:12px;'>课程来源:")

//友盟组件
#define kNotificationRed @"notificationRed"     //有未读消息显示红点
#define kNotificationNoRed @"notificationNoRed" //未读消息已经没有了
#define kTabBarHideRed @"tabBarHideRed"

#define kUmengURL @"http://www.umeng.com/social"
#define UmengAppKey @"571ef5b8e0f55a61180028d8"
#define kWeChatShareAppKey @"wx31c0f18516eab2b8"
#define kWeChatShareAppSecret @"767478e60861083166221d2351d3dd9b"

#define kQQShareAppId @"1105335081"
#define kQQShareAppKey @"tXbkoD6SOuIiizFo"

//极光组件
#define kJPushChannel @"AppleStore"
//317护
#define kJPushAppKeyDEV @"48e343eba17b04995a92bd9f" //开发账号
#define kJPushAppKeyPRO @"8407040118fe7466ae98d7f1" //生产账号
//重附一
#define kJPushAppKeyCFYDEV @"e754d457c44440a80bf9569f" //开发账号
#define kJPushAppKeyCFYPRO @"61398e31cb7bd93bf2385a95" //生产账号
//树兰医院
#define kJPushAppKeySLDEV @"3e345e30203f795eab12f498" //开发账号
#define kJPushAppKeySLPRO @"dab1293013db7600f0527111" //生产账号


//业务宏相关
//课程页面 记忆功能，默认调转到上次访问的位置 最多记录10个页面
#define kPzLastBrowseStopPos @"lastBrowseStopPos"
#define maxSaveNum 10

//业务urlKey
#define kBusinessUrlKey @"businessUrlKey"
#define kNewGuidePictureLocalVersion @"newGuidePictiureLocalVersion"
#define kNewGuidePictureID @"newGuidePictureID"
#define kSysClientVerioon @"sys_clientVersion"
#define kRegisterAgreementFlag @"registerAgreementFlag"                   //是否注册过标志
#define kAuditStatusFlag @"auditStatus"                                   // 0 申请  1 审核中  2  成功  3 失败
#define kHospitalsList @"hospitalsList"                                   //医院列表
#define kHospitalsTreeList @"hospitalsTreeList"                           //医院树列表
#define kManagermentTreeList @"managermentTreeList"                       //权限管理树列表
#define kManagermentForSelf @"managermentForSelf"                         //当前用户所属层级
#define kDeptAppendTreeList @"hospitalsTreeList"                          //科室管理员管理树列表
#define kNeedAutoAlertOpenRegristerView @"needAutoAlertOpenRegristerView" //需要自动弹出开放注册提示框 （新注册的用户）

#define kIRAuditKey @"IRaudit"                   //IR=instant Refresh(后台返回需要实时刷新)
#define kIRHospitalsList @"IRHospitalsList"      //后台返回医院实时刷新列表
#define kIRhospitalIdKey @"IRHospitalId"         //IR=instant Refresh(后台返回需要实时刷新)
#define kJumpUrlKey      @"jumpUrlKey"           //系统消息跳转url

#define kNIMACCID @"nim_accid"                   //云信id
#define kNIMToken @"nim_token"                   //云信id密码
#define kMessageType @"msg_type"                 //推送类型   1课程，2满意度，3随访
#define kURLKey @"url"                           //
#define kRuleTitleKey @"ruleTitle"               //随访副标题
#define kMainTilteKey @"main_title"              //主标题
#define kSubTitleKey @"sub_title"                //副镖旗
#define kImageUrlKey @"img_url"                  //图片url （宣教图片url）
#define kEduClassIdKey @"education_classId"      //宣教课程id
#define kHuTypeKey @"hu_type"                    //选择类型 （很多页面可以复用）
#define kHuExitTimeParamKey @"hu_exitTime_Param" //(程序退出时间相关参数key)
#define kStudyTimeCacheKey @"hu_studyTimeCache"  //学习时间数据库缓存
#define kStudyTimePreKey @"ST"  //最好不好改，和数据库相关
#define kDocStudyTimeCacheKey @"hu_docStudyTimeCache" //文档学习时间数据库缓存

//业务通知
#define NTESNotificationLogout @"NTESNotificationLogout"

//业务提示语
#define HuSusessAlertMessage @"提交成功"
#define HuNIMLoginFailAlertMessage @"聊天账号登录失败，请退出账号重新登录。"
#define HuNIMAccountErrorMessage @"聊天账号为空，请退出账号重新登录。"
#define HuNIMCancelAttentionMessage @"您已取消关注该患者，无法发送消息。"
#define HuTimePromptMessage @"开始工作时间不能大于当前时间。"

//字体相关
#define UIFONT40 [HuCommonMethod systemFontOfSize:40.0f]
#define UIFONTBOLD40 [HuCommonMethod systemFontOfSize:40.0f WithStyleType:@"bold"]
#define UIFONT32 [HuCommonMethod systemFontOfSize:32.0f]
#define UIFONTBOLD32 [HuCommonMethod systemFontOfSize:32.0f WithStyleType:@"bold"]
#define UIFONT20 [HuCommonMethod systemFontOfSize:20.0f]
#define UIFONTBOLD20 [HuCommonMethod systemFontOfSize:20.0f WithStyleType:@"bold"]
#define UIFONT18 [HuCommonMethod systemFontOfSize:18.0f]
#define UIFONTBOLD18 [HuCommonMethod systemFontOfSize:18.0f WithStyleType:@"bold"]
#define UIFONT17 [HuCommonMethod systemFontOfSize:18.0f]
#define UIFONTBOLD17 [HuCommonMethod systemFontOfSize:17.0f WithStyleType:@"bold"]
#define UIFONT16 [HuCommonMethod systemFontOfSize:16.0f]
#define UIFONTBOLD16 [HuCommonMethod systemFontOfSize:16.0f WithStyleType:@"bold"]
#define UIFONT15 [HuCommonMethod systemFontOfSize:15.0f]
#define UIFONTBOLD15 [HuCommonMethod systemFontOfSize:15.0f WithStyleType:@"bold"]
#define UIFONT14 [HuCommonMethod systemFontOfSize:14.0f]
#define UIFONTBOLD14 [HuCommonMethod systemFontOfSize:14.0f WithStyleType:@"bold"]
#define UIFONT12 [HuCommonMethod systemFontOfSize:12.0f]
#define UIFONTBOLD12 [HuCommonMethod systemFontOfSize:12.0f WithStyleType:@"bold"]
#define UIFONT10 [HuCommonMethod systemFontOfSize:10.0f]
#define UIFONTBOLD10 [HuCommonMethod systemFontOfSize:10.0f WithStyleType:@"bold"]


//IM埋点相关key
#define kReceiverKey @"receiver"
#define kSendTypeKey @"send_type"
#define kSendContentKey @"send_content"
//IM埋点相关 比较固定的部分
#define kSenderKey @"sender"
#define kSendTimeKey @"send_time"
#define kSendModeKey @"send_mode"
#define kDeviceBrand @"device_brand"
//广告相关埋点key
#define kAdvertisementIdkey @"advertisement_id"


//护理培训习题相关
#define kExerciseIdKey @"exerciseId"
#define kExerciseShowIdKey @"exerciseShowId"
#define kExerciseTypeKey @"exerciseType"
#define kExerciseTypeSingleValue @"exerciseTypeSignglValue"
#define kUserAnswerKey @"userAnswer"
#define kUserHiddenAnswerKey @"userHiddenAnswer"
#define kFinishKey @"finish" //1说明才是真正的答完 （填空题需要）

#define kSubmitPaper @"提交"
#define kLastQuestion @"上一题"
#define kExerciseCard @"题卡"
#define kHandInExam @"交卷"
#define kNextQusetion @"下一题"
#define kFinishCurQuestion @"完成"
#define kRequestMore @"请求更多"

#define kNurseTrainingSearchHistory @"nurseTraning_searchHistory"
#define kDiscoverSearchHistory @"Discover_searchHistory"
#define kIllnessSearchHistory @"illness_searchHistory"

#define KAllExercise @"试题解析"
#define kRightExercise @"只看正确题目"
#define kWrongExercise @"错题分析"

#define kExamTitle @"考试"
#define kQuizTitle @"随堂测验"
#define kRealTestTitle @"真题"
#define kNoRightSeeAnalyze @"考试答案不允许查看！"
#define kHuTestPracticeViewController @"HuTestPracticeViewController"               //答题类
#define kHuRealTestPracticeViewController @"HuRealTestPracticeViewController"       //真题答题类
#define kTrainTestNeedToKonwViewController @"TrainTestNeedToKonwViewController"     //考试须知
#define kTrainTestViewController @"TrainTestViewController"                         //我的考试 列表
#define kTrainDetailNewViewController @"TrainDetailNewViewController"               //课程详情 界面
#define kPersonalCenterViewController @"PersonalCenterViewController"               //我的 （个人中心）
#define kNurseTrainMsgViewController @"NurseTrainMsgViewController"                 //培训消息页面，考试消息页面
#define kFlowerMessViewController @"FlowerMessViewController"                       //鲜花消息页面
#define kMyHospitalMessageViewController @"MyHospitalMessageViewController"         //本院消息页面
#define kSystemMessagesViewController @"SystemMessagesViewController"               //系统消息页面
#define kHuMsgViewController @"HuMsgViewController"                                 //新增课程消息页面
#define kDiscoverCourseLibraryViewController @"DiscoverCourseLibraryViewController" //课程库页面
#define kAngelDrillViewController @"AngelDrillViewController"                       //余额界面
#define kDiscoverCourseDetailViewController @"DiscoverCourseDetailViewController"   //专家课程详情
#define kOnLineInterFlowViewController @"OnLineInterFlowViewController"             //专家问答
#define kHuScanViewController @"HuScanViewController"                               //扫码界面
#define kCuri_wkwebview_controller  @"Curi_wkwebview_controller"                    //通用web页面
#define kHuTrainPreDetailViewController @"HuTrainPreDetailViewController"           //培训课程中转界面
#define kPageTypeKey @"pageType"                                                    //页面类型

#define kLeaveTimeDefault @"3" //默认黑屏离开次数

#define kNursningCongressPromptMessage @"体验账号暂不支持哦"

#define ALERT_CONFIRM (100) //确认提示框tag号
#define ALERT_BACK (101)
#define ALERT_BACK_EXAM (102) //考试回退
#define videoPlaying_alert_back (103)
#define tag_begin_index (1000)
#define kHuViewTag_Start (100) //视图的起始Tag
//护士培训选修课程默认分页数
#define onePageSize (20)
#define onePageSize10 (10)

#define firstPageNum (1)

#define kInfomaionnStatusKey @"informationStatus"
#define InformationNotComplete @"10001"                       //需要完善个人信息
#define kInformationCompleteStatus @"10000"                   //信息完善
#define CompleteMessage @"您的信息不完整，请前往填写个人信息" //完善个人信息
#define kStandardTrainWelcomeTip @"strShowWelcomeTip"         //2.7.3 规培人员首页欢迎key
#define CancelText @"取消"
#define ConfirmText @"确定"
//护士培训数据库保存的数据
#define kExamExerciseKey @"examExercise"                       //题目
#define kExamUserAnsDicKey @"examUserAnsDic"                   //用户选择答案
#define kExamUserUploadModelKey @"examUserUploadMode"          //用户选择的答案，用于答题上传用的
#define kExamLastStopPageNoKey @"examLastStopPageNo"           //上次答题的位置
#define kExamRemainingTimeKey @"examRemainingTime"             //答题剩余时间
#define kExamAbsoluteTimeKey @"examAbsoluteTime"               //答题绝对时间，由考试第一次进入加上考试时间算出的总秒数
#define kExamUserAccumulatedTimeKey @"examUserAccumulatedTime" //用户累计用时时间 不能超过答题时间
//3.1.4
#define kExamPageDataKey @"examPageData" //分页数据  还有pageNum showTotalNum hasNextPage
#define kExamAllDoneExercisesKey  @"examAllDoneExercisesKey" //已答试题
#define kSimulateExamDBPreKey @"simulated"

#define kExamLeveTime @"examLeaveTime"                         //离开次数
#define kContinueExamKey @"2"                                  //数据库里有缓存这份试卷，显示成继续考试。
#define kContinueExamValue @"继续考试"
#define kOneMoreBtnValue @"再考一次"


//鲜花消息
#define kFromSystemMessage @"来自系统"

//自定控件
//进度条 GradualChangeColorView
#define gccCornerRadiusKey @"gccCornerRadius"
#define gccStartPointColorKey @"gccStartPointColor"
#define gccEndPointColorKey @"gccEndPointColor"

//倒计时
#define fontColorKey @"fontColorKey"
#define fontSizeKey @"fontSizeKey"
#define isSecond @"isSecond"


///////////////////////////////////////

//公用
//请求方式
#define requestModeKey @"requestModeKey"
#define postReqMode @"postReqMode"
#define getReqMode @"getReqMode"
#define putReqMode @"putReqMode"
#define deleteReqMode @"deleteReqMode"

//数据统计 相关列
#define column_name_departName @"科室名称"
#define column_name_wardName @"病区名称"
#define column_name_nurseName @"护士姓名"
#define column_name_pushAmount @"推送量"
#define colunm_name_readAmount @"阅读量"
#define colunm_name_inpatientAmount @"住院患者数"
#define colunm_name_newPatientAmount @"新增患者数"

//安全性相关key (header默认会变成小写)
#define server_key @"salt"             //服务端跟客户端一起约定的特定图片，由特定图片计算出的MD5值(其实是后端给的图片)
#define token_key @"token"             //客户端登录成功后服务端返回的安全令牌，用于校验接口访问的合法性，【一般登录成功后，正确情况下都不变】
#define guid_key @"guid"               //客户端请求链接唯一参数,类似uuid,每次请求都需要重新获取,每次都不一样类似时间戳的概念
#define submitToken_key @"submittoken" //客户端提交表单的安全令牌；（只有post的时候才提交），防止重复提交用。 header默认会变小写
#define client_sign_key @"sign" //生成规则
#define deviceNumber_key @"deviceNumber" //客户端设备号
#define obligateToken_key @"obligatetoken" //服务端预留Token,免登录用

#define apiCode_key  @"apiCode" //过渡版本，区分新老版本用的 值为1后台就校验，以后后台会去掉

//2.6.3添加 如果是api_001错误 重新请求submitToken后，在自动发包
#define autoRetryReqKey @"autoRetryReq"//自动重新请求

/////////////////////

//程序启动第一个接口返回站点相关数据
#define site_url_key @"httpConfig"
#define aliYunLog_key @"aLiYunLog"
#define user_head_image_key @"user_head_image"  //用户头像
#define video_spaceName_key @"upToken" //视频空间名称
#define image_spaceName_key @"imageToken" //图片空间名称
#define video_link_key @"qiniuDomain" //视频链接
#define image_link_key @"qiniuImageUrl" //图片链接
#define imageSiteUrl ([QNInfo sharedQNInfo].QNImageUrl)// 其实是qiniuImageUrl获取到的值


//苹果审核总开关（大开关）//大开关会把业务子开关的默认值推送过来
#define pgshSwitchKey @"pgshSwitch"

//苹果审核业务子开关
#define appleInPurchaseKey @"appleInPurchase" //苹果内购开启标志 默认0，关闭， 1开启【一般上线审核的版本才是开启】
#define withdrawSupportKey @"withdrawFlag" //提现功能默认是0关闭，如果审核通过,后台可以配置成1,打开提现功能

#define discoverHomePageConfigureKey @"discoverHomePageConfigure" //发现首页九宫格配置项
#define huCustomSkinDataKey @"huCustomSkinDataKey"//换肤最新数据关键字


#define kJoinStudy @"加入学习"
#define kStartStudy @"开始学习"
#define kIntoStudy @"进入学习"
#define kJoinStudySuccess @"joinStudySuccess"


//交易开发注册版本宏
#define kUnfinish @"未完成"
#define kfinish @"已完成"
#define kCancel @"已取消"
#define kPayConfirming @"未支付"
#define kNeedComplexPasswordMsg  @"需要使用复杂密码登录"
#define successKey @"success"
#define errMsgKey @"errMsg"  //一般先读这个，再读errCode
#define errCodeKey @"errCode"

#define kNeedLogin @"needLogin"  //需要登录标识


//消息通知dic结构相关key
#define kExpertNameKey @"expertName"
#define kMsgItemIdKey  @"msgItemId" //可能是专家id, 也可能是课程id
#define kMsgContentKey @"msgContent"
#define kOldMessageKey @"oldMessage" //以前的消息，只有content，用这个值就行了

//规培人员key
#define kStandardTrainUserRole @"StandardTrainUserRole"  //(规培人员类型) 1：不是规培医院，2：是规培医院，不是规培人员，3：是规培人员
//规培按钮宏
#define kEnterExam @"点击进入考试"
#define kEnterTrain @"点击进入培训"
#define kCheckExamReport @"查看考试报告"

//2.6.2添加 考试类型 【基本思想，将大类型考试 拆分成如下几种类型】
#define kWaitExam @"等待考试"
#define kBeginExam @"开始考试"
#define kScanSignInExam @"扫码签到"  //考试类型扫码签到
#define kScanAndWaitExam @"已签到，等待考试"
#define kViewQRCode @"查看二维码"

//一行 测试文本 text
#define oneLineText @"text"

//极光推送的dict字段key
#define JPushRegisterDeviceId @"JPushRegisterDeviceId"

#define showIdSplite @"-"


/////////////////////////////////////////////////////////////////////
//颜色相关宏

#define rgbaColor(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define rgbColor(r,g,b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0f]

#define BLACKTitleColor [UIColor colorWithRed:81.0/255.0 green:81.0/255.0 blue:81.0/255.0 alpha:1]//主文字颜色
#define BLUETitleColor   [UIColor colorWithRed:26/255.0f green:146/255.0f blue:255/255.0f alpha:1]//蓝色文字
#define GRAYTitleColor [UIColor colorWithRed:165.0/255.0f green:165.0/255.0f blue:165.0/255.0f alpha:1]//辅助文字颜色

#define NavigationBGColor [UIColor colorWithRed:26/255.0f green:146/255.0f blue:255/255.0f alpha:1]//导航条背景颜色
#define SELFBGColor [UIColor colorWithRed:0.96 green:0.96 blue:0.98 alpha:1.00]//背景色
#define VERYGRAYTitleColor [UIColor colorWithRed:205.0/255.0f green:205.0/255.0f blue:205.0/255.0f alpha:1]//

#define kBlueColor huColor(#1A92FF)//主蓝色背景
#define kBlackColor huColor(#333333)//主字体颜色
#define kGrayColor huColor(#A5A5A5)//副字体颜色


//床号背景色
#define doubtBedNameColor [UIColor colorWithRed:0xFF/255.0f green:0x7C/255.0f blue:0x7A/255.0f alpha:1]//有疑问
#define emptyBedNameColor [UIColor colorWithRed:0xC7/255.0f green:0xC7/255.0f blue:0xCC/255.0f alpha:1]//空床
#define newBedNameColor [UIColor colorWithRed:0xA2/255.0f green:0xDD/255.0f blue:0x78/255.0f alpha:1]//新入院
#define normalBedNameColor [UIColor colorWithRed:0x54/255.0f green:0xC7/255.0f blue:0xFC/255.0f alpha:1]//正常


//按钮不可点击的背景颜色和文字颜色
#define  kBtnNotClickBGColor [HuCommonMethod uiColorFromString:@"#EBEBF0"]
#define  kBtnNotClickTitleBGColor [HuCommonMethod uiColorFromString:@"#D2D2D2"]

//树兰医院主题颜色
#define ShuLanMainColor [HuCommonMethod uiColorFromString:@"#28B7A3"]

/////////////////////////////////////////////////////////////////////
//字体相关宏
#define fontSize(size)  [UIFont systemFontOfSize:size]

#define kFontScale (SCREEN_MIN_LENGTH / 375.0 )  //iphone6为模板



//一些简写约定
/*
 lItem = leftItem rItem = rightItem  lFlap = leftFlap  rFlap = rightFlap uFlap = upFlap dFlap = downFlap
 rBtn = rightBtn  lTilte = leftTitle uTitle = upTitle rContent = rightContent dContent = downContent
 lImage = leftImage rChoiceBtn = rightChoiceBtn   uMargin = upMargin dMargin = downMargin
 */
//01分辨率
//基础规范1.0分辨率是按照iphone5的分辨率作为设计标准（@2x 640*1136）
//公共宏模块
#define common_margin 15
#define line_height 0.5
#define line_width 0.5
#define mainBtn_font fontsize_T2
#define PingFangSC_Regular     @"PingFangSC-Regular"  //默认字体
#define PingFangSC_Light       @"PingFangSC-Light"  //默认字体
#define menuBarView_height ([UIScreen mainScreen].bounds.size.height==812?83:49) //底部menu bar 高度
#define border_line_color ([HuCommonMethod uiColorFromString:@"#E5E5E5"])
#define top_nav_bar_height (HHBHEIGHT==812?88:64) //顶部导航栏高度
#define view_bgcolor [UIColor colorWithRed:236.0/255.0f green:241.0/255.0f blue:242.0/255.0f alpha:1]//背景色
#define huColor(colorStr) ([HuCommonMethod uiColorFromString:@#colorStr])
#define fs(size) ([HuCommonMethod systemFontOfPixelSize:size])

#define hfl_fs(size) ([HuConfigration hfl_systemFontOfPixelSize:size])

//02主色调
//此规范以举例下面的蓝色为主色调，其他各个app可自行选择合适的颜色
#define blue_color ([HuCommonMethod uiColorFromString:@"#50ABF2"])    //蓝色系 用于护理，护士
#define pink_color ([HuCommonMethod uiColorFromString:@"#FF7373"])    //粉色系 用于儿保，妇幼，婴儿，急诊
#define deep_blue_color ([HuCommonMethod uiColorFromString:@"#4D65C4"]) //深蓝色（偏紫色）用于睡眠，医院
#define green_color ([HuCommonMethod uiColorFromString:@"#65D566"]) //绿色系 用于医院，呵护相关婴儿，社区养老
#define mainColor ([HuCommonMethod uiColorFromString:@"#1A92FF"])  //主按钮
//03字体
//字体应用规范，定义字体尺寸，颜色，选用字体等细节。在具体的UI中，参考字体的规范选择合适的字体
//注H5规范字体使用系统默认字体，ios默认 中文字体：苹方（PingFangSC）英文字体：SF UI Display 数字字体： Avenir Next LT-pro;安卓使用黑体
//字体适配规则，除了5.5寸的其他都是标准的， 适配规则  标准对应（5.5寸）：20（38），24（44），28（48），32（52），36（54）
//用于titlebar,主次按钮的字体大小
#define fontsize_T1 ([HuCommonMethod systemFontOfPixelSize:36])  //36px
//一级标题，暗提示，产品名称，警示按钮文字，通栏按钮文字，情感化空白页面说明文字
#define fontsize_T2 ([HuCommonMethod systemFontOfPixelSize:32])  //32px
//卡片标题，标题栏两边按钮位子，正文内容，二级tab,副标题和说明提示
#define fontsize_T3 ([HuCommonMethod systemFontOfPixelSize:28])  //28px
//图表辅助文字，备注文字，线框小按钮文字
#define fontsize_T4 ([HuCommonMethod systemFontOfPixelSize:24])  //24px
//底部标签文字，辅助文字里特别不重要的建议使用20px
#define fontsize_T5 ([HuCommonMethod systemFontOfPixelSize:20])  //20px


//font_face @"PingFangSC-Light"
#define fontsize_T1_light ([HuCommonMethod systemFontOfPixelSize:36 withFontFace:PingFangSC_Light])  //36px
#define fontsize_T2_light ([HuCommonMethod systemFontOfPixelSize:32 withFontFace:PingFangSC_Light]）  //32px
#define fontsize_T3_light ([HuCommonMethod systemFontOfPixelSize:28 withFontFace:PingFangSC_Light])  //28px
#define fontsize_T4_light ([HuCommonMethod systemFontOfPixelSize:24 withFontFace:PingFangSC_Light])  //24px
#define fontsize_T5_light ([HuCommonMethod systemFontOfPixelSize:20 withFontFace:PingFangSC_Light])  //20px

//字体颜色
#define fontcolor_C1 ([HuCommonMethod uiColorFromString:@"#ffffff"])  //仅用于标题，按钮和深色背景中 白色
#define fontcolor_C2 ([HuCommonMethod uiColorFromString:@"#333333"])  //标题，标签，输入内容，正文文本
#define fontcolor_C3 ([HuCommonMethod uiColorFromString:@"#666666"])  //tab未选文字，次要辅助文本
#define fontcolor_C4 ([HuCommonMethod uiColorFromString:@"#a5a5a5"]) //说明，备注，辅助文本
#define fontcolor_C5 ([HuCommonMethod uiColorFromString:@"#50ABF2"])  //可点链接色，tab已选颜色，主色调
#define fontcolor_C6 ([HuCommonMethod uiColorFromString:@"#FF8208"])  //重点提示色，可根据业务自行使用
#define fontcolor_C7 ([HuCommonMethod uiColorFromString:@"#FF513C"])  //用于警示，错误，高危危险状态

//04导航栏－深底色 【暂无使用，用系统自带的】
#define navi_deep_left_xPos 15 //返回按钮距离最左边的间距
#define navi_deep_left_rMargin 5 //返回按钮与文字的间距
#define navi_deep_btns_margin 8 //返回文字与其它item的间距
#define navi_deep_title_font fontsize_T1_light //导航条标题文字的字号
#define navi_deep_title_color fontcolor_C1 //导航条标题文字颜色
#define navi_deep_rItem_rMargin 15 //导航条上右边item距离最右边的间距
#define navi_deep_rItem_dMargin 13 //导航条上右边item距离导航栏底部间距
#define navi_deep_rItem_width 18 //item的宽
#define navi_deep_rItem_height 18 //item的高
#define navi_deep_imgBtn_Margin 15 //右边图像按钮间距离

//05 导航栏－拓展导航栏
/*
 初始化的时候传入大小，将第二个参数的bool值设置为NO
 区分06中导航栏－浅底色中的拓展导航栏
 
 */
// HuNavigationBarExpand文件 只需要将bool值为NO

//06 导航栏－浅色底 【暂时没有用到】
//06.1 常规导航栏使用场景: item之间的间距和大小都与深底色(04)的一样
#define navi_light_leftBtn_titleColor fontcolor_C5 //返回按钮上文字的颜色
#define navi_light_leftBtn_font fontsize_T3_light //返回按钮文字的大小
#define navi_light_title_font fontsize_T1_light //常规导航条标题文字的字号
#define navi_light_title_color fontcolor_C2 //常规导航条标题文字颜色
#define navi_light_rItem_fillColor fontcolor_C5

//06.2 拓展导航栏：item之间的间距和大小与(05)一样，只不过文字的颜色选用主色调
// HuNavigationBarExpand文件 只需要将bool值为YES

//07标签栏
// HuTabBarViewController文件

//08 搜索Search<app基础规范>  [暂无做成控件] 注意：部分宏不起作用，原因是系统自己适配了。
#define search_bar_xPos 15
#define search_bar_yPos 15
#define search_bar_width_has_rBtn (HHBWIDTH - 50 - search_bar_xPos) //右边含按钮的大小
#define search_bar_height 29
#define search_bar_round_corner 4
#define search_bar_corner_color [HuCommonMethod uiColorFromString:@"#CCCCCC"]
#define search_bar_icon_xPos 5
#define search_bar_icon_width 14
#define search_bar_icon_yPos (search_bar_height - search_bar_icon_width) / 2.0
#define search_bar_font fontsize_T3
#define search_bar_content_xPos (40 - search_bar_xPos)  //通过放置一个空白视图（该值也是空白视图的宽度），使文字在指定位置输出

//09 tab切换
#define tab_select_title_color fontcolor_C5
#define tab_title_font fontsize_T3
#define tab_title_color [HuCommonMethod uiColorFromString:@"#666666"]
#define tab_switch_view_height 40

#define tab_select_line_heigth 2.5f //选中时下划线的高度
#define tab_select_line_color fontcolor_C5 //选中时下划线的颜色
#define tab_line_height line_height
#define tab_normal_line_color border_line_color
// HuSliderTabBarView 文件

//10按钮
//HuButton 文件
#define btn_width_big 290 //一行只有一个按钮
#define btn_width 137.5 //一行两个按钮（这个比较正常）
#define btn_height 42
#define btn_round_conner 5.0
#define mainBtn_bgColor ([HuCommonMethod uiColorFromString:@"#1A92FF"])  //主按钮
#define mainBtn_press_bgColor ([HuCommonMethod uiColorFromString:@"#2689d6"])
#define mainBtn_title_color fontcolor_C1
#define secBtn_bgColor fontcolor_C1 //次按钮
#define secBtn_border_line_color ([HuCommonMethod uiColorFromString:@"#dddddd"])
#define secBtn_press_bgColor ([HuCommonMethod uiColorFromString:@"#f8f8f8"])
#define secBtn_press_border_line_color ([HuCommonMethod uiColorFromString:@"#d8d8d8"])
#define secBtn_title_color fontcolor_C3
#define unableBtn_title_color ([HuCommonMethod uiColorFromString:@"#d2d2d2"])//不可点击按钮
#define unableBtn_bgColor ([HuCommonMethod uiColorFromString:@"#EBEBF0"])
//11底部按钮（通栏）
//HuButton 文件
#define bottomBtn_height 43
#define bottomBtn_warnStatus_title_color ([HuCommonMethod uiColorFromString:@"#FF513C"])
#define bottomBtn_nowarnStatus_title_color fontcolor_C2
#define bottomBtn_border_line_color secBtn_border_line_color

//12线框按钮
#define wireFrameBtn_round_conner 4.0
#define wireFrameBtn_border_color ([HuCommonMethod uiColorFromString:@"#00AAEE"])
#define wireFrameBtn_2word_width 44
#define wireFrameBtn_3word_width 56
#define wireFrameBtn_4word_width 68
#define wireFrameBtn_height 25
#define wireFrameBtn_title_color ([HuCommonMethod uiColorFromString:@"#00AAEE"])

//13行动操作 【暂时用系统自带的】

//14 页边间距 【暂无使用】
//统一app里面所有内容与页边的间距

#define table_margin 5
#define TM_title_flap (22.5) //title 到icon起始位置的距离

//15 间距 【暂无使用】
#define navi_section_margin 15 //标题栏到section距离
#define section_section_margin 20  //section之间的距离
#define section_button_margin 30 //section到button之间的距离
#define button_button_margin 20 //button到button之间的距离

//16 间距  【暂无使用】
#define navi_head_margin 15 //标题文字到标题栏距离
#define sectionTitle_sectionCell_margin 10 //标题文字到section之间距离
#define hintTitle_button_margin 20   //说明文字到按钮之间距离
#define sectionCell_warnBtn_margin 20 //section到警示按钮之间的距离

//17单行列表 Single list 【暂无定义成控件】
//单行列表主要由一行标题文字组成的列表，其样式有如下几种
//17.1 单行标题文字  左标题文字有内容 标题文字加开关
#define list_padding_lMargin  15  //左边距
#define list_padding_rMargin 15 //右边距
#define list_borderLine_height line_height
#define list_borderLine_color border_line_color
#define list_title_font fontsize_T2
#define list_title_color fontcolor_C2
#define list_redNumImage_yPos 4
#define list_redNumImage_width 14
#define list_redNumImage_height 14
#define list_redNumImage_font fontsize_T5
#define list_redNumImage_color fontcolor_C1

#define single_list_lTitle_xPos  list_padding_lMargin
#define single_list_lTitle_rMargin 10
#define single_list_title_font list_title_font
#define single_lsit_title_color list_title_color

#define single_list_rContent_rMargin list_padding_rMargin
#define single_list_rContent_font fontsize_T3
#define single_list_rContent_color fontcolor_C4

#define single_list_sectionTitle_xPos list_padding_lMargin
#define single_list_sectionTitle_bMargin 10
#define single_list_sectionTitle_font fontsize_T4
#define single_list_sectionTitle_color fontcolor_C4

#define single_list_cellHeight 67
#define single_list_borderLine_height line_height
#define single_list_borderLine_color list_borderLine_color
//17.2 图片加标题文字，图片加标题文字加内容
#define single_list_lImage_xPos 15
#define single_list_lImage_width 29
#define single_list_lImage_height 29


//18双行列表 Double line list  【暂无定义成控件】
//双行列表主要由上下两行文字组成的列表
//18.1上标题+下辅助文字
#define double_list_cellHeight 65
#define double_list_uTitle_yPos 13
#define double_list_uTitle_width 256
#define double_list_dContent_uMargin 3.5

//18.2 图片+标题+辅助文字   图片+标题+辅助文字+按钮
#define double_list_lImage_width 45
#define double_list_lImage_height 45
#define double_list_redNumImage_yPos list_redNumImage_yPos
#define double_list_redNumImage_width list_redNumImage_width
#define double_list_redNumImage_height list_redNumImage_height
#define double_list_redNumImage_font list_redNumImage_font
#define double_list_redNumImage_color list_redNumImage_color
#define double_list_content_width_has_rBtn 172.5
#define double_list_content_width_has_rArrowBtn 205

//19三行列表Three line list 【暂无定义成控件】
//相比于双行列表，主要是内容多了一行
#define three_list_cellHeight 85
#define three_list_content_width 268.5
#define three_list_lImage_width 45
#define three_list_lImage_height 71
#define three_list_lImage_rMargin 10

//20列表展开 List expand
//用于场景出现点击展开的样式
#define list_expand_childContent_xPos 30
#define list_expand_childContent_font fontsize_T2
#define list_expand_childContent_color fontcolor_C3

//21列表选择 List select
//列表选择控件大致和单，双行控件一只，跟进业务场景多了勾选状态
#define list_select_rChoiceBtn_width 15
#define list_select_rChoiceBtn_height 15
#define list_select_rChoiceBtn_rMargin 15

//22开关 系统自带的即可
//开关组件包含三种状态，Off/On,Dim

//23删除 左滑删除 【暂时用系统】
//主要用来删除单个内容和多个内容

//24删除 选中删除 【暂无使用】
//用来删除单个内容和多个内容
#define selected_image_width 24
#define selected_image_height 24
#define selected_image_xPos 10
#define selected_image_rMargin 10 //右边距

//25基础提示框 【暂无使用】
//提示框是提醒用户在当前页面操作后得反馈提示，位于页面的中间
#define alertView_title_font ([HuCommonMethod systemFontOfPixelSize:28])
#define alertView_title_color fontcolor_C1 //白色
#define alertView_radius 4


//26更多
//他是一个native的容器，分别有iOS和安卓的容器决定，会根据不同的平台变化。

//27输入框 【暂无使用】
//主要有标题，输入内容，图标等元素组成。
#define input_height 43
#define input_label_lmargin 15
#define input_text_font fontsize_T3
#define input_text_color fontcolor_C2

#define input_hintLabel_font fontsize_T2
#define input_hintLabel_color fontcolor_C2

#define input_dark_hintLabel_font fontsize_T3  //暗提示
#define input_dark_hintLabel_color ([HuCommonMethod uiColorFromString:@"#cccccc"])
#define input_dark_hintLabel_xPos 94 //主标签小于等于4个字
#define input_dark_hintLabel_large_xPos 110 //主标签有5个字


//28文本 【暂无使用】 一般用于tableview列表的自定义cell单元
//由于某些使用场景，导致文本不可控，因此推出几个文本样式以供选择。
//28.1 第一种cell 标题+内容+更多 [多内容cell]
#define multiContentCell_width 203
#define mulitContentCell_title_font fontsize_T4
#define multiContentCell_title_color fontcolor_C3
#define multiContentCell_title_xPos 15
#define multiContentCell_title_uMargin 15  //上边距
#define multiContentCell_title_dMargin 10 //下边距

#define mulitContentCell_subtitle_font fontsize_T2
#define multiContentCell_subtitle_color ([HuCommonMethod uiColorFromString:@"#000000"])
#define multiContentCell_subtitle_uMargin 15

#define multiContentCell_content_font fontsize_T3
#define multiContentCell_content_color fontcolor_C3
#define multiContentCell_content_uMargin 6.5
#define multiContentCell_content_row_margin 8 //内容行间距

#define multiContentCell_datetime_font fontsize_T4
#define multiContentCell_datetime_color fontcolor_C4
#define multiContentCell_datetime_uMargin 15

#define multiContenCell_moreLinkBtn_font fontsize_T3
#define multiContenCell_moreLinkBtn_color fontcolor_C5
#define multiContenCell_moreLinkBtn_uMargin 15
#define multiContenCell_moreLinkBtn_dMargin 15

//28.2 第二种cell （标题+日期+图片+内容+文字链）  [富文本图片cell]
#define richTextImageCell_title_font fontsize_T1
#define richTextImageCell_title_color [HuCommonMethod uiColorFromString:@"#000000"]
#define richTextImageCell_title_xPos 15
#define richTextImageCell_title_uMargin 20

#define richTextImageCell_datetime_font fontsize_T4
#define richTextImageCell_datetime_color fontcolor_C4
#define richTextImageCell_datetime_uMargin 3.5

#define richTextImageCell_image_width 290
#define richTextImageCell_image_uMargin 20

#define richTextImageCell_content_uMargin 20

#define richTextIamgeCell_wordLink_font fontsize_T3
#define richTextImageCell_wordLink_color fontcolor_C5
#define richTextImageCell_wordLink_uMargin 15

//29情感化空白页面设计 Emotional blank page
//插画能够更生动的展示页面应用场景和说明内页。建议插画内容在270*270以内，重要功能空白页面，有主按钮页面设计
#define blank_page_image_width 135
#define blank_page_image_height 135

#define blank_page_image_hasBtn_yPos 75
#define blank_page_image_hasBtn_dMargin 25
#define blank_page_btn_uMargin 40
#define blank_page_text_font fontsize_T2
#define blank_page_text_color fontcolor_C4
#define blank_page_text_row_margin 8

//30情感化空白页设计
//插画能够更生动的展示页面应用场景和说明内页。次级空白页面使用次级按钮，无需按钮有如右图设计方式
#define blank_page_image_yPos 120

//31插画弹层（单按钮）  Illustration layer
//插画弹层样式有两种，单按钮加插画或双按钮加插画，能够让页面更生动有趣。
#define illustration_layer_width 270
#define illustration_layer_height 315

#define illustration_layer_topRight_cancelBtn_width 24
#define illustration_layer_topRight_cancelBtn_height 24
#define illustration_layer_topRight_cancelBtn_dMargin 15

#define illustration_layer_image_yPos 30
#define illustration_layer_image_width 240
#define illustration_layer_image_height 160

#define illustration_layer_text_uMargin 15
#define illustration_layer_text_dMargin 15
#define illustration_layer_text_row_margin 8
#define illustration_layer_text_font fontsize_T3
#define illustration_layer_text_color [HuCommonMethod uiColorFromString:@"#aaaaaa"]
#define illustration_layer_mainBtn_width 240
#define illustration_layer_mainBtn_height 43

#define mask_layer_color [HuCommonMethod uiColorFromString:@"#000000"]  //黑色
#define mask_layer_opacity 0.5  //半透明

//32插画弹层（双按钮） Illustration layer two button
//插画弹层样式有两种，单按钮加插画或双按钮加插画，能够让页面更生动有趣。
#define illustration_layer_twoBtn_height 290
#define illustration_layer_twoBtn_text_dMargin 20
#define illustration_layer_dividing_line_color [HuCommonMethod uiColorFromString:@"#afafbc"]
#define illustration_layer_verticalLine_height 50 //竖线
#define illustration_layer_mainBtn_font mainBtn_font
#define illustration_layer_mainBtn_color fontcolor_C5
#define illustration_layer_secondaryBtn_color fontcolor_C3

//33文字弹层 Text layer
//文字弹层样色有两种，单按钮加文案和双按钮加文案。
#define text_layer_title_yPos 20
#define text_layer_title_dMargin 10
#define text_layer_title_font fontsize_T2
#define text_layer_title_color fontcolor_C2

#define text_layer_content_xPos 20
#define text_layer_content_rMargin 20
#define text_layer_content_dMargin 20
#define text_layer_content_color ([HuCommonMethod uiColorFromString:@"#aaaaaa"])

//其他自定义消息
//IM自定义消息
#define msg_title_height 18
#define msg_title_width 160
#define msg_title_font fontsize_T2
#define msg_title_color fontcolor_C1
#define msg_subTitle_height 16
#define msg_subTitle_font fontsize_T4
#define msg_subTitle_color fontcolor_C1
#define msg_imageView_height 35
#define msg_imageView_width 35
#define msg_followUp_image    @"msg_flowup"
#define msg_satisfaction_image @"msg_satisfaction"

//测试题目底部按钮
#define exam_progress_lMargin (42)
#define exam_bgView_height 39
#define exam_progress_height 7
#define bottom_btn_width (HHBWIDTH/4.0)
#define bottom_btn_height 49
#define bottomBtn_seprateLineV_width 1
#define bottomBtn_seprateLineV_height 36
#define practicePage_contentView_uMargin 4
#define practicePage_contentView_yPos (practicePage_contentView_uMargin + exam_bgView_height)
#define practicePage_contentView_height (HHBHEIGHT - bottom_btn_height - top_nav_bar_height - practicePage_contentView_yPos) //测试题库

#define exercise_height 221
#define exercise_title_height 45  //1行的高度
#define exercise_title_uMargin 11
#define exercise_title_dMargin 11
#define exercise_choice_height (exercise_height - exercise_title_height)

#define choice_icon_width 19
#define choice_icon_height 19
#define choice_title_uMargin 14
#define choice_title_dMargin 14
#define choice_title_xPos 64
#define choice_xPos 38
#define choice_height 40 //44

//测试题目解析部分
#define analysis_upView_uMargin 0
#define analysis_upView_height 74
#define analysis_fixView_height (table_margin + analysis_upView_uMargin + analysis_upView_height) //固定部分大小
#define analysis_downView_uMargin 20
#define analysis_downView_dMargin 20
#define analysis_rightImage_uMargin 24
#define analysis_rightImage_width 25
#define analysis_rightImage_height 23
#define analysis_right_answer_uMargin 18
#define analysis_right_hint_uMargin 42
//用解析时候宏
#define analysis_title_uMargin 77
#define analysis_title_width 80
#define analysis_titlt_height 22
#define analysis_content_uMargin 15
#define analysis_content_dMargin 20


//答题卡
#define eCard_do_color ([HuCommonMethod uiColorFromString:@"#0ea2fc"])
#define eCard_undo_color ([HuCommonMethod uiColorFromString:@"#f3f3f3"])
#define eCard_btn_width 30
#define eCard_btn_height 30
#define eCard_btn_hFlap 15 //水平间隔
#define eCard_btn_vFlap 15 //
#define eCard_contentView_height (HHBHEIGHT - bottom_btn_height - top_nav_bar_height)

//护理培训课程搜索
#define NT_searchCell_height (130/3.0)
#define NT_searchCell_icon_width 12   //(NT  Nurse Trainning 简写)
#define NT_searchCell_icon_height 12
#define NT_searchCell_content_lMargin 12
#define NT_seatchCell_content_color ([HuCommonMethod uiColorFromString:@"#151515"])
#define NT_searchViewController_tableview_height (HHBHEIGHT - top_nav_bar_height)

#define NT_menuHeight 40 //分类菜单的高度

//测试成绩
#define practice_result_image_width 145
#define practice_result_image_height 57
#define practice_result_image_uMargin 15

#define practice_summary_text_yPos 75
#define practice_summary_text_height 22
#define practice_summaryView_height (110)
#define practice_summaryView_old_height (351)
#define result_circleBg_uMargin 76
#define result_circleBg_width 158
#define result_circleBg_height 158
#define reustl_score_yPos 105
#define result_midView_yMargin 10
#define result_midView_height 43
#define result_contentView_height (eCard_contentView_height)
#define oneMore_btn_widht 75
#define oneMore_btn_height 17
#define result_bottom_btn_width (HHBWIDTH/2.0)
#define result_left_bottom_btn_width  (HHBWIDTH*(135/375.0))
#define result_right_bottom_btn_width (HHBWIDTH - result_left_bottom_btn_width)
#define result_img_width 69
#define result_img_height 69
#define resutl_passOrNoL_lMargin 14


//#define practice_testRecordTextView_height 38
#define practice_testRecordText_height 17

#define practice_filterView_height 42
#define practice_filter_text_height 22
#define filterBtn_width 9
#define filterBtn_height 5

#define practice_tableview_yPos (practice_summaryView_height+practice_testRecordTextView_height+practice_filterView_height)
#define practice_tableview_height (HHBHEIGHT - top_nav_bar_height - practice_tableview_yPos)

#define practice_tableviewcell_height (461/7.0)
#define cell_title_uMargin 9
#define cell_title_dMargin 9
#define practice_cell_icon_lMargin 16
#define practice_cell_content_lMargin 10
#define practice_cell_content_height 44
#define practice_cell_content_rMargin 14
#define practice_cell_content_xPos (practice_cell_icon_lMargin + choice_icon_width + practice_cell_content_lMargin)
#define practice_cell_content_width (HHBWIDTH-practice_cell_content_xPos-practice_cell_content_rMargin)

#define page_bgcolor ([HuCommonMethod uiColorFromString:@"#f4f4f8"])

//鲜花消息tableView相关
#define imageView_width  35
#define imageView_height 35
#define imageView_uMargin 19.5
#define flowerCell_height 74
#define common_flap 10   //一般控件之间的左右间距
#define flowerCell_datetime_uMargin 10
#define flowerCell_uMargin 20
#define flowerCell_dMargin 18
//我的鲜花界面
#define upImageBg_height 190
#define upImageBg2_uMargin 35
#define upImageBg2_width 195
#define upImageBg2_height 120

#define countLabel_uMargin 58
#define countLabel_height 47
#define countLabel_font ([HuCommonMethod systemFontOfPixelSize:80])
#define countLabel_color ([HuCommonMethod uiColorFromString:@"#ff5177"])

#define sendWord_uMargin 10
#define sendWord_lineSpace 4
#define sendWord_color ([HuCommonMethod uiColorFromString:@"#555555"])

//自定义控件相关宏定义
//通用拨盘控件
#define pickerViewSheet_titleBar_height 44
#define pickerViewSheet_contentView_height 216
#define pickerViewSheet_height (pickerViewSheet_titleBar_height+pickerViewSheet_contentView_height)

//护士培训列表cell
#define trainListCell_controlBetween 3
#define trainListCell_border 15
#define trainListCell_coverX 116
#define trainListCell_coverY 77
#define trainListCell_titleX 22
#define trainListCell_titleY 214
#define trainListCell_aboutOne 17
#define trainListCell_aboutTwo 34
#define trainListCell_timeX 130
#define trainListCell_timeY 14
#define trainListCell_barX 170
#define trainListCell_barY 6
#define trainListCell_barLabX 60
#define trainListCell_barLabY 20
#define trainListCell_enterImage 20
#define trainListCell_startFlagX 42
#define trainListCell_startFlagY 16
#define trainListCell_startBtnX 82
#define trainListCell_startBtnY 26
#define trainListCell_icon 45


//管理员扫码签到
#define scan_title_paddingX 30*kFontScale
#define scan_title_paddingY 15
#define scan_title_Height 54*kFontScale
#define scan_image_height 230

//天使钻图片
#define zuan_width (15)

//字符串是否为空
#define kStringIsEmpty(str) ([str isKindOfClass:[NSNull class]] || str == nil || [str length] < 1 ? YES : NO )
//数组是否为空
#define kArrayIsEmpty(array) (array == nil || [array isKindOfClass:[NSNull class]] || array.count == 0)
//字典是否为空
#define kDictIsEmpty(dic) ([dic isKindOfClass:[NSNull class]] || dic.allKeys == 0)
//是否是空对象
#define kObjectIsEmpty(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0))

#define kShowInTabBar [HuConfigration hideMenuBar:self withFlag:NO];//[(CustomMyViewController *)self.tabBarController showInTabBar]
#define kHiddenTabBar [HuConfigration hideMenuBar:self withFlag:YES];//[(CustomMyViewController *)self.tabBarController hiddenTabBar]
#define kHuFont(font) ([UIFont customFontSize:font])
#define kPageNum 1
#define kHuColor(colorString) ([HuCommonMethod uiColorFromString:@#colorString])
#define potectStringV(value) [HuConfigration stringValue:value]
#define surplusHeight 104
#define kCellIdentifierLeft @"cellIdentifierLeft"
#define kCellIdentifierRight @"cellIdentifierRight"
#define kCellIdentifier @"cellIdentifier"
#define kMinimumNum 0

#endif /* GlobNotifyDefine_h */
