//
//  HuFuctionItemDefine.h
//  317hu
//
//  Created by yanChengYi on 2017/2/28.
//  Copyright © 2017年 伯仲. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *const HuFuncItem_getPaper;
extern NSString *const HuFuncItem_getCoursePaper; //获取随堂测验接口

//考试获取试卷接口（带填空题）
extern NSString *const HuFuncItem_getExam;
extern NSString *const HuFuncItem_getNewExam;
extern NSString *const HuFuncItem_doPaper;
extern NSString *const HuFuncItem_doCoursePager; //随堂测验答题
extern NSString *const HuFuncItem_doExamPaper;
//考试获取试卷接口（新）
extern NSString *const HuFuncItem_newGetExam;
//8.12 考试试卷提交(新)（考试）
extern NSString *const HuFuncItem_uploadExamPaper;
extern NSString *const HuFuncItem_getPaperRecord;
extern NSString *const HuFuncItem_getPaperRecordDetail;
extern NSString *const HuFunction_getExamPaperDetail;
extern NSString *const HuFuncItem_searchNTCourse;
extern NSString *const HuFuncItem_searchNTCourse_get;
extern NSString *const HuFuncItem_getTrainAlreadyList;
//2.6.3选修列表
extern NSString *const HuFuncItem_getTrainOptionCourseList;
extern NSString *const HuFuncItem_getTrainStudingList;
extern NSString *const HuFuncItem_getTrainOptionalList;
extern NSString *const HuFuncItem_getTrainRequiredList;
extern NSString *const HuFuncItem_joinMyCourse;
extern NSString *const HuFuncItem_reloadSingleCourse;
extern NSString *const HuFuncItem_getDataDictionaryList;
extern NSString *const HuFuncItem_getTrainClassifyList;
extern NSString *const HuFuncItem_getTrainStudingList_new;
//选修是否需要更新课程
extern NSString *const HuFuncItem_updateCourseJudge;
//更新学员选修课内容接口
extern NSString *const HuFuncItem_courseForUser;

extern NSString *const HuFuncItem_testList;
//管理员考试列表
extern NSString *const HuFunItem_adminTestList;
//管理员考试详情
extern NSString *const HuFunItem_adminTestDetail;
//管理员获取考生信息
extern NSString *const HuFunItem_adminTestStuList;

extern NSString *const HuFuncItem_Banner;

//护士培训2.4.2banner
extern NSString *const HuFuncItem_newBanner;

extern NSString *const HuFuncItem_NeedToKonw;

extern NSString *const HuFuncItem_hospList;
extern NSString *const HuFuncItem_hospClassList;
extern NSString *const HuFuncItem_getCouresDetail;
//8.11 app获取系统时间接口
extern NSString *const HuFuncItem_systemTime;
// 5.25 app查询视频插题v2.4.2
extern NSString *const HuFuncItem_searchForVideoInsertTitle;

/////////2.2.7 课程中心修改添加/////////
//1.1 我的课程列表
extern NSString *const HuFuncItem_myCourse_list;
//1.2 我的课程内容详情
extern NSString *const HuFuncItem_myCourse_detail;
//2.1 我的医院的课程按照类型显示主页
extern NSString *const HuFuncItem_myHospitalCourse;
//2.2 我的医院的课程按照类型显示更多
extern NSString *const HuFuncItem_myHospitalCourse_byType_more;
//2.3 院内课程搜索
extern NSString *const HuFuncItem_myHospitalCourse_search;
//2.4 院内课程查看价格
extern NSString *const HuFuncItem_myHospitalCourse_getPrice;
//2.5 我的医院课程内容详情
extern NSString *const HuFuncItem_myHospitalCourse_detail;
//2.6 收藏医院的课程列表
extern NSString *const HuFuncItem_myCollectHospitalCourse_list;
//2.7 获取宣教分类列表（推送左边列表【按科室，按类别】）
extern NSString *const HuFuncItem_classKind_list;
//2.8 我的医院的课程按照类型显示更多 场景：推送课程 (推送右边列表【按科室，按类别】)
extern NSString *const HuFuncItem_byType_more_forPushClass;
//2.12 添加推送收藏的课程列表 (和2.8很类似，只是是添加收藏界面进入)
extern NSString *const HuFuncItem_byType_more_forFavoriteClass;
//2.9 对提交至院内的课程进行审核
extern NSString *const HuFuncItem_hospitalCourse_review;
// 2.10 提交院内课程至公共平台
extern NSString *const HuFuncItem_hospitalCourse_submitToPublic;
// 2.11 院内课程设置价格
extern NSString *const HuFuncItem_hospitalCourse_setPrice;
//培训课程详情
extern NSString *const HuFuncItem_TraingingCourseDetail;
//护士培训首页最新课程
extern NSString *const HuFunItem_trainMaininHospitalClassList;

