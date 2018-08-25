//
//  HuFuctionItemDefine.m
//  317hu
//
//  Created by yanChengYi on 2017/2/28.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#import "HuFuctionItemDefine.h"

//护士培训相关接口 默认url不需要加/前缀
NSString *const HuFuncItem_getPaper = @"nurse-train-web/nursetrain/app/exercise/v2.3.6/getPaper";          //8.1 获取习题
NSString *const HuFuncItem_getCoursePaper = @"nurse-train-web/nursetrain/app/exercise/v2.7.4/coursePaper"; //获取随堂测验接口
//考试获取试卷接口（带填空题）
NSString *const HuFuncItem_getExam = @"nurse-train-web/nursetrain/app/exam/v2.6.2.1/paper";
NSString *const HuFuncItem_getNewExam = @"nurse-train-web/nursetrain/app/exam/v3.3.5/paper";
NSString *const HuFuncItem_doPaper = @"nurse-train-web/nursetrain/app/exercise/doPaper";                  //8.2 答题
NSString *const HuFuncItem_doCoursePager = @"nurse-train-web/nursetrain/app/exercise/v2.7.4/coursePaper"; //随堂测验答题
NSString *const HuFuncItem_doExamPaper = @"nurse-train-web/nursetrain/app/exam/v2.1.2/paper";             //8.10 考试试卷提交
//考试获取试卷接口（新）
NSString *const HuFuncItem_newGetExam = @"nurse-train-web/nursetrain/app/exam/v2.6.2/paper";
//8.12 考试试卷提交(新)（考试）带填空题
NSString *const HuFuncItem_uploadExamPaper = @"nurse-train-web/nursetrain/app/exam/v2.6.2/paper";

NSString *const HuFuncItem_getPaperRecord = @"nurse-train-web/app/exercise/getPaperRecord";                               //5.4 查询测试记录
NSString *const HuFuncItem_getPaperRecordDetail = @"nurse-train-web/nursetrain/app/exercise/v2.3.6/getPaperRecordDetail"; //8.4 查询测试详情
NSString *const HuFunction_getExamPaperDetail = @"nurse-train-web/nursetrain/app/exam/v2.1.2/recordDetail";               //8.9 获取考试记录详细
NSString *const HuFuncItem_searchNTCourse = @"nurse-train-web/nursetrain/course/read/getElectiveCourseLearn";             //3.5 app选修课程（在学/课程搜索）列表接口
NSString *const HuFuncItem_searchNTCourse_get = @"nurse-train-web/nursetrain/app/course/v1.0.1/searchForElectiveLearn";   //分页（在学/课程搜索）列表接口

//NSString *const HuFuncItem_getTrainAlreadyList = @"nurse-train-web/nursetrain/course/read/getLearnCourseList"; //已学课程列表
NSString *const HuFuncItem_getTrainAlreadyList = @"nurse-train-web/nursetrain/app/course/v1.0.1/searchForLearned"; //已学课程列表new

//2.6.3选修列表
NSString *const HuFuncItem_getTrainOptionCourseList = @"nurse-train-web/nursetrain/app/course/v2.6.3/searchForElective";

NSString *const HuFuncItem_joinMyCourse = @"nurse-train-web/nursetrain/course/write/joinMyCourse"; //加入/取消加入学习

NSString *const HuFuncItem_getTrainStudingList = @"nurse-train-web/nursetrain/course/read/getElectiveCourseLearn";           //在学课程列表
NSString *const HuFuncItem_getTrainStudingList_new = @"nurse-train-web/nursetrain/app/course/v1.0.1/searchForElectiveLearn"; //在学课程列表 new

NSString *const HuFuncItem_getTrainOptionalList = @"nurse-train-web/nursetrain/app/course/v2.3.6/searchForElective"; //选修课程列表

//NSString *const HuFuncItem_getTrainRequiredList = @"nurse-train-web/nursetrain/course/read/getCompulsoryCourse"; //必修课程列表
NSString *const HuFuncItem_getTrainRequiredList = @"nurse-train-web/nursetrain/app/course/v2.6.3/searchForCompulsory"; //必修课程列表_new

NSString *const HuFuncItem_getDataDictionaryList = @"nurse-train-web/nursetrain/app/basic/v1.0.1/dataDictionaryList"; //课程分类列表

NSString *const HuFuncItem_getTrainClassifyList = @"nurse-train-web/nursetrain/app/basic/v2.3.6/trainClassifyList"; //培训分类列表


NSString *const HuFuncItem_getCouresDetail = @"nurse-train-web/nursetrain/app/course/v2.6.3/getCourseDetail"; //护士培训课程详情接口

NSString *const HuFuncItem_reloadSingleCourse = @"nurse-train-web/nursetrain/app/course/v2.3.6/getCourseForOne";

//选修是否需要更新课程
NSString *const HuFuncItem_updateCourseJudge = @"nurse-train-web/nursetrain/app/course/v1.0.1/updateCourseJudge";

//更新学员选修课内容接口
NSString *const HuFuncItem_courseForUser = @"nurse-train-web/nursetrain/app/course/write/v1.0.1/courseForUser";

//考试列表
NSString *const HuFuncItem_testList = @"nurse-train-web/nursetrain/app/read/exam/releaseStudent/v2.1.2/releaseStudent";

//管理员考试列表
NSString *const HuFunItem_adminTestList = @"nurse-train-web/nursetrain/app/read/exam/releaseStudent/v2.6.3/releaseExamForAdmin";
//管理员考试详情
NSString *const HuFunItem_adminTestDetail = @"nurse-train-web/nursetrain/app/read/exam/releaseStudent/v2.6.2/releaseExamDetailForAdmin";
//管理员获取考生信息
NSString *const HuFunItem_adminTestStuList = @"nurse-train-web/nursetrain/app/read/exam/releaseStudent/v2.6.2/releaseStudentExam";

//Banner
NSString *const HuFuncItem_Banner = @"nurse-train-web/nursetrain/app/banner/v2.1.2/banner";

