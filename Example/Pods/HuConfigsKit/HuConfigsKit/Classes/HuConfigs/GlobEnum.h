//
//  GlobEnum.h
//  GuanHealth
//
//  Created by hermit on 15/2/11.
//  Copyright (c) 2015年 wensihaihui. All rights reserved.
//

#ifndef GuanHealth_GlobEnum_h
#define GuanHealth_GlobEnum_h

typedef NS_ENUM(NSInteger, PayType) {
    PayTypeWX = 1,         //微信支付
    AppleInPurchasePay = 2 //苹果内购支付
};

typedef NS_ENUM(NSInteger, WebViewType) {
    TypeFromLanuch = 1, //从启动页进入WebView
    TypeFromBanner = 2  //从宣教课程首页banner进入WebView
};

typedef NS_ENUM(NSInteger, SearchCourseType) {
    TypeFromPublicPlatform = 1, //从公共平台进入
    TypeFromMyHospital = 2      //从我的医院进入
};
typedef NS_ENUM(NSInteger, HuEmployeeSatisfaction) {
    HuToSubmit = 1,         //待提交
    HuHasBeenSubmitted = 2, // 已提交
    HuExpired = 3           //过期
};

typedef NS_ENUM(NSInteger, pushToSearchVCType) {
    TypeFromCoursePush = 1,     //从课程推送进入搜索界面
    TypeFromEducationCourse = 2 //从宣教课程进入搜索界面
};

typedef NS_ENUM(NSInteger, searchDetailType) {
    TypeFromMainSearch = 1,  //从课程推送进入搜索的搜索结果显示
    TypeFromManageFolder = 2 //从管理课程夹进入搜索结果界面
};

typedef NS_ENUM(NSInteger, pushSatisfactionType) {
    pushMoreType = 1, //对多个病人同时推送满意度
    pushOneType = 2   //单独病人推送满意度
    
};

typedef NS_ENUM(NSInteger, sendCourseVCType) {
    sendTypeFromDetail = 1, //从课程详情界面进入推送课程
    sendTypeFromAllPush = 2 //从首页“＋”的批量推送
    
};

typedef NS_ENUM(NSInteger, CourseByDeptReadData) {
    readDataByMorePush = 1, //从首页“＋”的批量推送进入的按照类别分类
    readDataByNormal = 2,   //展示按照类别的相关内容
    readDataBySearch = 3    //搜索界面显示类别的搜索结果
    
};

typedef NS_ENUM(NSInteger, CourseByTypeReadData) {
    readTypeDataByMorePush = 1, //从首页“＋”的批量推送进入的按照科室分类
    readTypeDataByNormal = 2,   //展示科室的相关内容
    readTypeDataBySearch = 3    //搜索界面显示科室的搜索结果
    
};

typedef NS_ENUM(NSInteger, PatientType) {
    patientOut = 1,     //患者出院
    patientNormal = 2,  //患者正常
    patientIn = 3,      //患者新入院
    patientHaveQuestion = 4,//患者有疑问
    exercisesRanking = 5 //练习题排名
};


typedef NS_ENUM(NSInteger, LoginAccountType) {
    
    noAccount = 0,      //没有登录账号
    personAccount = 1,  //登录未关联医院账号
    hospitalAccount = 2 //登录关联医院账号
};
typedef NS_ENUM(NSInteger, personCenter) {
    HUStandardTraining          = 0,//规培
    HUPersonCenter              = 1//个人中心
};
typedef NS_ENUM(NSInteger, EditOrAdd) {
    HUEditCertificate          = 0,
    HUEditExperience         = 1,
    HUEditWorkExperience       = 2
};
typedef NS_ENUM(NSInteger, BuyCoursePayStyle) {
    
    BalancePayStyle     = 1,//余额
    IntegralPayStyle    = 2,//积分兑换
    WeChatPayStyle      = 3//微信支付
};
/**
 从那个地方调用购买接口
 */