//三. 公共平台课程
//3.1 查询公共平台课程分类(显示5个热门分类)
extern NSString *const HuFuncItem_getHotCategory_list;
//3.2 查询公共平台课程分类列表(子集分类)
extern NSString *const HuFuncItem_getListCount_list;
//3.3 公共平台课程搜索
extern NSString *const HuFuncItem_publicCourse_list;
//3.4 收藏公共平台的课程列表
extern NSString *const HuFuncItem_myCollectPublicCourse_list;
//3.5 公共平台课程内容详情
//extern NSString *const HuFuncItem_publicCourse_detail;
//3.6 公共平台课程评审列表 新老版本列表
extern NSString *const HuFuncItem_publicCourse_review_list;
//3.7 公共平台课程评审列表
extern NSString *const HuFuncItem_expertAssessRecord_list;


// 4.1 新增护士阅读课程记录
extern NSString *const HuFuncItem_nurse_readRecord_add;
// 4.2 护士(取消)收藏课程
extern NSString *const HuFuncItem_collectCourse_addOrCancel;
// 4.3 护士(取消)点赞课程
extern NSString *const HuFuncItem_praiseCourse_addOrCancel;
// 4.4 删除我收藏的课程
extern NSString *const HuFuncItem_myCollectClass_delete;
// 5.1 获取安存证书
extern NSString *const HuFuncItem_safeStorage_detail;
//app安全性相关api
//1.3 获取token
extern NSString *const HuFuncItem_getToken;
//2.7.5添加 获取submitToken
extern NSString *const HuFuncItem_getSubmitToken;
//2.7.9获取医院列表
extern NSString *const HuFuncItem_getHosList;
// 获取用户信息--审核通过后，获取相关登录信息
extern NSString *const HuFuncItem_getUserInfo;

extern NSString *const HuFuncItem_getExamReport;
extern NSString *const HuFuncItem_getExerciseReport;

//四.交易相关
//1.1查询余额
extern NSString *const HuFuncItem_deposit_balance; //ok
//1.2余额明细
extern NSString *const HuFuncItem_bill_list; //ok
//2.1订单列表
extern NSString *const HuFuncItem_orders_list; //ok
//2.2订单明细
extern NSString *const HuFuncItem_orders_detail;
//2.3取消订单
extern NSString *const HuFuncItem_orders_cancel; //ok
//3.1余额支付 post
extern NSString *const HuFuncItem_payment_byBalance; //ok
//3.2第三方支付方式 post
extern NSString *const HuFuncItem_payment_byOtherPart; //ok
//3.3获取支付结果
extern NSString *const HuFuncItem_payment_getStatus; //ok
//4.1创建订单 post
extern NSString *const HuFuncItem_courseTrade_createOrder; //ok
//5.1创建交易订单 post
extern NSString *const HuFuncItem_depositTrade_createOrder;
// 订单列表是否显示小红点 （大于0显示）
extern NSString *const HuFuncItem_orders_variousNum;
// 获取资金明细
extern NSString *const HUFuncItem_DatailListForMoth;

//五.开放注册
//1.是否绑定第三方账号接口
extern NSString *const HuFuncItem_isBindOtherPart; //ok
//2.校验验证码是否正确及手机号是否存在接口
extern NSString *const HuFuncItem_deposit_verifyCode; //ok
//3.注册申请接口 post
extern NSString *const HuFuncItem_registerAccount; //ok
//4.发送验证码 post
extern NSString *const HuFuncItem_sendVerific; //ok
//5.邀请同事 post
extern NSString *const HuFuncItem_invitePerson; //ok
//6.获取科室、病区
extern NSString *const HuFuncItem_getuExtUpdTree; //ok
//新增课程消息
extern NSString *const HuFuncItem_getMessage; //ok
//7.获取用户是否绑定支付宝
extern NSString *const HuFuncItem_judgeBindAlipay;
//8.获取支付宝验证码
extern NSString *const HuFuncItem_getAlipayVerify;
//9.绑定支付宝
extern NSString *const HuFuncItem_bindAlipay;
//10.提现界面详情
extern NSString *const HuFuncItem_WithDrawDetail;
//11.创建提现订单
extern NSString *const HuFuncItem_createWithDraw;