//护士培训2.4.2banner
NSString *const HuFuncItem_newBanner = @"nurse-train-web/nursetrain/app/banner/v2.4.2/banner";

//开始须知
NSString *const HuFuncItem_NeedToKonw = @"nurse-train-web/nursetrain/app/exam/v2.1.2/notice";

//护士培训首页相关医院列表
NSString *const HuFuncItem_hospList = @"nurse-train-web/nursetrain/app/course/v2.1.2/coursePageForAppHome";

//护士培训首页最新课程
NSString *const HuFunItem_trainMaininHospitalClassList = @"nurse-train-web/nursetrain/app/course/v2.2.7/coursePageForNewest";

//某个医院课程列表
NSString *const HuFuncItem_hospClassList = @"nurse-train-web/nursetrain/app/course/v2.2.5/coursePageForAppHomeHospital";

//8.11 app获取系统时间接口
NSString *const HuFuncItem_systemTime = @"nurse-train-web/nursetrain/app/exam/v2.2.7/systemTime";

// 5.25 app查询视频插题v2.4.2
NSString *const HuFuncItem_searchForVideoInsertTitle = @"nurse-train-web/nursetrain/app/videoInsertTitle/v2.4.2/searchForVideoInsertTitle";

/////////2.2.7 课程中心修改添加/////////
//1.1 我的课程列表
NSString *const HuFuncItem_myCourse_list = @"course-center-web/coursecenter/app/course/read/myCourse/list";
//1.2 我的课程内容详情
NSString *const HuFuncItem_myCourse_detail = @"course-center-web/coursecenter/app/course/read/myCourse/detailContentInfo";
//2.1 我的医院的课程按照类型显示主页
NSString *const HuFuncItem_myHospitalCourse = @"course-center-web/coursecenter/app/course/read/myHospitalCourse/byType/main";
//2.2 我的医院的课程按照类型显示更多
NSString *const HuFuncItem_myHospitalCourse_byType_more = @"course-center-web/coursecenter/app/course/read/myHospitalCourse/byType/more";
//2.3 院内课程搜索
NSString *const HuFuncItem_myHospitalCourse_search = @"course-center-web/coursecenter/app/course/read/myHospitalCourse/search";
//2.4 院内课程查看价格
NSString *const HuFuncItem_myHospitalCourse_getPrice = @"course-center-web/coursecenter/app/course/read/myHospitalCourse/getPrice";
//2.5 我的医院课程内容详情
NSString *const HuFuncItem_myHospitalCourse_detail = @"course-center-web/coursecenter/app/course/read/myHospitalCourse/detailContentInfo";
//2.6 收藏列表
NSString *const HuFuncItem_myCollectHospitalCourse_list = @"course-center-web/coursecenter/app/course/read/myCollectCourse/list";
//2.7 获取宣教分类列表（推送左边列表【按科室，按类别】）
NSString *const HuFuncItem_classKind_list = @"course-center-web/coursecenter/privilege/read/haveCourseBeans/list";
//2.8 我的医院的课程按照类型显示更多 场景：推送课程
NSString *const HuFuncItem_byType_more_forPushClass = @"course-center-web/coursecenter/app/course/read/myHospitalCourse/byType/more/forPushClass";
//2.12 添加推送收藏的课程列表 (和2.8很类似，只是是添加收藏界面进入)
NSString *const HuFuncItem_byType_more_forFavoriteClass = @"course-center-web/coursecenter/app/course/read/myHospitalCourse/byType/more/forFavoriteClass";
//2.9 对提交至院内的课程进行审核
NSString *const HuFuncItem_hospitalCourse_review = @"course-center-web/coursecenter/app/course/write/hospitalCourse/review";
//2.10 提交院内课程至公共平台
NSString *const HuFuncItem_hospitalCourse_submitToPublic = @"course-center-web/coursecenter/app/course/write/hospitalCourse/submitToPublic";
//2.11  院内课程设置价格
NSString *const HuFuncItem_hospitalCourse_setPrice = @"course-center-web/coursecenter/app/course/write/hospitalCourse/setPrice";
//培训课程详情
NSString *const HuFuncItem_TraingingCourseDetail = @"nurse-train-web/nursetrain/app/courseTrade/v2.4.0/courseDetail";

//三. 公共平台课程
//3.1 查询公共平台课程分类(显示5个热门分类)
NSString *const HuFuncItem_getHotCategory_list = @"course-center-web/coursecenter/publicCourseCategory/read/getHotCategory";
//3.2 查询公共平台课程分类列表(子集分类)
NSString *const HuFuncItem_getListCount_list = @"course-center-web/coursecenter/publicCourseCategory/read/getListCount";
//3.3 公共平台课程搜索
NSString *const HuFuncItem_publicCourse_list = @"course-center-web/coursecenter/app/course/read/publicCourse/list";
//3.4 收藏公共平台的课程列表
NSString *const HuFuncItem_myCollectPublicCourse_list = @"course-center-web/coursecenter/app/course/read/myCollectPublicCourse/list";
//3.5 公共平台课程内容详情
//NSString *const HuFuncItem_publicCourse_detail = @"course-center-web/coursecenter/app/course/read/publicCourse/detailInfo";
//3.6 公共平台课程评审列表 新老版本列表
NSString *const HuFuncItem_publicCourse_review_list = @"course-center-web/coursecenter/app/course/read/expertAssessRecord/fullList";
//3.7 公共平台课程评审列表
NSString *const HuFuncItem_expertAssessRecord_list = @"course-center-web/coursecenter/app/course/read/expertAssessRecord/list";
// 4.1 新增护士阅读课程记录
NSString *const HuFuncItem_nurse_readRecord_add = @"course-center-web/coursecenter/app/course/write/readRecord/add";
// 4.2 护士(取消)收藏课程
NSString *const HuFuncItem_collectCourse_addOrCancel = @"course-center-web/coursecenter/app/course/write/collectCourse/addOrCancel";
// 4.3 护士(取消)点赞课程
NSString *const HuFuncItem_praiseCourse_addOrCancel = @"course-center-web/coursecenter/app/course/write/praiseCourse/addOrCancel";
// 4.4 删除我收藏的课程
NSString *const HuFuncItem_myCollectClass_delete = @"course-center-web/coursecenter/app/course/write/myCollectClass/delete/byIds";
// 5.1 获取安存证书
NSString *const HuFuncItem_safeStorage_detail = @"course-center-web/coursecenter/safeStorage/read/detail";