typedef NS_ENUM(NSInteger , HuPaymentModule) {
    HuPastExamPaper  =   1  , //真题试卷模块调用
    HuPaymentVip     =   2  ,//开通VIP
    HuPayMentNormalState  =   3  ,//普通状态
    HuOrderFormList  =   4      , //订单列表
    HuExaminationPaper  =  5      //真题试卷
};
typedef NS_ENUM(NSInteger,HuAidenSearchType){
    //317hu
    HuDiscoveryMianType  = 1, //发现首页搜索
    
};

typedef NS_ENUM(NSInteger, HuNIMMessageType) {
    HuNIMMessageTypeEducation     = 1,//课程
    HuNIMMessageTypeSatisfaction  = 2,//满意度
    HuNIMMessageTypeFollowUp      = 3,//随访
};

typedef NS_ENUM(NSInteger, HuIdType) {
    HuIdTypePatientInHospitalId     = 1,//病人住院号
    HuIdTypeAccountId  = 2,//云信accountId
};

typedef NS_ENUM(NSInteger, HuModelType) {
    HuModelTypeCategory  = 1,//收藏夹类别分类
    HuModelTypeCourse    = 2,////按照类别
};

//阿里云日志上传type
typedef NS_ENUM(NSInteger, HuLogType) {
    HuLogTypeException  = 1,//奔溃日志
    HuLogTypeExitTime   = 2,//程序退出时间
};

//百度云推送消息类型（苹果push推送）
typedef NS_ENUM(NSInteger, HuMessagePushType) {
    HuMessagePushTypeMain  = 0,//消息推送-首页
    HuMessagePushTypeHospitalMessage = 1,//  新的-院内消息  （老的消息推送-我的消息）
    HuMessagePushTypePublicPlatform = 2,//消息推送-公共平台首页
    HuMessagePushTypeSystemMessage = 3, //新的-系统消息    (老的 发送消息)
    HuMessagePushTypePatientApply = 4, //病人入院申请
    HuMessagePushTypeCourseQuestion = 5, //课程疑问
    HuMessagePushTypeDonateFlowerMessage = 6,//鲜花赠送
    //    HuMessagePushTypeHospitalMessage = 7,//院内消息
    //    HuMessagePushTypeSystemMessage = 8, //系统消息
    HuMessagePushTypeTrainMessage = 7,//培训消息
    HuMessagePushTypeExamMessage = 8,//考试消息
    HuMessagePushTypeExpertAnswerMessage = 9,//专家回答通知 【HuAppServerMsgFlagTypeSystem】
    HuMessagePushTypeNewCourseMessage = 10,//专家课程新增消息
    
    //ygy
    HuMessagePushTypeShuLanNewContent = 101,//树兰新增内容消息
};

//systemMsgFlag参数 后台请求类型flag (默认是宣教的)
typedef NS_ENUM(NSInteger, HuAppServerMsgFlagType) {
    HuAppServerMsgFlagTypeMyHospital  = 0,//我的医院
    //系统消息 目前有专家解答EXPERT_ANSWER，和专家新增课程EXPERT_COURSE
    HuAppServerMsgFlagTypeSystem = 1,
    HuAppServerMsgFlagTypeFlower = 2, //鲜花消息
    HuAppServerMsgFlagTypeComment = 3, //App评论通知
    HuAppServerMsgFlagTypeWeixin = 4,//weixin通知
    HuAppServerMsgFlagTypeTrain = 5,//培训通知
    HuAppServerMsgFlagTypeExam = 6,//考试消息
    HuAppSerVerMsgFlagTypeNewCourse = 7,//新增课程消息
    HuAppServerMsgFlagTypeRedFlagThankes = 8, //锦旗答谢通知
    HuAppServerMsgFlagTypeEmploreeCheck = 11, //员工审核通知
    
    //ygy消息
    HuAppServerMsgFlagTypeShuLanNewContent = 101,//树兰新增内容消息
};