//六.新发现界面
//1.本院宣教获取分类列表
extern NSString *const HuFuncItem_inHosptialFatherClassifyList; //ok
//2.本院宣教对应分类课程列表
extern NSString *const HuFuncItem_inHosptialCouseList; //ok
//3.发现界面课程库列表以及搜索接口
extern NSString *const HuFuncItem_DiscoverCourseLibraryList; //ok
//4.课程库详情页
extern NSString *const HuFuncItem_CourseLibraryDetial; //ok




//其他 以前317护接口
//获取udesk url链接 （个人账号权限才需要）
extern NSString *const HuFuncItem_getGenerateConsultUrl;

//2.4.7版本 智能推送
//推送的课程取消推送 post
extern NSString *const HuFuncItem_push_class_cancel;
//护士手动添加病人 post
extern NSString *const HuFuncItem_addPatient_byNurse;
//护士手动取消添加病人 post
extern NSString *const HuFuncItem_cancelAddPatient;
//病人列表 变动
extern NSString *const HuFuncItem_inhospital_listByNurse;
//护士审核入院接口变动 post
extern NSString *const HuFuncItem_apply_review;
//病人点击的时候跳转那个页面判断
extern NSString *const HuFuncItem_inorout_status;
//病人二维码那个页面的基本信息查询
extern NSString *const HuFuncItem_getPatientQRCodeDetail; //ok
//判断是否为对接病区
extern NSString *const HuFuncItem_judgeSystemDockingFlag;
//疾病的推送计划
extern NSString *const HuFuncItem_push_course_plan;
//医院信息查询-智能推送
extern NSString *const HuFuncItem_hospital_info;
//医院信息查询-智能推送(含是否开通智能推送等相关信息)
extern NSString *const HuFuncItem_hospital_info;
//3.1 搜索疾病APP端（展示疾病列表）
extern NSString *const HuFuncItem_DiseaseReadAppList;
//内购 创建订单
extern NSString *const HuFuncItem_CreateOrder;
//苹果支付(内购)完成后 验证支付是否成功
extern NSString *const HuFuncItem_ByApplePay;

//2.5.4 发现版本接口
//培训分类
extern NSString *const HuFuncItem_discover_classify;
//发现首页
extern NSString *const HuFuncItem_discover_index;
//红点提醒
extern NSString *const HuFuncItem_discover_remind;
//取消发现小红点 delete
extern NSString *const HuFuncItem_discover_delRemind;
//专家详细
extern NSString *const HuFuncItem_expertDetail;
//专家列表
extern NSString *const HuFuncItem_expertList;
//课程详细
extern NSString *const HuFuncItem_courseDetail;
//2.6.1.1专家课程详情
extern NSString *const HuFuncItem_courseDetailNew;
//2.6.1.1培训课程详情
extern NSString *const HuFuncItem_trainCourseDetailNew;
//问答列表
extern NSString *const HuFuncItem_questionList;
//提问 post
extern NSString *const HuFuncItem_question;
//关注取消关注 put
extern NSString *const HuFunItem_attention;
//中卫主页
extern NSString *const HuFuncItem_ZWDescr;
// 获取公共平台课程分类--树状
extern NSString *const HuFuncItem_GetTree;
//再次获取验证码
extern NSString *const HuFuncItem_GetSms;
//注册设备
extern NSString *const HuFuncItem_RegisterDevice;
//课程列表
extern NSString *const HuFuncItem_ExpertCourse;
//获取课程全部评论
extern NSString *const HuFuncItem_courseAllEvaluate;
//提交评论
extern NSString *const HuFunItem_courseCommitEvaluate;
//层级
extern NSString *const HuFuncItem_getTierDic;