//app安全性相关api
//1.3 获取token
NSString *const HuFuncItem_getToken = @"care-nurse/nurse/account/replace/token";
//2.7.5添加获取submitToken
NSString *const HuFuncItem_getSubmitToken = @"care-nurse/nurse/account/replace/getSubmitToken";
//2.7.9获取医院列表
NSString *const HuFuncItem_getHosList = @"care-nurse/nurse/mechanism/getHosList";
// 获取用户信息--审核通过后，获取相关登录信息
NSString *const HuFuncItem_getUserInfo = @"care-nurse/nurse/mechanism/getuserInfo";

//考试结果列表
NSString *const HuFuncItem_getExamReport = @"nurse-train-web/nursetrain/app/exam/v2.2.7/record";
//测试结果列表
NSString *const HuFuncItem_getExerciseReport = @"nurse-train-web/nursetrain/app/exercise/v2.2.7/record";

//四.交易相关
//1.1查询余额
NSString *const HuFuncItem_deposit_balance = @"tradecenter/app/funds";
//1.2获取资金明细（按月份）
NSString *const HuFuncItem_bill_list = @"tradecenter/app/funds/detail/listForMonth";
//2.1订单列表
NSString *const HuFuncItem_orders_list = @"tradecenter/app/orders/list";
//2.2订单明细
NSString *const HuFuncItem_orders_detail = @"tradecenter/app/orders/getById";
//2.3取消订单
NSString *const HuFuncItem_orders_cancel = @"tradecenter/app/courseTrade/cancelOrder";
//3.1余额支付 post
NSString *const HuFuncItem_payment_byBalance = @"tradecenter/app/payment/byBalance";
//积分支付
NSString *const HuFuncItem_payment_byAccountPoint = @"tradecenter/app/payment/byAccountPoint";
//3.2第三方支付方式 post
NSString *const HuFuncItem_payment_byOtherPart = @"tradecenter/app/payment/byOtherPart";
//3.3获取支付结果
NSString *const HuFuncItem_payment_getStatus = @"tradecenter/app/payment/getStatus";
//4.1创建订单 post
NSString *const HuFuncItem_courseTrade_createOrder = @"tradecenter/app/courseTrade/createOrder";
//5.1创建交易订单 post
NSString *const HuFuncItem_depositTrade_createOrder = @"tradecenter/depositTrade/createOrder";
// 订单列表是否显示小红点 （大于0显示）
NSString *const HuFuncItem_orders_variousNum = @"tradecenter/app/orders/variousNum";
//2.3  获取资金明细
NSString *const HUFuncItem_DatailListForMoth = @"tradecenter/app/funds/detail/list";

//五.开放注册
//1.是否绑定第三方账号接口
NSString *const HuFuncItem_isBindOtherPart = @"user/openRegister/isBindOtherPart";
//2.校验验证码是否正确及手机号是否存在接口
NSString *const HuFuncItem_deposit_verifyCode = @"user/openRegister/verifyCode";
//3.注册申请接口 post
NSString *const HuFuncItem_registerAccount = @"user/openRegister/registerAccount";
//4.发送验证码 post
NSString *const HuFuncItem_sendVerific = @"user/openRegister/sendVerifica";
//5.邀请同事 post
NSString *const HuFuncItem_invitePerson = @"user/openRegisterWeb/invitePerson";
//6.获取科室、病区
NSString *const HuFuncItem_getuExtUpdTree = @"user/eduManagerRest/newGetuExtUpdTree";
//新增课程消息
NSString *const HuFuncItem_getMessage = @"care-nurse/businessRecevicePushMessage/pageByNurseId";
//7.获取用户是否绑定支付宝
NSString *const HuFuncItem_judgeBindAlipay = @"user/alipayRest/judgeBindAlipay";
//8.获取支付宝验证码
NSString *const HuFuncItem_getAlipayVerify = @"user/alipayRest/createAlipayVerify";
//9.绑定支付宝 post
NSString *const HuFuncItem_bindAlipay = @"user/alipayRest/bindAlipay";
//10.提现界面详情
NSString *const HuFuncItem_WithDrawDetail = @"tradecenter/app/funds";
//11.创建提现订单
NSString *const HuFuncItem_createWithDraw = @"tradecenter/app/withdrawTrade/createOrder";


//六.新发现界面
//1.本院宣教获取分类列表
NSString *const HuFuncItem_inHosptialFatherClassifyList = @"course-center-web/coursecenter/privilege/read/haveCourseBeans/list";
//2.本院宣教对应分类课程列表
NSString *const HuFuncItem_inHosptialCouseList = @"course-center-web/coursecenter/app/course/read/myHospitalCourse/byType/more";
//3.发现界面课程库列表以及搜索接口
NSString *const HuFuncItem_DiscoverCourseLibraryList = @"course-center-web/coursecenter/app/course/read/publicCourseLibrary/list";
//4.课程库详情页
NSString *const HuFuncItem_CourseLibraryDetial = @"course-center-web/coursecenter/app/course/read/publicCourse/detailInfo";
//其他 以前317护接口
//获取udesk url链接 （个人账号权限才需要）
NSString *const HuFuncItem_getGenerateConsultUrl = @"care-nurse/udesk/getGenerateConsultUrl";

