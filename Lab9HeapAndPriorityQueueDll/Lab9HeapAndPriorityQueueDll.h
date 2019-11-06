// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the LAB9HEAPANDPRIORITYQUEUEDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// LAB9HEAPANDPRIORITYQUEUEDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LAB9HEAPANDPRIORITYQUEUEDLL_EXPORTS
#define LAB9HEAPANDPRIORITYQUEUEDLL_API __declspec(dllexport)
#else
#define LAB9HEAPANDPRIORITYQUEUEDLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class LAB9HEAPANDPRIORITYQUEUEDLL_API CLab9HeapAndPriorityQueueDll {
public:
	CLab9HeapAndPriorityQueueDll(void);
	// TODO: add your methods here.
};

extern LAB9HEAPANDPRIORITYQUEUEDLL_API int nLab9HeapAndPriorityQueueDll;

LAB9HEAPANDPRIORITYQUEUEDLL_API int fnLab9HeapAndPriorityQueueDll(void);