//建权问题 遗留的14个接口
//app端首页测试是否是简单密码
extern NSString *const HuFuncItem_appJudgePassword;
//获取患者床位数量
extern NSString *const HuFuncItem_queryBeds;
//获取七牛token
extern NSString *const HuFuncItem_qiniu_token;
//获取全部的出院患者
extern NSString *const HuFuncItem_outHospitalListByMonth;
//获取本周的出院患者
extern NSString *const HuFuncItem_outHospitalListByWeek;
//消息中心
extern NSString *const HuFuncItem_pushMessage_send_list;
//护士群发消息
extern NSString *const HuFuncItem_push_message_ward;
//护士接收消息
extern NSString *const HuFuncItem_pushMessage_receive_list;
//添加空床
extern NSString *const HuFuncItem_add_emptyBeds;
//清空我的患者
extern NSString *const HuFuncItem_delete_byNurseAndWardId;
//老的获取验证码
extern NSString *const HuFuncItem_old_verifyCode;
//新入院
extern NSString *const HuFuncItem_new_inhospital;
//病人列表 变动
extern NSString *const HuFuncItem_inlistByNurse;
//出院患者详情
extern NSString *const HuFuncItem_outHosiptal_patient_detail;
//专业资格证书
extern NSString *const HuFuncItem_GetProLicenseDic;
//我的 获取用户信息
extern NSString *const HuFuncItem_GetNurseDetail;
//语言等级
extern NSString *const HuFuncItem_GetLangueeDic;
//性别
extern NSString *const HuFuncItem_GetSexDic;
//修改个人中心
extern NSString *const HuFuncItem_NurseInfo;
//学历
extern NSString *const HuFuncItem_GetEducateDic;

//2.5.9接口
//app消息中心
//查询消息中心 大分类接口
extern NSString *const HuFuncItem_query_pushMsgVo;
//查询消息列表
extern NSString *const HuFuncItem_query_pushMsgs;
//批量已读接口
extern NSString *const HuFuncItem_read_pushMsgVo;
//批量删除接口
extern NSString *const HuFuncItem_delete_pushMsgs;
//未读消息数
extern NSString *const HuFuncItem_query_unReadMsgNum;
//同意或者拒绝审核
extern NSString *const HuFuncItem_query_auditMessage;


//app培训首页
//app培训首页当日事项
extern NSString *const HuFuncItem_todayMatter;
//app培训首页后续开展事项
extern NSString *const HuFuncItem_futureMatter;
//规培管理员详情
extern NSString *const HuFuncItem_planDetailAdmin;
//规培护士详情
extern NSString *const HuFuncItem_planDetailNurse;
//查询参加人员得分情况
extern NSString *const HuFuncItem_examGradeDetail;
//管理员录入成绩
extern NSString *const HuFuncItem_planGiveGrade;
//管理员保存成绩
extern NSString *const HuFuncItem_adminSaveGrade;
//查看出科小结
extern NSString *const HuFuncItem_queryGraduateReport;
//app规培首页接口
extern NSString *const HuFuncItem_standTrainIndex;
//增加对规培感兴趣的记录 post
extern NSString *const HuFuncItem_interestStandardTrain;
//app用户登录查询是否是规培人员 (返回三种类型 )
extern NSString *const HuFuncItem_isStandardTrainUser;
//保存自我总结
extern NSString *const HuFuncItem_SaveSelfSummary;
//查询自我总结
extern NSString *const HuFuncItem_QuerySelfSummary;
// 判断个人信息是否完善
extern NSString *const HuFuncItem_CheckNurseTrain;
//更新必修课程视频播放累计时长
extern NSString *const HuFuncItem_updateTotalStudyTime;
//app管理员二维码接口
extern NSString *const HuFuncItem_appManagerScan;

//护士扫码签到接口
extern NSString *const HuFuncItem_nurseScanCode;
//护士解答疑问
extern NSString *const HuFuncItem_questionContent;
//未登录状态下，根据设备uuid，获取虚拟账号
extern NSString *const HuFuncItem_getVirtualAccount;

//app现场培训报名
extern NSString *const HuFuncItem_nurseTraiOnSiteRegistration;

//发现资讯列表页
extern NSString *const HuFuncItem_getDescInfoList;
//资讯详情页面
extern NSString *const HuFuncItem_getInfoDetail;
//资讯浏览接口 (post)
extern NSString *const HuFuncItem_browseInfo;
//发现规培课堂医院列表页
extern NSString *const HuFuncItem_getDescHospitalList;
//规培课程二级分类展示
extern NSString *const HuFuncItem_getDescTrainCourseCategoryList;
//病区常用课程
extern NSString *const HuFuncItem_wardCommonCourse;
//编辑课程详情接口
extern NSString *const HuFuncItem_courseInfo;
//编辑患者详情
extern NSString *const HuFuncItem_patientInfo;
//获取二维码
extern NSString *const HuFuncItem_getPatientInhospitalCode;