//2.4.7版本 智能推送
//推送的课程取消推送 post
NSString *const HuFuncItem_push_class_cancel = @"care-nurse/nurse/push/class/cancel"; //ok
//护士手动添加病人 post 空床添加患者
NSString *const HuFuncItem_addPatient_byNurse = @"care-nurse/patient/inhospital/addPatient/byNurse"; //huang提交
//护士手动取消添加病人 post
NSString *const HuFuncItem_cancelAddPatient = @"care-nurse/patient/inhospital/cancelAddPatient"; //shen
//病人列表 变动
NSString *const HuFuncItem_inlistByNurse = @"care-nurse/patient/inhospital/listByNurse"; //huang
//护士审核入院接口变动 post
NSString *const HuFuncItem_apply_review = @"care-nurse/patient/inhospital/inHospital"; //wang 确认入院
//病人点击的时候跳转那个页面判断
NSString *const HuFuncItem_inorout_status = @"care-nurse/patient/inhospital/inorout/status"; //ok
//病人二维码那个页面的基本信息查询
NSString *const HuFuncItem_getPatientQRCodeDetail = @"care-nurse/patient/inhospital/baseCodeInfo"; //ok
//判断是否为对接病区
NSString *const HuFuncItem_judgeSystemDockingFlag = @"care-nurse/hospital/ward/systemDockingFlag";
//疾病的推送计划
NSString *const HuFuncItem_push_course_plan = @"care-nurse/accurate/push/course/plan/list"; //huang
//医院信息查询-智能推送(含是否开通智能推送等相关信息)
NSString *const HuFuncItem_hospital_info = @"care-nurse/hospital/infoById";
//获取热门疾病
NSString *const HuFuncItem_DiseaseReadAppList = @"accurate-web/accurate/disease/read/app/list";
//内购 创建订单
NSString *const HuFuncItem_CreateOrder = @"tradecenter/app/rechargeTrade/createOrder";
//苹果支付(内购)完成后 验证支付是否成功
NSString *const HuFuncItem_ByApplePay = @"tradecenter/app/payment/byApplePay";

//2.5.4 发现版本接口
//培训分类
NSString *const HuFuncItem_discover_classify = @"nurse-train-web/nursetrain/app/discover/v2.5.4/classify";
//发现首页
NSString *const HuFuncItem_discover_index = @"nurse-train-web/nursetrain/app/discover/v2.5.4/index"; //ok
//红点提醒 get
NSString *const HuFuncItem_discover_remind = @"nurse-train-web/nursetrain/app/discover/v2.5.4/remind"; //ok
//取消发现小红点 post
NSString *const HuFuncItem_discover_delRemind = @"nurse-train-web/nursetrain/app/discover/v2.5.4/delRemind"; //ok
//专家详细
NSString *const HuFuncItem_expertDetail = @"nurse-train-web/nursetrain/app/expertTeam/v2.5.4/expertDetail";
//专家列表
NSString *const HuFuncItem_expertList = @"nurse-train-web/nursetrain/app/expertTeam/v2.5.4/expert"; //ok
//课程详细
NSString *const HuFuncItem_courseDetail = @"nurse-train-web/nursetrain/app/expertTeam/v2.5.4/courseDetail";
//2.6.1.1专家课程详情
NSString *const HuFuncItem_courseDetailNew = @"nurse-train-web/nursetrain/app/expertTeam/v2.6.1.1/courseDetail";
//2.6.1.1培训课程详情
NSString *const HuFuncItem_trainCourseDetailNew = @"nurse-train-web/nursetrain/app/courseTrade/v2.6.1.1/courseDetail";
//问答列表
NSString *const HuFuncItem_questionList = @"nurse-train-web/nursetrain/app/expertTeam/v2.5.4/FAQ";
//课程问答列表
NSString *const HuFuncItem_commentQuestionList = @"nurse-train-web/nursetrain/app/course/v2.6.1.1/comment";
//提问
NSString *const HuFuncItem_question = @"nurse-train-web/nursetrain/app/expertTeam/v2.5.4/question";
//对课程提问
NSString *const HuFuncItem_commentAdd = @"course-center-web/coursecenter/app/course/write/comment/add";
//关注取消关注 put
NSString *const HuFunItem_attention = @"nurse-train-web/nursetrain/app/expertTeam/v2.5.4/attention";
//中卫主页
NSString *const HuFuncItem_ZWDescr = @"nurse-train-web/nursetrain/app/discover/v2.5.4/zwDescr";
// 获取公共平台课程分类--树状
NSString *const HuFuncItem_GetTree = @"course-center-web/coursecenter/publicCourseCategory/read/getTree";
//再次获取验证码
NSString *const HuFuncItem_GetSms = @"nurse-train-web/nursetrain/app/expertTeam/v2.5.4/device/sms";
//注册设备
NSString *const HuFuncItem_RegisterDevice = @"nurse-train-web/nursetrain/app/expertTeam/v2.5.4/device";
//课程列表
NSString *const HuFuncItem_ExpertCourse = @"nurse-train-web/nursetrain/app/expertTeam/v2.5.4/course";
//获取课程全部评论
NSString *const HuFuncItem_courseAllEvaluate = @"nurse-train-web/nursetrain/app/evaluateInfo/v2.6.1.1/listCommentLabel";
//提交评论
NSString *const HuFunItem_courseCommitEvaluate = @"nurse-train-web/nursetrain/app/evaluateInfo/v2.6.1.1/add";