//systemMsgFlag参数 后台请求类型flag (以下是护士培训的)
typedef NS_ENUM(NSInteger, HuAppServerNTMsgFlagType) {
    HuAppServerNTMsgFlagTypeTrain = 5,//培训通知 (课程)
    HuAppServerNTMsgFlagTypeExam = 6,//考试消息
    HuAppSerVerNTMsgFlagTypeNormalizedTrain = 7,//规培
    HuAppServerNTMsgFlagTypeNewTrain = 8,//培训消息(其他群发消息)
};

//各个子系统标识，目前就消息类型用到
typedef NS_ENUM(NSInteger, HuSubSysType) {
    HuSubSysTypeEdu = 0,//宣教系统
    HuSubSysTypeNT = 1,//护士培训系统
};



//程序主界面首页底部menutar类型
typedef NS_ENUM(NSInteger, HuMainPageMenuBarType) {
    HuMainPageMenuBarTypeNursingConference = 0, //护理大会
    HuMainPageMenuBarTypeTrain = 1, //培训
    HuMainPageMenuBarTypeWardPatient  = 2,//宣教   old病区患者
    HuMainPageMenuBarTypeEducationClass = 3,//发现 old宣教课程
    HuMainPageMenuBarTypePersonalCenter = 4,//我的 old个人中心
};

//IM埋点相关数据类型  0 普通文本， 1 图片，2 语音，3 视频，4 地理位置，5 文件，6 第三方自定义
typedef NS_ENUM(NSInteger, HuIMSendType){
    HuIMSendTypeText = 0,
    HuIMSendTypePicture = 1,
    HuIMSendTypeVoice = 2,
    HuIMSendTypeVideo = 3,
    HuIMSendTypeLocation = 4,
    HuIMSendTypeFile = 5,
    HuIMSendTypeCustom = 6,
};

//习题类型
typedef NS_ENUM(NSInteger, HuExerciseType){
    HuExerciseTypeSingleSelect = 1,//单选
    HuExerciseTypeMultiSelect = 2,//多选
    HuExerciseTypeTrueOrFalse = 3, //是非题
    HuExerciseTypeBlankFilling = 4, //填空题
    HuExerciseTypeEssayQuestion = 5, //问答题
    //比较特殊的题型（阅读理解）
    HuExerciseTypeReadingComprehension = 6, //公共题干
};

//护士培训课程搜索cell类型
typedef NS_ENUM(NSInteger, HuNurseTrainningSearchCellType){
    HuNurseTrainningSearchCellTypePresent,//当前
    HuNurseTrainningSearchCellTypeHistory,//历史
};

//测试成绩
typedef NS_ENUM(NSInteger, HuTestResultType){
    HuTestResultTypeCongratilation,//恭喜
    HuTestResultTypeKeepTrying,//历史
};

//显示测试结果习题类型
typedef NS_ENUM(NSInteger, HuTestResultShowExercisesType){
    HuTestResultShowExercisesTypeAll,//所有 默认值
    HuTestResultShowExercisesTypeOnlyRight,//只显示正确的
    HuTestResultShowExercisesTypeOnlyWrong,//只显示错误的
};

//测试 界面类型
typedef NS_ENUM(NSInteger, HuTestPracticePageType){
    HuTestPracticePageTypeDoPaper,//选项可以边看 做题
    HuTestPracticePageTypeAnalyse,//分析界面 选项不可以修改
    HuTestPracticePageTypeWrongExercise,//错题集
    HuTestPracticePageTypeSimulatedExercise,//模拟题
};

//分页拉取方向
typedef NS_ENUM(NSInteger, HuPullDirection){
    HuPullDirectionNoPull,//首次不拉（可以不用）
    HuPullDirectionHeader,//向上拉
    HuPullDirectionFooter,//向下拉
};