//2.6.3
//app管理员发布的课程列表[培训]
extern NSString *const HuFuncItem_managerCourseList;
//app管理员发布的课程详情[培训]
extern NSString *const HuFuncItem_managerCourseDetail;
//对课程提问
extern NSString *const HuFuncItem_commentAdd;
//课程问答列表
extern NSString *const HuFuncItem_commentQuestionList;
//2.6.5错题集版本
//查询错题集
extern NSString *const HuFuncItem_wrongExerciseCollection;
//删除错题集 post
extern NSString *const HuFuncItem_removeWrongExercise;

//2.7.3修改添加 规培相关列表都用如下接口
//今日事项接口(总首页接口)
extern NSString *const HuFuncItem_homePagetodoList;
//护士规培列表
extern NSString *const HuFuncItem_standardTraintodoList;
//首页待办接口
extern NSString *const HuFuncItem_homepageListForUnstart;
//管理首页接口
extern NSString *const HuFuncItem_managerHomePagetodoList;
//app规培现场培训课程详情
extern NSString *const HuFuncItem_liveTrainDetail;

//2.7.7版本升级接口
extern NSString *const HuFuncItem_queryAppUpgrade;

//现场培训二维码接口
extern NSString *const HuFuncItem_trainQRCode;

//搜索医院接口
extern NSString *const HuFuncItem_registrationHospSearch;
//查询组织机构
extern NSString *const HuFuncItem_mechanismOrganization;
//查询用户当前申请信息
extern NSString *const HuFuncItem_nurseRegisterMessage;
//提交组织机构
extern NSString *const HuFuncItem_submitRegisterMessage;
//修改组织机构
extern NSString *const HuFuncItem_updateRegisterMessage;
//切换医院
extern NSString *const HuFuncItem_changeHosptialRequest;

//根据组织id查询用户列表
extern NSString *const HuFuncItem_searchManagementById;
//查询邀请用户信息
extern NSString *const HuFuncItem_searchManagementUser;
//修改邀请用户
extern NSString *const HuFuncItem_changeOutManagementUser;
//新增邀请用户
extern NSString *const HuFuncItem_addNewManagementUser;
//查询权限树--组织机构
extern NSString *const HuFuncItem_getManagementTreeUser;

//空床添加患者
extern NSString *const HuFuncItem_addPatientByNurse;
//推送课程撤回
extern NSString *const HuFuncItem_classRevoke;

//2.9.3
//总学分，总时长
extern NSString *const HuFuncItem_searchForStudentCreditPeriodCount;
//app学员学分详情分页接口
extern NSString *const HuFuncItem_searchForStudentCreditDetail;

// 2.8.1 积分接口
// app签到送积分
extern NSString *const  HuFuncItem_pointSignIn;
// 积分任务列表
extern NSString *const  HuFuncItem_pointTaskList;
//积分总数
extern NSString *const  HuFuncItem_pointCount;
//获取签到状态
extern NSString *const  HuFuncItem_signState;
//获取支付方式 [可以返回余额， 和用户积分]
extern NSString *const  HuFuncItem_getPayMethod;
//积分支付
extern NSString *const HuFuncItem_payment_byAccountPoint;

//app职工满意度未提交、已提交、已过期列表
extern NSString *const HuFuncItem_queryEmpPaperSubmit;
//未提交总数
extern NSString *const HuFuncItem_queryEmpPaperNoSubmitTotal;
//极光绑定相关接口 post接口
extern NSString *const  HuFuncItem_bindJPushDevice;//默认317护绑定
extern NSString *const  HuFuncItem_CFYbindJPushDevice;//重附一极光绑定
extern NSString *const  HuFuncItem_YGYbindJPushDevice;//医管苑极光绑定
extern NSString *const  HuFuncItem_FDbingJPushDevice;//福鼎极光绑定
//3.1.3历年真题
//获取试卷列表
extern NSString *const  HuFuncItem_getRealPaperList;
//获取试卷接口
extern NSString *const  HuFuncItem_getRealTestPaper;
//真题试卷交卷接口 post
extern NSString *const  HuFuncItem_realCommitPaper;
//购买试卷 post
extern NSString *const  HuFuncItem_buyRealPaper;

//更新日志列表
extern NSString *const HuFuncItem_queryAppUpgradeLog_list;
extern NSString *const HuFuncItem_queryAppUpgradeLogDetail;

//真题集创建订单
extern NSString *const HuFuncItem_ap_porders_list;