//建权问题 遗留的14个接口
//app端首页测试是否是简单密码
NSString *const HuFuncItem_appJudgePassword = @"care-nurse/nurse/account/appJudgePassword";
//获取患者床位数量
NSString *const HuFuncItem_queryBeds = @"care-nurse/bedInfo/query/beds";
//获取七牛token
NSString *const HuFuncItem_qiniu_token = @"care-nurse/qiniu/token";
//获取全部的出院患者
NSString *const HuFuncItem_outHospitalListByMonth = @"care-nurse/patient/inhospital/outHospitalListByMonth";
//获取本周的出院患者
NSString *const HuFuncItem_outHospitalListByWeek = @"care-nurse/patient/inhospital/outHospitalListByWeek";
//消息中心
NSString *const HuFuncItem_pushMessage_send_list = @"care-nurse/pushMessage/send/list";
//护士群发消息
NSString *const HuFuncItem_push_message_ward = @"care-nurse/nurse/push/message/ward";
//护士接收消息
NSString *const HuFuncItem_pushMessage_receive_list = @"care-nurse/pushMessage/receive/list";
//添加空床
NSString *const HuFuncItem_add_emptyBeds = @"care-nurse/bedInfo/query/emptyBeds";
//清空我的患者
NSString *const HuFuncItem_delete_byNurseAndWardId = @"care-nurse/nurseBedMapper/delete/byNurseAndWardId";
//老的获取验证码
NSString *const HuFuncItem_old_verifyCode = @"care-nurse/nurse/account/verifyCode";
//新入院
NSString *const HuFuncItem_new_inhospital = @"care-nurse/patient/inhospital/listByWard";
//病人列表 变动
/*HuFuncItem_inlistByNurse  = care-nurse/patient/inhospital/listByNurse*/
//出院患者详情
NSString *const HuFuncItem_outHosiptal_patient_detail = @"care-nurse/nurse/push/class/detail";

//专业资格证书
NSString *const HuFuncItem_GetProLicenseDic = @"care-nurse/data/dic/getProLicenseDic";
//我的 获取用户信息
NSString *const HuFuncItem_GetNurseDetail = @"care-nurse/nurse/account/getNurseDetail";
//语言等级
NSString *const HuFuncItem_GetLangueeDic = @"care-nurse/data/dic/getLangueeDic";
//性别
NSString *const HuFuncItem_GetSexDic = @"care-nurse/data/dic/getSexDic";
//修改个人中心
NSString *const HuFuncItem_NurseInfo = @"care-nurse/nurse/account/update/nurseInfo";
//学历
NSString *const HuFuncItem_GetEducateDic = @"care-nurse/data/dic/getEducateDic";
//层级
NSString *const HuFuncItem_getTierDic = @"care-nurse/data/dic/getTierDic";

//2.5.9接口
//app消息中心
//查询消息中心 大分类接口
NSString *const HuFuncItem_query_pushMsgVo = @"nurse-train-web/nursetrain/app/pushMsg/query/v2.5.9/pushMsgVo";
//查询消息列表
NSString *const HuFuncItem_query_pushMsgs = @"nurse-train-web/nursetrain/app/pushMsg/query/v2.5.9/pushMsgs";
//批量已读接口 post
NSString *const HuFuncItem_read_pushMsgVo = @"nurse-train-web/nursetrain/app/pushMsg/write/v2.5.9/pushMsgVo";
//批量删除接口 post
NSString *const HuFuncItem_delete_pushMsgs = @"nurse-train-web/nursetrain/app/pushMsg/write/v2.5.9/pushMsgs";
//未读消息数
NSString *const HuFuncItem_query_unReadMsgNum = @"nurse-train-web/nursetrain/app/pushMsg/query/v2.5.9/pushMsg";
//同意或者拒绝审核
NSString *const HuFuncItem_query_auditMessage = @"/care-nurse/nurse/registration/auditMessage";

//app培训首页
//app培训首页当日事项
NSString *const HuFuncItem_todayMatter = @"nurse-train-web/nursetrain/app/trainRead/v2.5.9/todayMatter";
//app培训首页后续开展事项
NSString *const HuFuncItem_futureMatter = @"nurse-train-web/nursetrain/app/trainRead/v2.5.9/futureMatter";
//规培管理员详情
NSString *const HuFuncItem_planDetailAdmin = @"nurse-train-web/nursetrain/app/read/standardTrain/v2.6.3/queryTrainPlanDetailForAdmin";
//规培护士详情
NSString *const HuFuncItem_planDetailNurse = @"nurse-train-web/nursetrain/app/read/standardTrain/v2.5.9/queryTrainPlanDetail";
//查询参加人员得分情况
NSString *const HuFuncItem_examGradeDetail = @"nurse-train-web/nursetrain/app/read/train/plan/trainPlanResultRead/v2.5.9/trainPlan/examDetail";
//管理员录入成绩
NSString *const HuFuncItem_planGiveGrade = @"nurse-train-web/nursetrain/app/write/train/plan/trainPlanResultWrite/v2.7.3/trainPlan/submitScore";
//管理员保存成绩
NSString *const HuFuncItem_adminSaveGrade = @"nurse-train-web/nursetrain/app/write/train/plan/trainPlanResultWrite/v2.7.3/trainPlan/saveScore";

//查看出科小结
NSString *const HuFuncItem_queryGraduateReport = @"nurse-train-web/nursetrain/app/read/train/plan/trainPlanStepRead/v2.5.9/trainPlan/queryGraduateReport";
//app规培首页接口
NSString *const HuFuncItem_standTrainIndex = @"nurse-train-web/nursetrain/app/trainRead/v2.5.9/standTrainIndex";
//保存自我总结
NSString *const HuFuncItem_SaveSelfSummary = @"nurse-train-web/nursetrain/app/read/train/plan/trainPlanStepWrite/v2.5.9/trainPlan/saveSelfSummary";
//查询自我总结
NSString *const HuFuncItem_QuerySelfSummary = @"nurse-train-web/nursetrain/app/read/train/plan/trainPlanStepRead/v2.5.9/trainPlan/querySelfSummary";

