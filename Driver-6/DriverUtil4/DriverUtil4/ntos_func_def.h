#pragma once
extern "C"
{
#ifndef _SYSTEM_INFORMATION_CLASS
	typedef enum _SYSTEM_INFORMATION_CLASS
	{
		SystemBasicInformation = 0,
		SystemProcessorInformation = 1,
		SystemPerformanceInformation = 2,
		SystemTimeOfDayInformation = 3,
		SystemPathInformation = 4,
		SystemProcessInformation = 5,
		SystemCallCountInformation = 6,
		SystemDeviceInformation = 7,
		SystemProcessorPerformanceInformation = 8,
		SystemFlagsInformation = 9,
		SystemCallTimeInformation = 10,
		SystemModuleInformation = 11,
		SystemLocksInformation = 12,
		SystemStackTraceInformation = 13,
		SystemPagedPoolInformation = 14,
		SystemNonPagedPoolInformation = 15,
		SystemHandleInformation = 16,
		SystemObjectInformation = 17,
		SystemPageFileInformation = 18,
		SystemVdmInstemulInformation = 19,
		SystemVdmBopInformation = 20,
		SystemFileCacheInformation = 21,
		SystemPoolTagInformation = 22,
		SystemInterruptInformation = 23,
		SystemDpcBehaviorInformation = 24,
		SystemFullMemoryInformation = 25,
		SystemLoadGdiDriverInformation = 26,
		SystemUnloadGdiDriverInformation = 27,
		SystemTimeAdjustmentInformation = 28,
		SystemSummaryMemoryInformation = 29,
		SystemMirrorMemoryInformation = 30,
		SystemPerformanceTraceInformation = 31,
		SystemObsolete0 = 32,
		SystemExceptionInformation = 33,
		SystemCrashDumpStateInformation = 34,
		SystemKernelDebuggerInformation = 35,
		SystemContextSwitchInformation = 36,
		SystemRegistryQuotaInformation = 37,
		SystemExtendServiceTableInformation = 38,
		SystemPrioritySeperation = 39,
		SystemVerifierAddDriverInformation = 40,
		SystemVerifierRemoveDriverInformation = 41,
		SystemProcessorIdleInformation = 42,
		SystemLegacyDriverInformation = 43,
		SystemCurrentTimeZoneInformation = 44,
		SystemLookasideInformation = 45,
		SystemTimeSlipNotification = 46,
		SystemSessionCreate = 47,
		SystemSessionDetach = 48,
		SystemSessionInformation = 49,
		SystemRangeStartInformation = 50,
		SystemVerifierInformation = 51,
		SystemVerifierThunkExtend = 52,
		SystemSessionProcessInformation = 53,
		SystemLoadGdiDriverInSystemSpace = 54,
		SystemNumaProcessorMap = 55,
		SystemPrefetcherInformation = 56,
		SystemExtendedProcessInformation = 57,
		SystemRecommendedSharedDataAlignment = 58,
		SystemComPlusPackage = 59,
		SystemNumaAvailableMemory = 60,
		SystemProcessorPowerInformation = 61,
		SystemEmulationBasicInformation = 62,
		SystemEmulationProcessorInformation = 63,
		SystemExtendedHandleInformation = 64,
		SystemLostDelayedWriteInformation = 65,
		SystemBigPoolInformation = 66,
		SystemSessionPoolTagInformation = 67,
		SystemSessionMappedViewInformation = 68,
		SystemHotpatchInformation = 69,
		SystemObjectSecurityMode = 70,
		SystemWatchdogTimerHandler = 71,
		SystemWatchdogTimerInformation = 72,
		SystemLogicalProcessorInformation = 73,
		SystemWow64SharedInformationObsolete = 74,
		SystemRegisterFirmwareTableInformationHandler = 75,
		SystemFirmwareTableInformation = 76,
		SystemModuleInformationEx = 77,
		SystemVerifierTriageInformation = 78,
		SystemSuperfetchInformation = 79,
		SystemMemoryListInformation = 80,
		SystemFileCacheInformationEx = 81,
		SystemThreadPriorityClientIdInformation = 82,
		SystemProcessorIdleCycleTimeInformation = 83,
		SystemVerifierCancellationInformation = 84,
		SystemProcessorPowerInformationEx = 85,
		SystemRefTraceInformation = 86,
		SystemSpecialPoolInformation = 87,
		SystemProcessIdInformation = 88,
		SystemErrorPortInformation = 89,
		SystemBootEnvironmentInformation = 90,
		SystemHypervisorInformation = 91,
		SystemVerifierInformationEx = 92,
		SystemTimeZoneInformation = 93,
		SystemImageFileExecutionOptionsInformation = 94,
		SystemCoverageInformation = 95,
		SystemPrefetchPatchInformation = 96,
		SystemVerifierFaultsInformation = 97,
		SystemSystemPartitionInformation = 98,
		SystemSystemDiskInformation = 99,
		SystemProcessorPerformanceDistribution = 100,
		SystemNumaProximityNodeInformation = 101,
		SystemDynamicTimeZoneInformation = 102,
		SystemCodeIntegrityInformation = 103,
		SystemProcessorMicrocodeUpdateInformation = 104,
		SystemProcessorBrandString = 105,
		SystemVirtualAddressInformation = 106,
		SystemLogicalProcessorAndGroupInformation = 107,
		SystemProcessorCycleTimeInformation = 108,
		SystemStoreInformation = 109,
		SystemRegistryAppendString = 110,
		SystemAitSamplingValue = 111,
		SystemVhdBootInformation = 112,
		SystemCpuQuotaInformation = 113,
		SystemNativeBasicInformation = 114,
		SystemErrorPortTimeouts = 115,
		SystemLowPriorityIoInformation = 116,
		SystemBootEntropyInformation = 117,
		SystemVerifierCountersInformation = 118,
		SystemPagedPoolInformationEx = 119,
		SystemSystemPtesInformationEx = 120,
		SystemNodeDistanceInformation = 121,
		SystemAcpiAuditInformation = 122,
		SystemBasicPerformanceInformation = 123,
		SystemQueryPerformanceCounterInformation = 124,
		SystemSessionBigPoolInformation = 125,
		SystemBootGraphicsInformation = 126,
		SystemScrubPhysicalMemoryInformation = 127,
		SystemBadPageInformation = 128,
		SystemProcessorProfileControlArea = 129,
		SystemCombinePhysicalMemoryInformation = 130,
		SystemEntropyInterruptTimingInformation = 131,
		SystemConsoleInformation = 132,
		SystemPlatformBinaryInformation = 133,
		SystemPolicyInformation = 134,
		SystemHypervisorProcessorCountInformation = 135,
		SystemDeviceDataInformation = 136,
		SystemDeviceDataEnumerationInformation = 137,
		SystemMemoryTopologyInformation = 138,
		SystemMemoryChannelInformation = 139,
		SystemBootLogoInformation = 140,
		SystemProcessorPerformanceInformationEx = 141,
		SystemSpare0 = 142,
		SystemSecureBootPolicyInformation = 143,
		SystemPageFileInformationEx = 144,
		SystemSecureBootInformation = 145,
		SystemEntropyInterruptTimingRawInformation = 146,
		SystemPortableWorkspaceEfiLauncherInformation = 147,
		SystemFullProcessInformation = 148,
		SystemKernelDebuggerInformationEx = 149,
		SystemBootMetadataInformation = 150,
		SystemSoftRebootInformation = 151,
		SystemElamCertificateInformation = 152,
		SystemOfflineDumpConfigInformation = 153,
		SystemProcessorFeaturesInformation = 154,
		SystemRegistryReconciliationInformation = 155,
		SystemEdidInformation = 156,
		MaxSystemInfoClass = 157
	} SYSTEM_INFORMATION_CLASS, *PSYSTEM_INFORMATION_CLASS;
#endif

#ifndef SYSTEM_PROCESS_INFORMATION
	typedef struct _SYSTEM_PROCESS_INFORMATION {
		ULONG NextEntryOffset;
		ULONG NumberOfThreads;
		LARGE_INTEGER SpareLi1;
		LARGE_INTEGER SpareLi2;
		LARGE_INTEGER SpareLi3;
		LARGE_INTEGER CreateTime;
		LARGE_INTEGER UserTime;
		LARGE_INTEGER KernelTime;
		UNICODE_STRING ImageName;
		KPRIORITY BasePriority;
		HANDLE UniqueProcessId;
		HANDLE InheritedFromUniqueProcessId;
		ULONG HandleCount;
		ULONG SessionId;
		ULONG_PTR PageDirectoryBase;
		SIZE_T PeakVirtualSize;
		SIZE_T VirtualSize;
		ULONG PageFaultCount;
		SIZE_T PeakWorkingSetSize;
		SIZE_T WorkingSetSize;
		SIZE_T QuotaPeakPagedPoolUsage;
		SIZE_T QuotaPagedPoolUsage;
		SIZE_T QuotaPeakNonPagedPoolUsage;
		SIZE_T QuotaNonPagedPoolUsage;
		SIZE_T PagefileUsage;
		SIZE_T PeakPagefileUsage;
		SIZE_T PrivatePageCount;
		LARGE_INTEGER ReadOperationCount;
		LARGE_INTEGER WriteOperationCount;
		LARGE_INTEGER OtherOperationCount;
		LARGE_INTEGER ReadTransferCount;
		LARGE_INTEGER WriteTransferCount;
		LARGE_INTEGER OtherTransferCount;
	} SYSTEM_PROCESS_INFORMATION, *PSYSTEM_PROCESS_INFORMATION;
#endif
	NTSYSAPI
		NTSTATUS
		NTAPI
		ZwOpenProcessToken(
			IN HANDLE       ProcessHandle,
			IN ACCESS_MASK  DesiredAccess,
			OUT PHANDLE     TokenHandle
			);
}
using fnPsReferenceProcessFilePointer = NTSTATUS(NTAPI *) (IN PEPROCESS, OUT PFILE_OBJECT *);