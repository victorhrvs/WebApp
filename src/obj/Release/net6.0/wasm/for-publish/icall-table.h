#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
174,
179,
180,
181,
182,
183,
184,
185,
187,
188,
234,
235,
237,
260,
261,
262,
272,
273,
274,
275,
276,
343,
344,
345,
348,
380,
381,
383,
385,
387,
389,
394,
402,
403,
404,
405,
406,
407,
408,
409,
410,
411,
507,
508,
515,
518,
520,
525,
526,
528,
529,
533,
534,
535,
536,
538,
539,
540,
543,
545,
546,
547,
608,
609,
611,
619,
620,
621,
622,
623,
627,
628,
629,
630,
631,
632,
634,
635,
636,
638,
639,
640,
642,
827,
970,
971,
5257,
5258,
5260,
5261,
5262,
5263,
5264,
5266,
5268,
5270,
5271,
5278,
5280,
5284,
5285,
5287,
5289,
5291,
5303,
5312,
5313,
5315,
5316,
5317,
5318,
5319,
5321,
5323,
6160,
6164,
6166,
6167,
6168,
6169,
6213,
6214,
6215,
6230,
6231,
6232,
6233,
6264,
6307,
6317,
6318,
6319,
6567,
6569,
6570,
6594,
6595,
6596,
6610,
6616,
6623,
6633,
6636,
6704,
6710,
6711,
6712,
6713,
6719,
6732,
6752,
6753,
6761,
6763,
6770,
6771,
6774,
6776,
6781,
6787,
6788,
6795,
6797,
6807,
6810,
6811,
6812,
6822,
6833,
6839,
6840,
6841,
6843,
6844,
6854,
6872,
6885,
6904,
6928,
6929,
7262,
7391,
7568,
7569,
7572,
7575,
7623,
7774,
7775,
8722,
8741,
8748,
8749,
8751,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
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
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
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
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
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
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
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
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 174,
ves_icall_System_Array_InternalCreate,
// token 179,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 180,
ves_icall_System_Array_CanChangePrimitive,
// token 181,
ves_icall_System_Array_FastCopy_raw,
// token 182,
ves_icall_System_Array_GetLength_raw,
// token 183,
ves_icall_System_Array_GetLowerBound_raw,
// token 184,
ves_icall_System_Array_GetGenericValue_icall,
// token 185,
ves_icall_System_Array_GetValueImpl_raw,
// token 187,
ves_icall_System_Array_SetValueImpl_raw,
// token 188,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 234,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 235,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 237,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 260,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 261,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 262,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 272,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 273,
ves_icall_System_Enum_ToObject_raw,
// token 274,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 275,
ves_icall_System_Enum_get_underlying_type_raw,
// token 276,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 343,
ves_icall_System_Environment_get_ProcessorCount,
// token 344,
ves_icall_System_Environment_get_TickCount,
// token 345,
ves_icall_System_Environment_get_TickCount64,
// token 348,
ves_icall_System_Environment_FailFast_raw,
// token 380,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 381,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 383,
ves_icall_System_GC_SuppressFinalize_raw,
// token 385,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 387,
ves_icall_System_GC_GetGCMemoryInfo,
// token 389,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 394,
ves_icall_System_Object_MemberwiseClone_raw,
// token 402,
ves_icall_System_Math_Abs_double,
// token 403,
ves_icall_System_Math_Ceiling,
// token 404,
ves_icall_System_Math_Cos,
// token 405,
ves_icall_System_Math_Floor,
// token 406,
ves_icall_System_Math_Log10,
// token 407,
ves_icall_System_Math_Pow,
// token 408,
ves_icall_System_Math_Sin,
// token 409,
ves_icall_System_Math_Sqrt,
// token 410,
ves_icall_System_Math_Tan,
// token 411,
ves_icall_System_Math_ModF,
// token 507,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 508,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 515,
ves_icall_RuntimeType_make_array_type_raw,
// token 518,
ves_icall_RuntimeType_make_byref_type_raw,
// token 520,
ves_icall_RuntimeType_MakePointerType_raw,
// token 525,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 526,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 528,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 529,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 533,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 534,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 535,
ves_icall_System_RuntimeType_getFullName_raw,
// token 536,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 538,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 539,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 540,
ves_icall_RuntimeType_GetFields_native_raw,
// token 543,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 545,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 546,
ves_icall_RuntimeType_get_Name_raw,
// token 547,
ves_icall_RuntimeType_get_Namespace_raw,
// token 608,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 609,
ves_icall_reflection_get_token_raw,
// token 611,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 619,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 620,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 621,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 622,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 623,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 627,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 628,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 629,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 630,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 631,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 632,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 634,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 635,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 636,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 638,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 639,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 640,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 642,
ves_icall_System_String_FastAllocateString_raw,
// token 827,
ves_icall_System_Type_internal_from_handle_raw,
// token 970,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 971,
ves_icall_System_ValueType_Equals_raw,
// token 5257,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5258,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5260,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5261,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5262,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5263,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5264,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5266,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5268,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5270,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5271,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 5278,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5280,
mono_monitor_exit_icall_raw,
// token 5284,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5285,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5287,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5289,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5291,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5303,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5312,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5313,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5315,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5316,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5317,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5318,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5319,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5321,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5323,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6160,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6164,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6166,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6167,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6168,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6169,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6213,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6214,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6215,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6230,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6231,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6232,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6233,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 6264,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6307,
mono_object_hash_icall_raw,
// token 6317,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6318,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6319,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6567,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6569,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6570,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6594,
mono_digest_get_public_token,
// token 6595,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6596,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 6610,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6616,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6623,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6633,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6636,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6704,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6710,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 6711,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 6712,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 6713,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6719,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6732,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6752,
ves_icall_reflection_get_token_raw,
// token 6753,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6761,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6763,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6770,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6771,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6774,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6776,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6781,
ves_icall_reflection_get_token_raw,
// token 6787,
ves_icall_get_method_info_raw,
// token 6788,
ves_icall_get_method_attributes,
// token 6795,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6797,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6807,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6810,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6811,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6812,
ves_icall_reflection_get_token_raw,
// token 6822,
ves_icall_InternalInvoke_raw,
// token 6833,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6839,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6840,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6841,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6843,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6844,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6854,
ves_icall_InternalInvoke_raw,
// token 6872,
ves_icall_reflection_get_token_raw,
// token 6885,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6904,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6928,
ves_icall_reflection_get_token_raw,
// token 6929,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7262,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7391,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7568,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7569,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7572,
ves_icall_ModuleBuilder_getToken_raw,
// token 7575,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7623,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7774,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7775,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8722,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8741,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8748,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 8749,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8751,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
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
0,
0,
0,
1,
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
0,
0,
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
0,
0,
0,
0,
0,
};