//增加对规培感兴趣的记录 post
NSString *const HuFuncItem_interestStandardTrain = @"nurse-train-web/nursetrain/app/write/standard/train/user/v2.5.9/interestStandardTrain";
//app用户登录查询是否是规培人员 (返回三种类型 )
NSString *const HuFuncItem_isStandardTrainUser = @"nurse-train-web/nursetrain/app/read/standard/train/user/v2.5.9/isStandardTrainUser";
// 判断个人信息是否完善
NSString *const HuFuncItem_CheckNurseTrain = @"care-nurse/nurse/account/checkNurseTrain";
//更新必修课程视频播放累计时长
NSString *const HuFuncItem_updateTotalStudyTime = @"nurse-train-web/nursetrain/app/course/write/v2.5.9/updateTotalStudyTime";
//app管理员二维码接口考试
NSString *const HuFuncItem_appManagerScan = @"nurse-train-web/nursetrain/app/exam/v2.6.2/QRCode";


//护士扫码签到接口
NSString *const HuFuncItem_nurseScanCode = @"nurse-train-web/nursetrain/app/exam/v2.6.2/scanCodeSignIn";
//护士解答疑问
NSString *const HuFuncItem_questionContent = @"care-nurse/nurse/push/question/content";


//未登录状态下，根据设备uuid，获取虚拟账号
NSString *const HuFuncItem_getVirtualAccount = @"care-nurse/visitor/create";

//app现场培训报名
NSString *const HuFuncItem_nurseTraiOnSiteRegistration = @"nurse-train-web/nursetrain/app/course/write/v2.6.3/signUp";

//发现资讯列表页
NSString *const HuFuncItem_getDescInfoList = @"nurse-train-web/nursetrain/app/nursingInfo/v2.6.1.1/list";
//资讯详情页面
NSString *const HuFuncItem_getInfoDetail = @"nurse-train-web/nursetrain/app/nursingInfo/v2.6.1.1/find";
//资讯浏览接口 (post)
NSString *const HuFuncItem_browseInfo = @"nurse-train-web/nursetrain/app/nursingInfo/v2.6.1.1/viewCalculate";

//发现规培课堂医院列表页
NSString *const HuFuncItem_getDescHospitalList = @"nurse-train-web/nursetrain/app/expertTeam/v2.6.1.1/expertByExpertType/2";

//规培课程二级分类展示
NSString *const HuFuncItem_getDescTrainCourseCategoryList = @"nurse-train-web/nursetrain/app/expertTeam/v2.6.1.1/expertCourseCategoryList";
//病区常用课程
NSString *const HuFuncItem_wardCommonCourse = @"course-center-web/coursecenter/app/course/read/v2.7.5/wardCommonCourse";
//编辑课程详情接口
NSString *const HuFuncItem_courseInfo = @"course-center-web/coursecenter/app/course/write/v2.7.5/courseInfo";
//编辑患者详情
NSString *const HuFuncItem_patientInfo = @"care-nurse/patient/account/v2.7.5/patientInfo";
//获取二维码
NSString *const HuFuncItem_getPatientInhospitalCode = @"care-patient/patient/account/getPatientInhospitalCode";

//2.6.3
//app管理员发布的课程列表[培训]
NSString *const HuFuncItem_managerCourseList = @"nurse-train-web/nursetrain/app/course/v2.6.3/managerCourseList";
//app管理员发布的课程详情[培训]
NSString *const HuFuncItem_managerCourseDetail = @"nurse-train-web/nursetrain/app/course/v2.6.3/managerCourseDetail";

//2.6.5错题集版本
//查询错题集
NSString *const HuFuncItem_wrongExerciseCollection = @"nurse-train-web/nursetrain/app/exercise/v2.6.2.1/wrongExerciseCollection";
//删除错题集 post
NSString *const HuFuncItem_removeWrongExercise = @"nurse-train-web/nursetrain/app/exercise/v2.6.2.1/wrongExerciseCollection";

//2.7.3修改添加 规培相关列表都用如下接口
//今日事项接口(总首页接口)
NSString *const HuFuncItem_homePagetodoList = @"nurse-train-web/nursetrain/app/homePage/v2.7.3/todoListForToday";
//护士规培列表
NSString *const HuFuncItem_standardTraintodoList = @"nurse-train-web/nursetrain/app/homePage/v2.7.3/standardTraintodoList";
//首页待办接口
NSString *const HuFuncItem_homepageListForUnstart = @"nurse-train-web/nursetrain/app/homePage/v2.7.3/homepageListForUnstart";
//管理首页接口
NSString *const HuFuncItem_managerHomePagetodoList = @"nurse-train-web/nursetrain/app/homePage/v2.7.3/managerHomePagetodoList";
//app规培现场培训课程详情
NSString *const HuFuncItem_liveTrainDetail = @"nurse-train-web/nursetrain/app/read/standardTrain/v2.7.3/sceneTrainDetail";

//2.7.7版本升级接口
NSString *const HuFuncItem_queryAppUpgrade = @"care-nurse/AppUpgradeReadRest/V1/V1/ios/queryAppUpgrade";
//现场培训二维码接口
NSString *const HuFuncItem_trainQRCode = @"nurse-train-web/nursetrain/app/course/v2.9.3/QRCode";


//搜索医院接口
NSString *const HuFuncItem_registrationHospSearch = @"care-nurse/hospital/queryBy/hospitalName";
//查询组织机构
NSString *const HuFuncItem_mechanismOrganization = @"care-nurse/nurse/mechanism/organization";
//查询用户当前申请信息
NSString *const HuFuncItem_nurseRegisterMessage = @"care-nurse/nurse/registration/findMessage";
//提交组织机构
NSString *const HuFuncItem_submitRegisterMessage = @"care-nurse/nurse/registration/registerMessage";
//修改组织机构
NSString *const HuFuncItem_updateRegisterMessage = @"care-nurse/nurse/registration/updateMessage";
//切换医院
NSString *const HuFuncItem_changeHosptialRequest = @"care-nurse/nurse/mechanism/controlLimit";

//根据组织id查询用户列表
NSString *const HuFuncItem_searchManagementById = @"care-nurse/personnel/management/users";

//查询邀请用户信息
NSString *const HuFuncItem_searchManagementUser = @"care-nurse//personnel/management/user";

