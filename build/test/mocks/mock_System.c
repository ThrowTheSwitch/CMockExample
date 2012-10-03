/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_System.h"

typedef struct _CMOCK_ShouldAbortApp_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  _Bool ReturnVal;
  int CallOrder;

} CMOCK_ShouldAbortApp_CALL_INSTANCE;

static struct mock_SystemInstance
{
  int ShouldAbortApp_IgnoreBool;
  _Bool ShouldAbortApp_FinalReturn;
  CMOCK_MEM_INDEX_TYPE ShouldAbortApp_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_System_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.ShouldAbortApp_IgnoreBool)
    Mock.ShouldAbortApp_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.ShouldAbortApp_CallInstance, cmock_line, "Function 'ShouldAbortApp' called less times than expected.");
}

void mock_System_Init(void)
{
  mock_System_Destroy();
}

void mock_System_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

_Bool ShouldAbortApp(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_ShouldAbortApp_CALL_INSTANCE* cmock_call_instance = (CMOCK_ShouldAbortApp_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.ShouldAbortApp_CallInstance);
  Mock.ShouldAbortApp_CallInstance = CMock_Guts_MemNext(Mock.ShouldAbortApp_CallInstance);
  if (Mock.ShouldAbortApp_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.ShouldAbortApp_FinalReturn;
    memcpy(&Mock.ShouldAbortApp_FinalReturn, &cmock_call_instance->ReturnVal, sizeof(_Bool));
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'ShouldAbortApp' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'ShouldAbortApp' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'ShouldAbortApp' called later than expected.");
  return cmock_call_instance->ReturnVal;
}

void ShouldAbortApp_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, _Bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ShouldAbortApp_CALL_INSTANCE));
  CMOCK_ShouldAbortApp_CALL_INSTANCE* cmock_call_instance = (CMOCK_ShouldAbortApp_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.ShouldAbortApp_CallInstance = CMock_Guts_MemChain(Mock.ShouldAbortApp_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.ShouldAbortApp_IgnoreBool = (int)1;
}

void ShouldAbortApp_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, _Bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ShouldAbortApp_CALL_INSTANCE));
  CMOCK_ShouldAbortApp_CALL_INSTANCE* cmock_call_instance = (CMOCK_ShouldAbortApp_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.ShouldAbortApp_CallInstance = CMock_Guts_MemChain(Mock.ShouldAbortApp_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(_Bool));
}

