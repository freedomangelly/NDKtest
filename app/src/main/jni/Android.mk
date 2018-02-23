LOCAL_PATH :=${call my-dir}
include $(CLEAR_VARS)
LOCAL_MODULE:=hello-jni
LOCAL_SRC_FILES:=main.cpp
include ${BUILD_SHARED_LIBRARY}

include $(CLEAR_VARS)
LOCAL_MODULE:=hello-employee
LOCAL_SRC_FILES:=employee.cpp
include ${BUILD_SHARED_LIBRARY}

include $(CLEAR_VARS)
LOCAL_MODULE:=hello-log
LOCAL_LDLIBS := -L$(SYSROOT)/usr/lib -llog
LOCAL_SRC_FILES:=MyLog.cpp
include ${BUILD_SHARED_LIBRARY}

include $(CLEAR_VARS)
LOCAL_MODULE:=hello-jni-c++
LOCAL_LDLIBS := -L$(SYSROOT)/usr/lib -llog
LOCAL_SRC_FILES:=MyCpp.cpp
LOCAL_SHARED_LIBRARIES := \
    libandroid_runtime \
include ${BUILD_SHARED_LIBRARY}