//修改邀请用户
NSString *const HuFuncItem_changeOutManagementUser = @"care-nurse/personnel/management/updateUser";

//新增邀请用户
NSString *const HuFuncItem_addNewManagementUser = @"care-nurse/personnel/management/user";

//查询权限树--组织机构
NSString *const HuFuncItem_getManagementTreeUser = @"care-nurse//personnel/management/organization";

//推送课程撤回
NSString *const HuFuncItem_classRevoke = @"care-nurse/nurse/push/class/revoke";

//2.9.3
//总学分，总时长
NSString *const HuFuncItem_searchForStudentCreditPeriodCount = @"nurse-train-web/nursetrain/app/creditPeriod/read/v2.9.3/searchForStudentCreditPeriodCount";
//app学员学分详情分页接口
NSString *const HuFuncItem_searchForStudentCreditDetail = @"nurse-train-web/nursetrain/app/creditPeriod/read/v2.9.3/searchForStudentCreditDetail";

// 2.8.1 积分接口
// app签到送积分
NSString *const HuFuncItem_pointSignIn = @"care-nurse/nurse/account/v2.8.1/signIn";
// 积分任务列表
NSString *const HuFuncItem_pointTaskList = @"care-nurse/account/point/v2.8.1/taskList";
//积分总数
NSString *const HuFuncItem_pointCount = @"care-nurse/account/gold/andPoint/count";
//获取签到状态
NSString *const  HuFuncItem_signState = @"care-nurse/nurse/account/v2.8.1/signState";
//获取支付方式 [可以返回余额， 和用户积分]
NSString *const  HuFuncItem_getPayMethod = @"care-nurse/account/gold/v2.8.1/getPayMethod";
//app职工满意度未提交、已提交、已过期列表
NSString *const HuFuncItem_queryEmpPaperSubmit = @"care-nurse/employeePaperSubmitReadRest/read/v3.0.0/queryEmpPaperSubmit";
//未提交总数
NSString *const HuFuncItem_queryEmpPaperNoSubmitTotal = @"care-nurse/employeePaperSubmitReadRest/read/v3.0.0/queryEmpPaperNoSubmitTotal";
//极光绑定相关接口 post接口
NSString *const  HuFuncItem_bindJPushDevice = @"care-nurse/pushMessage/bindJPushDevice";//默认317护绑定
NSString *const  HuFuncItem_CFYbindJPushDevice = @"care-nurse/pushMessage/CFYbindJPushDevice";//重附一极光绑定
NSString *const  HuFuncItem_YGYbindJPushDevice = @"care-nurse/pushMessage/YGYbindJPushDevice";//医管苑极光绑定
NSString *const  HuFuncItem_FDbingJPushDevice = @"care-nurse/pushMessage/FDbindJPushDevice";//福鼎极光绑定
////3.1.3历年真题
//获取试卷列表
NSString *const  HuFuncItem_getRealPaperList = @"nurse-train-web/nursetrain/app/experiencePaperReadApp/v3.1.3/paperPage";
//获取试卷接口
NSString *const  HuFuncItem_getRealTestPaper = @"nurse-train-web/nursetrain/app/experiencePaperReadApp/v3.1.3/testPaper";
//真题试卷交卷接口 post
NSString *const  HuFuncItem_realCommitPaper = @"nurse-train-web/nursetrain/app/experiencePaperWriteApp/v3.1.3/commitPaper";
//购买试卷 post
NSString *const  HuFuncItem_buyRealPaper = @"nurse-train-web/nursetrain/app/experiencePaperWriteApp/v3.1.3/buyPaper";

//更新日志列表
NSString *const HuFuncItem_queryAppUpgradeLog_list = @"care-nurse/AppUpgradeReadRest/V1/queryAppUpgradeLog/list";
//更新日志详情说明
NSString *const HuFuncItem_queryAppUpgradeLogDetail = @"care-nurse/AppUpgradeReadRest/V1/queryAppUpgradeLog/detail";

//真题集创建订单
NSString *const HuFuncItem_ap_porders_list = @"tradecenter/app/examQuesRest/createOrder";

////3.2.0
//分组培训 - 管理列表
NSString *const HuFuncItem_manage_studyGroup_list = @"nurse-train-web/nursetrain/app/read/manage/group/v3.2.0/list";
//分组培训 - 我的分组培训（分页）
NSString *const HuFuncItem_manage_webGroup_read_my = @"nurse-train-web/nursetrain/app/webGroup/read/my";
//分组培训 - app分组培训列表（分页）
NSString *const HuFuncItem_manage_webGroup_read_list = @"nurse-train-web/nursetrain/app/webGroup/read/list";
//分组培训 - 分组培训详情
NSString *const HuFuncItem_manage_webGroup_read_detail = @"nurse-train-web/nursetrain/app/webGroup/read/detail";
//分组培训 - app分组培训列表名
NSString *const HuFuncItem_manage_webGroup_read_title = @"nurse-train-web/nursetrain/app/webGroup/read/title";
//分组培训 - 学习计划列表（分页）
NSString *const HuFuncItem_manage_webGroup_read_studyPlanPage = @"nurse-train-web/nursetrain/app/webGroup/read/studyPlanPage" ;
//分组培训 - 学习记录列表（分页）
NSString *const HuFuncItem_manage_webGroup_read_studyRecordPage = @"nurse-train-web/nursetrain/app/webGroup/read/studyRecordPage" ;
////3.1.9换肤特有接口
//查询某个医院下拥有的app功能权限
NSString *const HuFuncItem_appPrivilegeQuery = @"care-nurse/hospitalConfig/appPrivilegeQuery";
//获取app医院登陆界面相关信息
NSString *const HuFuncItem_getAppCustomHospitalInfo = @"care-nurse/hospitalConfig/getAppCustomHospitalInfo";
//3.3.9
//发现搜索
NSString *const HuFuncItem_search_course = @"nurse-train-web/nursetrain/app/expertTeam/v2.5.4/course";

