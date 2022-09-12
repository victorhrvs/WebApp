#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
210,
217,
218,
219,
220,
221,
222,
223,
224,
225,
228,
229,
400,
401,
403,
433,
434,
435,
455,
456,
457,
458,
459,
550,
551,
552,
553,
554,
555,
556,
559,
646,
647,
648,
651,
653,
655,
657,
662,
670,
671,
672,
673,
674,
675,
676,
677,
678,
679,
680,
681,
682,
683,
684,
685,
686,
687,
688,
689,
690,
691,
692,
693,
694,
695,
696,
783,
784,
785,
786,
787,
788,
789,
790,
791,
792,
793,
794,
795,
796,
797,
798,
799,
800,
801,
802,
803,
804,
805,
806,
807,
941,
942,
950,
953,
955,
961,
962,
964,
965,
969,
971,
973,
974,
975,
976,
978,
979,
980,
983,
984,
987,
988,
989,
1065,
1066,
1068,
1076,
1077,
1078,
1079,
1080,
1084,
1085,
1086,
1087,
1088,
1089,
1091,
1092,
1093,
1095,
1096,
1098,
1102,
1103,
1104,
1377,
1595,
1596,
8509,
8510,
8512,
8513,
8514,
8515,
8516,
8518,
8520,
8522,
8523,
8524,
8532,
8534,
8540,
8541,
8543,
8545,
8547,
8559,
8568,
8569,
8571,
8572,
8573,
8574,
8575,
8577,
8579,
9714,
9718,
9720,
9721,
9722,
9723,
9793,
9794,
9795,
9796,
9816,
9817,
9818,
9819,
9821,
9822,
9890,
9950,
9953,
9963,
9964,
9965,
9966,
10383,
10384,
10389,
10390,
10442,
10443,
10444,
10473,
10479,
10486,
10496,
10499,
10591,
10601,
10602,
10615,
10616,
10617,
10618,
10619,
10620,
10621,
10628,
10644,
10665,
10666,
10675,
10677,
10684,
10685,
10688,
10690,
10695,
10701,
10702,
10709,
10711,
10721,
10724,
10725,
10726,
10737,
10749,
10755,
10756,
10757,
10759,
10760,
10770,
10789,
10811,
10812,
10813,
10814,
10815,
10832,
10837,
10842,
10873,
10874,
11400,
11401,
11485,
11571,
11841,
11842,
11854,
11855,
11856,
11862,
11942,
12118,
12119,
13170,
13172,
13173,
14038,
14057,
14064,
14065,
14067,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int mono_environment_exitcode_get ();
void mono_environment_exitcode_set (int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_Exit (int);
int ves_icall_System_Environment_GetCommandLineArgs_raw (int);
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
float ves_icall_System_Math_Abs_single (float);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
int ves_icall_System_Math_ILogB (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
int ves_icall_System_MathF_ILogB (float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetInterfaceMapData_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointerInternal_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 210,
ves_icall_System_Array_InternalCreate,
// token 217,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 218,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 219,
ves_icall_System_Array_CanChangePrimitive,
// token 220,
ves_icall_System_Array_FastCopy_raw,
// token 221,
ves_icall_System_Array_GetLength_raw,
// token 222,
ves_icall_System_Array_GetLowerBound_raw,
// token 223,
ves_icall_System_Array_GetGenericValue_icall,
// token 224,
ves_icall_System_Array_GetValueImpl_raw,
// token 225,
ves_icall_System_Array_SetGenericValue_icall,
// token 228,
ves_icall_System_Array_SetValueImpl_raw,
// token 229,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 400,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 401,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 403,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 433,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 434,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 435,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 455,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 456,
ves_icall_System_Enum_ToObject_raw,
// token 457,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 458,
ves_icall_System_Enum_get_underlying_type_raw,
// token 459,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 550,
mono_environment_exitcode_get,
// token 551,
mono_environment_exitcode_set,
// token 552,
ves_icall_System_Environment_get_ProcessorCount,
// token 553,
ves_icall_System_Environment_get_TickCount,
// token 554,
ves_icall_System_Environment_get_TickCount64,
// token 555,
ves_icall_System_Environment_Exit,
// token 556,
ves_icall_System_Environment_GetCommandLineArgs_raw,
// token 559,
ves_icall_System_Environment_FailFast_raw,
// token 646,
ves_icall_System_GC_GetCollectionCount,
// token 647,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 648,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 651,
ves_icall_System_GC_SuppressFinalize_raw,
// token 653,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 655,
ves_icall_System_GC_GetGCMemoryInfo,
// token 657,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 662,
ves_icall_System_Object_MemberwiseClone_raw,
// token 670,
ves_icall_System_Math_Abs_double,
// token 671,
ves_icall_System_Math_Abs_single,
// token 672,
ves_icall_System_Math_Acos,
// token 673,
ves_icall_System_Math_Acosh,
// token 674,
ves_icall_System_Math_Asin,
// token 675,
ves_icall_System_Math_Asinh,
// token 676,
ves_icall_System_Math_Atan,
// token 677,
ves_icall_System_Math_Atan2,
// token 678,
ves_icall_System_Math_Atanh,
// token 679,
ves_icall_System_Math_Cbrt,
// token 680,
ves_icall_System_Math_Ceiling,
// token 681,
ves_icall_System_Math_Cos,
// token 682,
ves_icall_System_Math_Cosh,
// token 683,
ves_icall_System_Math_Exp,
// token 684,
ves_icall_System_Math_Floor,
// token 685,
ves_icall_System_Math_Log,
// token 686,
ves_icall_System_Math_Log10,
// token 687,
ves_icall_System_Math_Pow,
// token 688,
ves_icall_System_Math_Sin,
// token 689,
ves_icall_System_Math_Sinh,
// token 690,
ves_icall_System_Math_Sqrt,
// token 691,
ves_icall_System_Math_Tan,
// token 692,
ves_icall_System_Math_Tanh,
// token 693,
ves_icall_System_Math_FusedMultiplyAdd,
// token 694,
ves_icall_System_Math_ILogB,
// token 695,
ves_icall_System_Math_Log2,
// token 696,
ves_icall_System_Math_ModF,
// token 783,
ves_icall_System_MathF_Acos,
// token 784,
ves_icall_System_MathF_Acosh,
// token 785,
ves_icall_System_MathF_Asin,
// token 786,
ves_icall_System_MathF_Asinh,
// token 787,
ves_icall_System_MathF_Atan,
// token 788,
ves_icall_System_MathF_Atan2,
// token 789,
ves_icall_System_MathF_Atanh,
// token 790,
ves_icall_System_MathF_Cbrt,
// token 791,
ves_icall_System_MathF_Ceiling,
// token 792,
ves_icall_System_MathF_Cos,
// token 793,
ves_icall_System_MathF_Cosh,
// token 794,
ves_icall_System_MathF_Exp,
// token 795,
ves_icall_System_MathF_Floor,
// token 796,
ves_icall_System_MathF_Log,
// token 797,
ves_icall_System_MathF_Log10,
// token 798,
ves_icall_System_MathF_Pow,
// token 799,
ves_icall_System_MathF_Sin,
// token 800,
ves_icall_System_MathF_Sinh,
// token 801,
ves_icall_System_MathF_Sqrt,
// token 802,
ves_icall_System_MathF_Tan,
// token 803,
ves_icall_System_MathF_Tanh,
// token 804,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 805,
ves_icall_System_MathF_ILogB,
// token 806,
ves_icall_System_MathF_Log2,
// token 807,
ves_icall_System_MathF_ModF,
// token 941,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 942,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 950,
ves_icall_RuntimeType_make_array_type_raw,
// token 953,
ves_icall_RuntimeType_make_byref_type_raw,
// token 955,
ves_icall_RuntimeType_MakePointerType_raw,
// token 961,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 962,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 964,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 965,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 969,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 971,
ves_icall_RuntimeType_GetPacking_raw,
// token 973,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 974,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 975,
ves_icall_System_RuntimeType_getFullName_raw,
// token 976,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 978,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 979,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 980,
ves_icall_RuntimeType_GetFields_native_raw,
// token 983,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 984,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 987,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 988,
ves_icall_RuntimeType_get_Name_raw,
// token 989,
ves_icall_RuntimeType_get_Namespace_raw,
// token 1065,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 1066,
ves_icall_reflection_get_token_raw,
// token 1068,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1076,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 1077,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 1078,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1079,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1080,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1084,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1085,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1086,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1087,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1088,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 1089,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1091,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1092,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 1093,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1095,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 1096,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1098,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1102,
ves_icall_System_String_FastAllocateString_raw,
// token 1103,
ves_icall_System_String_InternalIsInterned_raw,
// token 1104,
ves_icall_System_String_InternalIntern_raw,
// token 1377,
ves_icall_System_Type_internal_from_handle_raw,
// token 1595,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1596,
ves_icall_System_ValueType_Equals_raw,
// token 8509,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8510,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8512,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8513,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8514,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8515,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8516,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8518,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8520,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8522,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 8523,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8524,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 8532,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8534,
mono_monitor_exit_icall_raw,
// token 8540,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8541,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8543,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8545,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8547,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8559,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8568,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8569,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8571,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8572,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8573,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8574,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8575,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8577,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8579,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9714,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9718,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9720,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9721,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9722,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9723,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9793,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9794,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9795,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9796,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9816,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9817,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9818,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9819,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 9821,
ves_icall_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointerInternal_raw,
// token 9822,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 9890,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9950,
mono_object_hash_icall_raw,
// token 9953,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9963,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9964,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9965,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 9966,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10383,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 10384,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10389,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10390,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10442,
mono_digest_get_public_token,
// token 10443,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10444,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 10473,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10479,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10486,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10496,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10499,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10591,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 10601,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 10602,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10615,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 10616,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 10617,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 10618,
ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw,
// token 10619,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 10620,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10621,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 10628,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10644,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10665,
ves_icall_reflection_get_token_raw,
// token 10666,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10675,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10677,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10684,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10685,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10688,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10690,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10695,
ves_icall_reflection_get_token_raw,
// token 10701,
ves_icall_get_method_info_raw,
// token 10702,
ves_icall_get_method_attributes,
// token 10709,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10711,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10721,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10724,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10725,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10726,
ves_icall_reflection_get_token_raw,
// token 10737,
ves_icall_InternalInvoke_raw,
// token 10749,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10755,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10756,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10757,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10759,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10760,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10770,
ves_icall_InternalInvoke_raw,
// token 10789,
ves_icall_reflection_get_token_raw,
// token 10811,
ves_icall_reflection_get_token_raw,
// token 10812,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 10813,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10814,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 10815,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10832,
ves_icall_reflection_get_token_raw,
// token 10837,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 10842,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10873,
ves_icall_reflection_get_token_raw,
// token 10874,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11400,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11401,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11485,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 11571,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11841,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11842,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11854,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11855,
ves_icall_ModuleBuilder_getToken_raw,
// token 11856,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11862,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11942,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 12118,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 12119,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 13170,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 13172,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 13173,
ves_icall_System_Diagnostics_Debugger_Log,
// token 14038,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 14057,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 14064,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 14065,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 14067,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
1,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
};