//考试类型 (目前有两类 随堂测验和考试）
typedef NS_ENUM(NSInteger, HuExamType){
    HuExamTypeQuiz,//随堂测验
    HuExamTypeExam,//考试
    HuExamTypeRealTest,//真题
};

//分组培训里面的考试流程完成需要返回到学习记录里面
typedef NS_ENUM(NSInteger, HuPushToExamType){
    huNormalPushToExam = 0,
    huGroupTrainingPushToExam = 1,//从分组培训里面的考试点击进入到考试须知，考试详情页面点击返回
};

typedef NS_ENUM(NSInteger,HuBusinessLayoutOrderType) {
    HuBusinessLayoutOrderTypeAsc,     //升序
    HuBusinessLayoutOrderTypeDesc,    //降序
    HuBusinessLayoutOrderTypeNoOrder, //原始序
};
//题卡按钮类型
typedef NS_ENUM(NSInteger, HuExerciseCardBtnType){
    HuExerciseCardBtnTypeNoDone,//默认题卡样式没答题（答题）
    HuExerciseCardBtnTypeDone,//答过题（答题）
    HuExerciseCardBtnTypeWrong,//答错题
    HuExerciseCardBtnTypeRight,//答对题
};

//定义数据状态, 这个定义可能根据UI需求改变
typedef NS_ENUM(NSInteger,HuDataStatus)
{
    HuDataStatusStop,       //停牌
    HuDataStatusFall,       //跌
    HuDataStatusStable,     //平
    HuDataStatusRise,       //涨
    HuDataStatusNoCompared, //不可比较, 如一些财务数据
    HuDataStatusText,       //文字, 如指标名称
    HuDataStatusNone,       //空数据
    HuDataStatusReserved    //保留
};

typedef NS_ENUM(NSInteger, HuOrderBtnType) {
    HuOrderBtnTypeWhite,
    HuOrderBtnTypeBlue,
    HuOrderBtnTypeBlack,
    HuNewPaymentTypeBgClear,
    HuNewPaymentTypeBgRed
};
typedef NS_ENUM(NSInteger, HuLoginType) {
    HuLoginTypeNormal, //正常点击注册
    HuLoginTypeThirdBinding //第三方绑定注册
};

typedef NS_ENUM(NSInteger, HuThirdPartLoginType) {
    HuThirdPartLoginTypeWexin = 1, //微信登录
};

//发现页面三个Tab枚举类型
typedef NS_ENUM(NSInteger , DiscoverThreeRowType) {
    inHosptialRowOne = 0,//本院
    educationRowTwo  = 1,//宣教课程
    hospitalShare    = 2,//医院共享
    hu317Share       = 3,//317hu共享
    nurseTraingRowThree = 4,//培训课程
    nurseTraingAllCourse = 5//护士规培医院所有课程
};

typedef NS_ENUM(NSInteger , TrainingCourseType) {
    HuRequiredPlanType     = 0, //必修计划
    HuRequiredRecordType   = 1, //必修记录
    HuElectivePlanType     = 2, //选修计划
    HuElectiverRecordType  = 3, //选修记录
};

typedef NS_ENUM(NSInteger , HuTestListType) {
    HuTestPlanType     = 0, //考试计划
    HuTestRecordType   = 1, //考试记录
};

//本院宣教，按科室，按类别枚举类型
typedef NS_ENUM(NSInteger , inHosptialType) {
    byDepartments  = 0,
    byClasses      = 1,
};
typedef NS_ENUM(NSInteger , CountContentWidthOrHeight) {
    
    CountContentWidth       = 1, //计算宽度
    CountContentHeight          //计算高度
};