//3.1.4模拟练习
//练习题 - 练习题列表
NSString *const HuFuncItem_practice_list = @"nurse-train-web/nursetrain/app/read/practice/v3.1.4/list";
//练习题 - 排名
NSString *const HuFuncItem_practice_rank = @"nurse-train-web/nursetrain/app/read/practice/v3.1.4/rank";
//练习题 - 选择题型练习列表
NSString *const HuFuncItem_practice_process = @"nurse-train-web/nursetrain/app/read/practice/v3.1.4/process";
//练习题 - 获取练习题
NSString *const HuFuncItem_practiceExam = @"nurse-train-web/nursetrain/app/read/practiceexam/v3.1.4/list";
//练习题 - 保存练习结果和进度 post
NSString *const HuFuncItem_savePraticeExamProgress = @"nurse-train-web/nursetrain/app/write/practiceexam/v3.1.4/result";
//练习题 - 保存错题 post
NSString *const HuFuncItem_addWrongSet = @"nurse-train-web/nursetrain/app/write/practiceexam/v3.1.4/wrongExamSet";
NSString *const HuFuncItem_practice_myrank = @"nurse-train-web/nursetrain/app/read/practice/v3.1.4/myrank";
//患者设置疾病
NSString *const HuFuncItem_diseaseInfo_update = @"care-nurse/patient/inhospital/diseaseInfo/update";

//3.4.0
//app课程详情中间页面查询
NSString *const HuFuncItem_getCourseDetailMidd = @"nurse-train-web/nursetrain/app/course/v3.4.0/getCourseDetailMidd";
//课程详情v3.4.0
NSString *const HuFuncItem_newGetCourseDetail = @"nurse-train-web/nursetrain/app/course/v3.4.0/getCourseDetail";
//新增点赞记录接口 post
NSString *const HuFuncItem_addPraiseRecord = @"nurse-train-web/nursetrain/app/courseExtend/write/v3.4.0/addPraiseRecord";
//新增培训笔记记录接口 post
NSString *const HuFuncItem_addTrainNote = @"nurse-train-web/nursetrain/app/courseExtend/write/v3.4.0/addTrainNote";
//app培训笔记查询
NSString *const HuFuncItem_queryUserTrainNote = @"nurse-train-web/nursetrain/app/courseExtend/read/v3.4.0/queryUserTrainNote";
//app课后作业详情查询
NSString *const HuFuncItem_queryHomeWorkDetail = @"nurse-train-web/nursetrain/app/courseExtend/read/v3.4.0/queryHomeWorkDetail";
//课程留言 post
NSString *const HuFuncItem_courseComment = @"nurse-train-web/nursetrain/app/trainComment/write/v3.4.0/comment";
//课程留言列表（分页）
NSString *const HuFuncItem_queryCommentList = @"nurse-train-web/nursetrain/app/trainComment/read/v3.4.0/page";

//App个人中心—我的课后作业列表查询
NSString *const HuFuncItem_queryHomeWorkList = @"nurse-train-web/nursetrain/app/courseExtend/read/v3.4.0/queryHomeWorkList";

//app课件累计时长查询接口
NSString *const HuFuncItem_queryAppStudyTime = @"nurse-train-web/nursetrain/app/courseExtend/read/v3.4.0/queryAppStudyTime";
//app课件学习状态更新接口 post
NSString *const HuFuncItem_updateResourceStudyStatus = @"nurse-train-web/nursetrain/app/courseExtend/write/v3.4.0/updateResourceStudyStatus";
//随堂测试交卷接口-v3.4.0 post
NSString *const HuFuncItem_coursePaper = @"nurse-train-web/nursetrain/app/exercise/v3.4.0/coursePaper";
//APP我的证书
NSString *const HuFuncItem_queryAppTrainCertificate = @"nurse-train-web/nursetrain/app/trainCertificate/read/v3.4.0/queryAppTrainCertificate";

//app培训证书详情
NSString *const HuFuncItem_queryAppTrainCertificateDetail = @"nurse-train-web/nursetrain/app/trainCertificate/read/v3.4.0/queryAppTrainCertificateDetail";

//VIP  app优惠券接口
//app查询订单可用的优惠券接口
NSString *const HuFuncItem_canUseQuery = @"coupon-center-web/couponCenter/app/r/customerCoupon/v3.6.8/canUseQuery";
//VIP列表 VIP主页
NSString *const HuFuncItem_vipList = @"course-center-web/coursecenter/commodity/read/vip/list";



//3.6.8VIP
//app分页查询可兑换的优惠券接口
NSString *const HuFuncItem_pageQuery_baseCoupon = @"coupon-center-web/couponCenter/app/r/baseCoupon/v3.6.8/pageQuery";
//分页查询账户持有的优惠券接口
NSString *const HuFuncItem_pageQuery_customerCoupon = @"coupon-center-web/couponCenter/app/r/customerCoupon/v3.6.8/pageQuery";

//用户VIP信息查询
NSString *const HuFuncItem_account_queryUserVipFlag = @"care-nurse/nurse/account/queryUserVipFlag";
//新增优惠券订单接口
NSString *const HuFuncItem_couponTrade_createOrder = @"tradecenter/app/couponTrade/createOrder";
//取消优惠券订单
NSString *const HuFuncItem_couponTrade_cancelOrder = @"tradecenter/app/couponTrade/cancelOrder";
//生成vip订单
NSString *const HuFuncItem_vipTrade_createOrder = @"tradecenter/app/vipTrade/createOrder";
//取消VIP订单
NSString *const HuFuncItem_vipTrade_cancelOrder = @"tradecenter/app/vipTrade/cancelOrder";

//3.4.0.1用户登录
//APP扫码后请求登录获取用户名和头像
NSString *const HuFuncItem_queryUserInfo = @"user/qrcodeRest/queryUserInfo";
//APP扫码后确认登录Post
NSString *const HuFuncItem_qrcode_scanlogin = @"user/qrcodeRest/login";