////3.2.0
//分组培训 - 管理列表
extern NSString *const HuFuncItem_manage_studyGroup_list;
//分组培训 - 我的分组培训（分页）
extern NSString *const HuFuncItem_manage_webGroup_read_my;
//分组培训 - app分组培训列表（分页）
extern NSString *const HuFuncItem_manage_webGroup_read_list;
//分组培训 - 分组培训详情
extern NSString *const HuFuncItem_manage_webGroup_read_detail;
//分组培训 - app分组培训列表名
extern NSString *const HuFuncItem_manage_webGroup_read_title;
//分组培训 - 学习计划列表（分页）
extern NSString *const HuFuncItem_manage_webGroup_read_studyPlanPage;
//分组培训 - 学习记录列表（分页）
extern NSString *const HuFuncItem_manage_webGroup_read_studyRecordPage;

////3.1.9换肤特有接口
//查询某个医院下拥有的app功能权限
extern NSString *const HuFuncItem_appPrivilegeQuery;
//获取app医院登陆界面相关信息
extern NSString *const HuFuncItem_getAppCustomHospitalInfo;
//3.3.9
//发现搜索
extern NSString *const HuFuncItem_search_course;

//3.1.4模拟练习
//练习题 - 练习题列表
extern NSString *const HuFuncItem_practice_list;
//练习题 - 排名
extern NSString *const HuFuncItem_practice_rank;
//练习题 - 选择题型练习列表
extern NSString *const HuFuncItem_practice_process;
//练习题 - 获取练习题
extern NSString *const HuFuncItem_practiceExam;
//练习题 - 保存练习结果和进度 post
extern NSString *const HuFuncItem_savePraticeExamProgress;
//练习题 - 保存错题 post
extern NSString *const HuFuncItem_addWrongSet;

extern NSString *const HuFuncItem_practice_myrank;
//患者设置疾病
extern NSString *const HuFuncItem_diseaseInfo_update;

//3.4.0
//app课程详情中间页面查询
extern NSString *const HuFuncItem_getCourseDetailMidd;
//课程详情v3.4.0
extern NSString *const HuFuncItem_newGetCourseDetail;
//新增点赞记录接口 post
extern NSString *const HuFuncItem_addPraiseRecord;
//新增培训笔记记录接口 post
extern NSString *const HuFuncItem_addTrainNote;
//app培训笔记查询
extern NSString *const HuFuncItem_queryUserTrainNote;
//app课后作业详情查询
extern NSString *const HuFuncItem_queryHomeWorkDetail;
//app课件学习状态更新接口 post
extern NSString *const HuFuncItem_updateResourceStudyStatus;
//课程留言 post
extern NSString *const HuFuncItem_courseComment;
//课程留言列表（分页）
extern NSString *const HuFuncItem_queryCommentList;

//app课件累计时长查询接口
extern NSString *const HuFuncItem_queryAppStudyTime;
//APP我的证书
extern NSString *const HuFuncItem_queryAppTrainCertificate;
//app培训证书详情
extern NSString *const HuFuncItem_queryAppTrainCertificateDetail;
//App个人中心—我的课后作业列表查询
extern NSString *const HuFuncItem_queryHomeWorkList;
//随堂测试交卷接口-v3.4.0 post
extern NSString *const HuFuncItem_coursePaper;

//3.6.8VIP
//app分页查询可兑换的优惠券接口
extern NSString *const HuFuncItem_pageQuery_baseCoupon;
//分页查询账户持有的优惠券接口
extern NSString *const HuFuncItem_pageQuery_customerCoupon;
//用户VIP信息查询
extern NSString *const HuFuncItem_account_queryUserVipFlag;
//新增优惠券订单接口
extern NSString *const HuFuncItem_couponTrade_createOrder;
//取消优惠券订单
extern NSString *const HuFuncItem_couponTrade_cancelOrder;


//VIP  app优惠券接口
//app查询订单可用的优惠券接口
extern NSString *const HuFuncItem_canUseQuery;

//VIP列表 VIP主页
extern NSString *const HuFuncItem_vipList;
//生成vip订单
extern NSString *const HuFuncItem_vipTrade_createOrder;
//取消VIP订单
extern NSString *const HuFuncItem_vipTrade_cancelOrder;

//3.4.0.1用户登录
//APP扫码后请求登录获取用户名和头像
extern NSString *const HuFuncItem_queryUserInfo;
//APP扫码后确认登录Post
extern NSString *const HuFuncItem_qrcode_scanlogin;