typedef NS_ENUM(NSInteger, HuNormalizedTrainingBubbleBaseCellKind) {
    HuNormalizedTrainingBubbleBaseCellKindSelfSummary ,     //自我总结 Progress有图片
    HuNormalizedTrainingBubbleBaseCellKindTrain,            //规培 Progress有图片
    HuNormalizedTrainingBubbleBaseCellKindExam,             //考试 Progress有图片
    HuNormalizedTrainingBubbleBaseCellKindRequired,         //必修 Progress有图片
    HuNormalizedTrainingBubbleBaseCellKindOptionalRequired, //选修 Progress有图片
    HuNormalizedTrainingBubbleBaseCellKindOptionaOther      //其他 Progress展示色块  小绿点
};

typedef NS_ENUM(NSInteger, HuTrainRoleType) {
    HuTrainRoleTypeHospitalAdministrator = 10000 ,   //医院培训管理员  10000
    HuTrainRoleTypeOfficeAdministrator = 10001,     //科培训管理员  10001
    HuTrainRoleTypeBranchColleageAdministrator = 10003, //分院院区管理员 10003
    HuTrainRoleTypePatientAreaAdministrator = 10004, //病区管理员
    HuTrainRoleTypeNurse                    //普通护士
};

typedef NS_ENUM(NSInteger, TAType) {
    TATypeTrain = 0,  //培训
    TATypeExam, //考试
    TATypeStandardTrain,//规培
    TATypeStudyGroup,//学习圈
};

typedef NS_ENUM(NSInteger, SortType) {
    SortTypeAll = 0,  //全部
    SortTypeDoing, //进行中
    SortTypeUnStart,//未开始
    SortTypeEnd,//已结束
};

typedef NS_ENUM(NSInteger ,refreshType) {
    TableViewHeaderRefresh,
    TableViewFooterRefresh
};

typedef NS_ENUM(NSInteger, HuUploadType) {
    HuUploadTypeNormal = 0,      //正常
    HuUploadTypeTimeOut = 1,     //超时
    HuUploadTypeBack = 2,        //返回
    HuUploadTypeHomeBack = 3,    //按home键
    HuUploadTypeExerciseCard = 4 //答题卡
};

typedef NS_ENUM(NSInteger , HuPushControllerType) {
    HuPushNoParam     = 0, //不需要传值
    HuPushProperty   = 1, //只有属性传值
    HuPushInit     = 2, //重写了init方法传值
    HuPushOther  = 3, //其他，混合方式传值等
};

typedef NS_ENUM(NSInteger, CourseStatus) {
    //报名
    CourseStatusSignUp,
    //取消报名
    CourseStatusCanCelSignUp,
    //扫码签到
    CourseStatusSignUpScan,
    CourseStatusSignUpPrepareBM,//已报名未签到
    //随堂测试未开始
    CourseStatusTestPrepare,
    //随堂测试
    CourseStatusTest,
    
    //签到未开始
    CourseStatusSignUpPrepare,
    
    //报名已结束   （报名 signUp  签到signIn 签退signOut）
    CourseStatusSignUpOver,
    //报名操作最大名额
    CourseStatusSignUpLimit,
    //签到已结束
    CourseStatusSignInOver,
    //培训已结束
    CourseStatusTrainOver,
    
    //签退未开始
    CourseStatusSignOutPrepare,
    //签退已结束
    CourseStatusSignOutOver,
    //扫码签退
    CourseStatusSignOutScan,
    //已经扫码签退
    CourseStatusSignOutDone,
    
    //随堂测样考试过期
    CourseStatusQuizOver,
    
    //3.4.0添加
    //选修课程加入学习
    CourseStatusJoinLearning,
    //正常状态，没有预加载界面可以跳转入培训课程详情
    CourseStatusNoPreLoadPage,
    
};

typedef NS_ENUM(NSUInteger, HuPageStyle){
    HuPageStyleDayMode = 0,     //白天模式(默认)
    HuPageStyleNightMode,       //夜间模式
    HuPageStyleMax
};

typedef NS_ENUM(NSUInteger, HuBtnType){
    HuBtnTypeWaringMode = 1,     //警示状态
    HuBtnTypeNoWaringMode = 2,       //非警示状态
};

#endif
