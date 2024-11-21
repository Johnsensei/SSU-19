#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IAlertPlatformAdapter_t7D5062C830C88746D7C788D868D4FE59951937F5;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D;
struct RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E;
struct RateBoxPrefabScript_tF01E1E79FB56E8E99690CCBA529B5F1A1B50CC20;
struct RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4;
struct RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C;
struct RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral27514F6143C78562A5F2B1278D92669A536EBDBB;
IL2CPP_EXTERN_C String_t* _stringLiteral3C2B31F46E79EBA2CDDFC1F36C35BBB5C452638F;
IL2CPP_EXTERN_C String_t* _stringLiteralAB712A6BB80C067AA7AC41DD7D9611DC920138B4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB536CC17EE6C2BA45DE65F32DFFED1F5602766B;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIAlertPlatformAdapter_t7D5062C830C88746D7C788D868D4FE59951937F5_m0776289239AF4103309C00943741B342A5D459BD_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D  : public RuntimeObject
{
	bool ___U3CDebugModeU3Ek__BackingField;
	String_t* ___U3CRateUrlU3Ek__BackingField;
	RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* ___U3CConditionsU3Ek__BackingField;
	RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4* ___U3CSettingsU3Ek__BackingField;
	RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* ___U3CStatisticsU3Ek__BackingField;
	RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* ___U3CDefaultTextSettingsU3Ek__BackingField;
	RuntimeObject* ___U3CAlertAdapterU3Ek__BackingField;
};
struct RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E  : public RuntimeObject
{
	bool ___U3CRequireInternetConnectionU3Ek__BackingField;
	int32_t ___U3CMinSessionCountU3Ek__BackingField;
	int32_t ___U3CMinCustomEventsCountU3Ek__BackingField;
	int32_t ___U3CDelayAfterInstallInSecondsU3Ek__BackingField;
	int32_t ___U3CDelayAfterLaunchInSecondsU3Ek__BackingField;
	int32_t ___U3CPostponeCooldownInSecondsU3Ek__BackingField;
};
struct RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4  : public RuntimeObject
{
	bool ___U3CUseIOSReviewU3Ek__BackingField;
};
struct RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C  : public RuntimeObject
{
	int32_t ___sessionsCount;
	int32_t ___customEventCount;
	int32_t ___appInstallAt;
	int32_t ___appLaunchAt;
	int32_t ___dialogShownAt;
	bool ___dialogIsRejected;
	bool ___dialogIsRated;
	String_t* ___applicationVersion;
};
struct RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58  : public RuntimeObject
{
	String_t* ___U3CTitleU3Ek__BackingField;
	String_t* ___U3CMessageU3Ek__BackingField;
	String_t* ___U3CRateButtonTitleU3Ek__BackingField;
	String_t* ___U3CPostponeButtonTitleU3Ek__BackingField;
	String_t* ___U3CRejectButtonTitleU3Ek__BackingField;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1800_tD9F3E495FED1F0ED52041D8B79407E3B95B54633 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1800_tD9F3E495FED1F0ED52041D8B79407E3B95B54633__padding[1800];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3614_t1C7AC1AEF8DD87AC5FF5C81C0110D4F98CC9D655 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3614_t1C7AC1AEF8DD87AC5FF5C81C0110D4F98CC9D655__padding[3614];
	};
};
#pragma pack(pop, tp)
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct RateBoxPrefabScript_tF01E1E79FB56E8E99690CCBA529B5F1A1B50CC20  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___minSessionCount;
	int32_t ___minCustomEventsCount;
	float ___delayAfterInstallInHours;
	float ___delayAfterLaunchInHours;
	float ___postponeCooldownInHours;
	bool ___requireInternetConnection;
	String_t* ___title;
	String_t* ___message;
	String_t* ___rateButton;
	String_t* ___postponeButton;
	String_t* ___rejectButton;
	String_t* ___appStoreAppId;
	String_t* ___playMarketAppBundleId;
	bool ___useIOSReview;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___customUIWindow;
	bool ___clearOnStart;
	bool ___logDebugMessages;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	__StaticArrayInitTypeSizeU3D3614_t1C7AC1AEF8DD87AC5FF5C81C0110D4F98CC9D655 ___62135FCD62F74F59A37E2B8573B0DF6F0858831C8607F2F281DF3486EF33C74A;
	__StaticArrayInitTypeSizeU3D1800_tD9F3E495FED1F0ED52041D8B79407E3B95B54633 ___92E5FC501434C5CB14D64FA68898C4AB5F47788B6C403CE90159BFDAD7408F44;
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
};
struct RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D_StaticFields
{
	String_t* ___statisticsPath;
	RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* ___instance;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxConditions_set_MinSessionCount_m0C1E3757C720B9CF79958754F081F149FCE86C28_inline (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxConditions_set_MinCustomEventsCount_mB0EA73FACB79ECB82A1A5EEE4D6AADB37F670470_inline (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxConditions_set_DelayAfterInstallInSeconds_mFE66B38CE8C4E093AE80C20E19D541756FC00B46_inline (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxConditions_set_DelayAfterLaunchInSeconds_mC9E355C859D9CBA724423073A3551258E6039190_inline (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxConditions_set_PostponeCooldownInSeconds_m52C3CC154EA221574444C7C607B7137D3D571B2D_inline (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxConditions_set_RequireInternetConnection_mA8BF4D5233735A5239BC364F3D9C9A5579A9FF8F_inline (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RateBox_GetStoreUrl_mB964BE56C41DED4781DA92B3606C70A65CD92721 (String_t* ___0_iTunesAppId, String_t* ___1_googlePlayMarketAppBundleId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* RateBox_get_Instance_m144CDD75FAE4F60D325508CB03E2E0471F30012F (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBox_set_DebugMode_mDA6F3E3E1D4D9386AF4907AE93444BE514EF88DD_inline (RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxConditions__ctor_mF8C061BA550DA98E12EA4A34E30DE9E6FDA2A4AC (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxTextSettings__ctor_mBE113F456B99F610D281A766AF80D9F8F45C34E6 (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_Title_m780291B3BBFC1C7813B0DFA2FC430EEA7214372D_inline (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_Message_m30AF14A9CC7A78B541316843726C92962E5D63D2_inline (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_RateButtonTitle_mADE82714C0C12E61323C80F564C88006E5C7912C_inline (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_PostponeButtonTitle_m6A392F8FB4DCFD9E53F3EF174622D2117B97CFFD_inline (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_RejectButtonTitle_mB4082CA60A268716C1C28AA9C61AB9B79FD24EB4_inline (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxSettings__ctor_m4BBEB233B37760AB0A899D8C3CE4DF38D4125926 (RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxSettings_set_UseIOSReview_m3CD9D7E564BDF1788BE239A7FBA7D3F473CE8F1F_inline (RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBox_Init_m8804A56B0C7728EA31CDA3DFD3FFE7BB880DC723 (RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* __this, String_t* ___0_rateUrl, RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* ___1_conditions, RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* ___2_textSettings, RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4* ___3_settings, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
inline RuntimeObject* GameObject_GetComponent_TisIAlertPlatformAdapter_t7D5062C830C88746D7C788D868D4FE59951937F5_m0776289239AF4103309C00943741B342A5D459BD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBox_set_AlertAdapter_m14182E2AAE0146531AD5BB5253B39FC70FB72D1C_inline (RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_SessionsCount_mB5F533D1C1EB76A4AEE1FCA51696227D207DC142_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_CustomEventCount_m15149690256213AF516DC7B5315D0C1D0276931F_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_AppInstallAt_m12B1A8DB66EE7605D05E224C37F31345E87D1C12_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_AppLaunchAt_m0B3A9B25040CB5DAA47446D8E6D5C1A21773C068_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_DialogShownAt_m9FA51E89A3DF68645F40BBD585FC65EA351BD8EE_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_DialogIsRejected_m2BA9CEBCE220841AE063C0950CF9A024331C7687_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_DialogIsRated_m2BC15DB5263C072C1E55308BE20D2D4ADD95AFA3_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_ApplicationVersion_mFB50FE2130A7C9C374793F03FBF55B69B9F7BEF2_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxConditions__ctor_mF8C061BA550DA98E12EA4A34E30DE9E6FDA2A4AC (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RateBoxConditions_set_MinSessionCount_m0C1E3757C720B9CF79958754F081F149FCE86C28_inline(__this, 0, NULL);
		RateBoxConditions_set_MinCustomEventsCount_mB0EA73FACB79ECB82A1A5EEE4D6AADB37F670470_inline(__this, 0, NULL);
		RateBoxConditions_set_DelayAfterInstallInSeconds_mFE66B38CE8C4E093AE80C20E19D541756FC00B46_inline(__this, 0, NULL);
		RateBoxConditions_set_DelayAfterLaunchInSeconds_mC9E355C859D9CBA724423073A3551258E6039190_inline(__this, 0, NULL);
		RateBoxConditions_set_PostponeCooldownInSeconds_m52C3CC154EA221574444C7C607B7137D3D571B2D_inline(__this, ((int32_t)79200), NULL);
		RateBoxConditions_set_RequireInternetConnection_mA8BF4D5233735A5239BC364F3D9C9A5579A9FF8F_inline(__this, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RateBoxConditions_get_RequireInternetConnection_m126DE78D76D23F464ECA7EAF190C65762A5A6D7A (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CRequireInternetConnectionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxConditions_set_RequireInternetConnection_mA8BF4D5233735A5239BC364F3D9C9A5579A9FF8F (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CRequireInternetConnectionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RateBoxConditions_get_MinSessionCount_m579473C4B12546A6BF8C7FFCCCC48E13E6CBA474 (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMinSessionCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxConditions_set_MinSessionCount_m0C1E3757C720B9CF79958754F081F149FCE86C28 (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMinSessionCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RateBoxConditions_get_MinCustomEventsCount_m0E923123F1DBB8A10CEE113937E096F7083C6C86 (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMinCustomEventsCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxConditions_set_MinCustomEventsCount_mB0EA73FACB79ECB82A1A5EEE4D6AADB37F670470 (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMinCustomEventsCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RateBoxConditions_get_DelayAfterInstallInSeconds_m7F2A4C554757293DC91E563C82699ABA86396F46 (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDelayAfterInstallInSecondsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxConditions_set_DelayAfterInstallInSeconds_mFE66B38CE8C4E093AE80C20E19D541756FC00B46 (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDelayAfterInstallInSecondsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RateBoxConditions_get_DelayAfterLaunchInSeconds_m8E869301E09169A730FB58B231DAA6F39576269B (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDelayAfterLaunchInSecondsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxConditions_set_DelayAfterLaunchInSeconds_mC9E355C859D9CBA724423073A3551258E6039190 (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDelayAfterLaunchInSecondsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RateBoxConditions_get_PostponeCooldownInSeconds_mCC2DB4E7159F88EC4D75756692AADE97DA3DC7F3 (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPostponeCooldownInSecondsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxConditions_set_PostponeCooldownInSeconds_m52C3CC154EA221574444C7C607B7137D3D571B2D (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CPostponeCooldownInSecondsU3Ek__BackingField = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxPrefabScript_Start_m9A5A3816F30C4395C0CC7C8B976523DD03B8BA12 (RateBoxPrefabScript_tF01E1E79FB56E8E99690CCBA529B5F1A1B50CC20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIAlertPlatformAdapter_t7D5062C830C88746D7C788D868D4FE59951937F5_m0776289239AF4103309C00943741B342A5D459BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* G_B2_0 = NULL;
	RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* G_B2_1 = NULL;
	RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* G_B2_4 = NULL;
	RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* G_B1_0 = NULL;
	RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* G_B1_1 = NULL;
	RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* G_B3_1 = NULL;
	RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* G_B3_2 = NULL;
	RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* G_B3_5 = NULL;
	{
		String_t* L_0 = __this->___appStoreAppId;
		String_t* L_1 = __this->___playMarketAppBundleId;
		il2cpp_codegen_runtime_class_init_inline(RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = RateBox_GetStoreUrl_mB964BE56C41DED4781DA92B3606C70A65CD92721(L_0, L_1, NULL);
		V_0 = L_2;
		RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* L_3;
		L_3 = RateBox_get_Instance_m144CDD75FAE4F60D325508CB03E2E0471F30012F(NULL);
		NullCheck(L_3);
		RateBox_set_DebugMode_mDA6F3E3E1D4D9386AF4907AE93444BE514EF88DD_inline(L_3, (bool)0, NULL);
		String_t* L_4 = __this->___rejectButton;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_4, NULL);
		V_1 = L_5;
		RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* L_6;
		L_6 = RateBox_get_Instance_m144CDD75FAE4F60D325508CB03E2E0471F30012F(NULL);
		String_t* L_7 = V_0;
		RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* L_8 = (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E*)il2cpp_codegen_object_new(RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E_il2cpp_TypeInfo_var);
		RateBoxConditions__ctor_mF8C061BA550DA98E12EA4A34E30DE9E6FDA2A4AC(L_8, NULL);
		RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* L_9 = L_8;
		int32_t L_10 = __this->___minSessionCount;
		NullCheck(L_9);
		RateBoxConditions_set_MinSessionCount_m0C1E3757C720B9CF79958754F081F149FCE86C28_inline(L_9, L_10, NULL);
		RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* L_11 = L_9;
		int32_t L_12 = __this->___minCustomEventsCount;
		NullCheck(L_11);
		RateBoxConditions_set_MinCustomEventsCount_mB0EA73FACB79ECB82A1A5EEE4D6AADB37F670470_inline(L_11, L_12, NULL);
		RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* L_13 = L_11;
		float L_14 = __this->___delayAfterInstallInHours;
		int32_t L_15;
		L_15 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)il2cpp_codegen_multiply(L_14, (3600.0f))), NULL);
		NullCheck(L_13);
		RateBoxConditions_set_DelayAfterInstallInSeconds_mFE66B38CE8C4E093AE80C20E19D541756FC00B46_inline(L_13, L_15, NULL);
		RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* L_16 = L_13;
		float L_17 = __this->___delayAfterLaunchInHours;
		int32_t L_18;
		L_18 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)il2cpp_codegen_multiply(L_17, (3600.0f))), NULL);
		NullCheck(L_16);
		RateBoxConditions_set_DelayAfterLaunchInSeconds_mC9E355C859D9CBA724423073A3551258E6039190_inline(L_16, L_18, NULL);
		RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* L_19 = L_16;
		float L_20 = __this->___postponeCooldownInHours;
		int32_t L_21;
		L_21 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)il2cpp_codegen_multiply(L_20, (3600.0f))), NULL);
		NullCheck(L_19);
		RateBoxConditions_set_PostponeCooldownInSeconds_m52C3CC154EA221574444C7C607B7137D3D571B2D_inline(L_19, L_21, NULL);
		RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* L_22 = L_19;
		bool L_23 = __this->___requireInternetConnection;
		NullCheck(L_22);
		RateBoxConditions_set_RequireInternetConnection_mA8BF4D5233735A5239BC364F3D9C9A5579A9FF8F_inline(L_22, L_23, NULL);
		RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* L_24 = (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58*)il2cpp_codegen_object_new(RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58_il2cpp_TypeInfo_var);
		RateBoxTextSettings__ctor_mBE113F456B99F610D281A766AF80D9F8F45C34E6(L_24, NULL);
		RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* L_25 = L_24;
		String_t* L_26 = __this->___title;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_26, NULL);
		NullCheck(L_25);
		RateBoxTextSettings_set_Title_m780291B3BBFC1C7813B0DFA2FC430EEA7214372D_inline(L_25, L_27, NULL);
		RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* L_28 = L_25;
		String_t* L_29 = __this->___message;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_29, NULL);
		NullCheck(L_28);
		RateBoxTextSettings_set_Message_m30AF14A9CC7A78B541316843726C92962E5D63D2_inline(L_28, L_30, NULL);
		RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* L_31 = L_28;
		String_t* L_32 = __this->___rateButton;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_32, NULL);
		NullCheck(L_31);
		RateBoxTextSettings_set_RateButtonTitle_mADE82714C0C12E61323C80F564C88006E5C7912C_inline(L_31, L_33, NULL);
		RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* L_34 = L_31;
		String_t* L_35 = __this->___postponeButton;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_35, NULL);
		NullCheck(L_34);
		RateBoxTextSettings_set_PostponeButtonTitle_m6A392F8FB4DCFD9E53F3EF174622D2117B97CFFD_inline(L_34, L_36, NULL);
		RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* L_37 = L_34;
		String_t* L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		if ((((int32_t)L_39) > ((int32_t)0)))
		{
			G_B2_0 = L_37;
			G_B2_1 = L_37;
			G_B2_2 = L_22;
			G_B2_3 = L_7;
			G_B2_4 = L_6;
			goto IL_00f3;
		}
		G_B1_0 = L_37;
		G_B1_1 = L_37;
		G_B1_2 = L_22;
		G_B1_3 = L_7;
		G_B1_4 = L_6;
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_00f9;
	}

IL_00f3:
	{
		String_t* L_40 = V_1;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_40, NULL);
		G_B3_0 = L_41;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_00f9:
	{
		NullCheck(G_B3_1);
		RateBoxTextSettings_set_RejectButtonTitle_mB4082CA60A268716C1C28AA9C61AB9B79FD24EB4_inline(G_B3_1, G_B3_0, NULL);
		RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4* L_42 = (RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4*)il2cpp_codegen_object_new(RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4_il2cpp_TypeInfo_var);
		RateBoxSettings__ctor_m4BBEB233B37760AB0A899D8C3CE4DF38D4125926(L_42, NULL);
		RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4* L_43 = L_42;
		bool L_44 = __this->___useIOSReview;
		NullCheck(L_43);
		RateBoxSettings_set_UseIOSReview_m3CD9D7E564BDF1788BE239A7FBA7D3F473CE8F1F_inline(L_43, L_44, NULL);
		NullCheck(G_B3_5);
		RateBox_Init_m8804A56B0C7728EA31CDA3DFD3FFE7BB880DC723(G_B3_5, G_B3_4, G_B3_3, G_B3_2, L_43, NULL);
		V_2 = (RuntimeObject*)NULL;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___customUIWindow;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_45, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_46)
		{
			goto IL_013c;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___customUIWindow;
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___customUIWindow;
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = GameObject_GetComponent_TisIAlertPlatformAdapter_t7D5062C830C88746D7C788D868D4FE59951937F5_m0776289239AF4103309C00943741B342A5D459BD(L_48, GameObject_GetComponent_TisIAlertPlatformAdapter_t7D5062C830C88746D7C788D868D4FE59951937F5_m0776289239AF4103309C00943741B342A5D459BD_RuntimeMethod_var);
		V_2 = L_49;
	}

IL_013c:
	{
		il2cpp_codegen_runtime_class_init_inline(RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D_il2cpp_TypeInfo_var);
		RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* L_50;
		L_50 = RateBox_get_Instance_m144CDD75FAE4F60D325508CB03E2E0471F30012F(NULL);
		RuntimeObject* L_51 = V_2;
		NullCheck(L_50);
		RateBox_set_AlertAdapter_m14182E2AAE0146531AD5BB5253B39FC70FB72D1C_inline(L_50, L_51, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxPrefabScript__ctor_m54540AB4B3C0103BEE9A3B0450FDDD5B47F3196B (RateBoxPrefabScript_tF01E1E79FB56E8E99690CCBA529B5F1A1B50CC20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27514F6143C78562A5F2B1278D92669A536EBDBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C2B31F46E79EBA2CDDFC1F36C35BBB5C452638F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB712A6BB80C067AA7AC41DD7D9611DC920138B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB536CC17EE6C2BA45DE65F32DFFED1F5602766B);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___postponeCooldownInHours = (22.0f);
		__this->___requireInternetConnection = (bool)1;
		__this->___title = _stringLiteralDB536CC17EE6C2BA45DE65F32DFFED1F5602766B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___title), (void*)_stringLiteralDB536CC17EE6C2BA45DE65F32DFFED1F5602766B);
		__this->___message = _stringLiteral27514F6143C78562A5F2B1278D92669A536EBDBB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message), (void*)_stringLiteral27514F6143C78562A5F2B1278D92669A536EBDBB);
		__this->___rateButton = _stringLiteral3C2B31F46E79EBA2CDDFC1F36C35BBB5C452638F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rateButton), (void*)_stringLiteral3C2B31F46E79EBA2CDDFC1F36C35BBB5C452638F);
		__this->___postponeButton = _stringLiteralAB712A6BB80C067AA7AC41DD7D9611DC920138B4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___postponeButton), (void*)_stringLiteralAB712A6BB80C067AA7AC41DD7D9611DC920138B4);
		__this->___rejectButton = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rejectButton), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___appStoreAppId = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appStoreAppId), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___playMarketAppBundleId = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playMarketAppBundleId), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___logDebugMessages = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxSettings__ctor_m4BBEB233B37760AB0A899D8C3CE4DF38D4125926 (RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RateBoxSettings_set_UseIOSReview_m3CD9D7E564BDF1788BE239A7FBA7D3F473CE8F1F_inline(__this, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RateBoxSettings_get_UseIOSReview_m1F2DBB1495E53F5BCE707D6EBF94441F191D7FFD (RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUseIOSReviewU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxSettings_set_UseIOSReview_m3CD9D7E564BDF1788BE239A7FBA7D3F473CE8F1F (RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CUseIOSReviewU3Ek__BackingField = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxStatistics__ctor_m26CB10897297D6F18B7A39A043EB1057B6881027 (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RateBoxStatistics_set_SessionsCount_mB5F533D1C1EB76A4AEE1FCA51696227D207DC142_inline(__this, 0, NULL);
		RateBoxStatistics_set_CustomEventCount_m15149690256213AF516DC7B5315D0C1D0276931F_inline(__this, 0, NULL);
		RateBoxStatistics_set_AppInstallAt_m12B1A8DB66EE7605D05E224C37F31345E87D1C12_inline(__this, 0, NULL);
		RateBoxStatistics_set_AppLaunchAt_m0B3A9B25040CB5DAA47446D8E6D5C1A21773C068_inline(__this, 0, NULL);
		RateBoxStatistics_set_DialogShownAt_m9FA51E89A3DF68645F40BBD585FC65EA351BD8EE_inline(__this, 0, NULL);
		RateBoxStatistics_set_DialogIsRejected_m2BA9CEBCE220841AE063C0950CF9A024331C7687_inline(__this, (bool)0, NULL);
		RateBoxStatistics_set_DialogIsRated_m2BC15DB5263C072C1E55308BE20D2D4ADD95AFA3_inline(__this, (bool)0, NULL);
		RateBoxStatistics_set_ApplicationVersion_mFB50FE2130A7C9C374793F03FBF55B69B9F7BEF2_inline(__this, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RateBoxStatistics_get_SessionsCount_m1193AE8ABFB8FC1788B4D170A85B2DEBC907466A (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___sessionsCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxStatistics_set_SessionsCount_mB5F533D1C1EB76A4AEE1FCA51696227D207DC142 (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___sessionsCount = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RateBoxStatistics_get_CustomEventCount_mA0E1780E94FBBCCDAE47B3DCF8527C20821D4723 (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___customEventCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxStatistics_set_CustomEventCount_m15149690256213AF516DC7B5315D0C1D0276931F (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___customEventCount = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RateBoxStatistics_get_AppInstallAt_m09CE0B468E7E354107376BFB4ED25F3637FC53EA (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___appInstallAt;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxStatistics_set_AppInstallAt_m12B1A8DB66EE7605D05E224C37F31345E87D1C12 (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___appInstallAt = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RateBoxStatistics_get_AppLaunchAt_mCEA913488D524ABF5742459374791E6638849F64 (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___appLaunchAt;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxStatistics_set_AppLaunchAt_m0B3A9B25040CB5DAA47446D8E6D5C1A21773C068 (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___appLaunchAt = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RateBoxStatistics_get_DialogShownAt_m71688EDD5ECE7836C174547E1FC7C2DFDA293BCD (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___dialogShownAt;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxStatistics_set_DialogShownAt_m9FA51E89A3DF68645F40BBD585FC65EA351BD8EE (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___dialogShownAt = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RateBoxStatistics_get_DialogIsRejected_m6E818668D0582A41261E9E57DA8D3F0B90EB2E07 (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___dialogIsRejected;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxStatistics_set_DialogIsRejected_m2BA9CEBCE220841AE063C0950CF9A024331C7687 (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___dialogIsRejected = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RateBoxStatistics_get_DialogIsRated_mAF1CD30646AD70753916F9E90D8B69D16D5FE695 (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___dialogIsRated;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxStatistics_set_DialogIsRated_m2BC15DB5263C072C1E55308BE20D2D4ADD95AFA3 (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___dialogIsRated = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RateBoxStatistics_get_ApplicationVersion_mE2DB5230E8CB1A70837490A6F180DCB24670607E (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___applicationVersion;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxStatistics_set_ApplicationVersion_mFB50FE2130A7C9C374793F03FBF55B69B9F7BEF2 (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___applicationVersion = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___applicationVersion), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RateBoxTextSettings_get_Title_m40FCBA95EFB953BA3DF32E809CF5B36490BEF043 (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTitleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_Title_m780291B3BBFC1C7813B0DFA2FC430EEA7214372D (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTitleU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTitleU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RateBoxTextSettings_get_Message_m171FA277B4120F9392B9831BEE1116CBE722CB69 (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_Message_m30AF14A9CC7A78B541316843726C92962E5D63D2 (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RateBoxTextSettings_get_RateButtonTitle_m86028149E4BAB8BADE406A6A48A88FAD7FF72727 (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRateButtonTitleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_RateButtonTitle_mADE82714C0C12E61323C80F564C88006E5C7912C (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CRateButtonTitleU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRateButtonTitleU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RateBoxTextSettings_get_PostponeButtonTitle_mBAFF88C20F8389FBCCCC6538A878575FD59552BF (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPostponeButtonTitleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_PostponeButtonTitle_m6A392F8FB4DCFD9E53F3EF174622D2117B97CFFD (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPostponeButtonTitleU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPostponeButtonTitleU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RateBoxTextSettings_get_RejectButtonTitle_m46038794F4FEDAFB777DD390F47A05A247030E1D (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRejectButtonTitleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_RejectButtonTitle_mB4082CA60A268716C1C28AA9C61AB9B79FD24EB4 (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CRejectButtonTitleU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRejectButtonTitleU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RateBoxTextSettings__ctor_mBE113F456B99F610D281A766AF80D9F8F45C34E6 (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxConditions_set_MinSessionCount_m0C1E3757C720B9CF79958754F081F149FCE86C28_inline (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMinSessionCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxConditions_set_MinCustomEventsCount_mB0EA73FACB79ECB82A1A5EEE4D6AADB37F670470_inline (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMinCustomEventsCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxConditions_set_DelayAfterInstallInSeconds_mFE66B38CE8C4E093AE80C20E19D541756FC00B46_inline (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDelayAfterInstallInSecondsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxConditions_set_DelayAfterLaunchInSeconds_mC9E355C859D9CBA724423073A3551258E6039190_inline (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDelayAfterLaunchInSecondsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxConditions_set_PostponeCooldownInSeconds_m52C3CC154EA221574444C7C607B7137D3D571B2D_inline (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CPostponeCooldownInSecondsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxConditions_set_RequireInternetConnection_mA8BF4D5233735A5239BC364F3D9C9A5579A9FF8F_inline (RateBoxConditions_tC607A6B80428557F9F940F78789E0096ECB1E64E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CRequireInternetConnectionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBox_set_DebugMode_mDA6F3E3E1D4D9386AF4907AE93444BE514EF88DD_inline (RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CDebugModeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_Title_m780291B3BBFC1C7813B0DFA2FC430EEA7214372D_inline (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTitleU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTitleU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_Message_m30AF14A9CC7A78B541316843726C92962E5D63D2_inline (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_RateButtonTitle_mADE82714C0C12E61323C80F564C88006E5C7912C_inline (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CRateButtonTitleU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRateButtonTitleU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_PostponeButtonTitle_m6A392F8FB4DCFD9E53F3EF174622D2117B97CFFD_inline (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPostponeButtonTitleU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPostponeButtonTitleU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxTextSettings_set_RejectButtonTitle_mB4082CA60A268716C1C28AA9C61AB9B79FD24EB4_inline (RateBoxTextSettings_t2A7D291D72751D592E1F73475C0249BA3156CA58* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CRejectButtonTitleU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRejectButtonTitleU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxSettings_set_UseIOSReview_m3CD9D7E564BDF1788BE239A7FBA7D3F473CE8F1F_inline (RateBoxSettings_t3001A647C3F6CBA5C23BD0ED637B2F2E19A79DC4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CUseIOSReviewU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBox_set_AlertAdapter_m14182E2AAE0146531AD5BB5253B39FC70FB72D1C_inline (RateBox_tB6F78A574A30018CB14394094208CB2E0CA5DD6D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAlertAdapterU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAlertAdapterU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_SessionsCount_mB5F533D1C1EB76A4AEE1FCA51696227D207DC142_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___sessionsCount = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_CustomEventCount_m15149690256213AF516DC7B5315D0C1D0276931F_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___customEventCount = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_AppInstallAt_m12B1A8DB66EE7605D05E224C37F31345E87D1C12_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___appInstallAt = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_AppLaunchAt_m0B3A9B25040CB5DAA47446D8E6D5C1A21773C068_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___appLaunchAt = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_DialogShownAt_m9FA51E89A3DF68645F40BBD585FC65EA351BD8EE_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___dialogShownAt = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_DialogIsRejected_m2BA9CEBCE220841AE063C0950CF9A024331C7687_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___dialogIsRejected = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_DialogIsRated_m2BC15DB5263C072C1E55308BE20D2D4ADD95AFA3_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___dialogIsRated = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RateBoxStatistics_set_ApplicationVersion_mFB50FE2130A7C9C374793F03FBF55B69B9F7BEF2_inline (RateBoxStatistics_tE2ED1F685BB03B0FA5A70A21FFF3E0770D56CE0C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___applicationVersion = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___applicationVersion), (void*)L_0);
		return;
	}
}
