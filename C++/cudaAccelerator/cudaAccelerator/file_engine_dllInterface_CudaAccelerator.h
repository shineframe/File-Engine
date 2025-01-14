﻿/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class file_engine_dllInterface_CudaAccelerator */

#ifndef _Included_file_engine_dllInterface_CudaAccelerator
#define _Included_file_engine_dllInterface_CudaAccelerator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    resetAllResultStatus
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_file_engine_dllInterface_CudaAccelerator_resetAllResultStatus
  (JNIEnv *, jobject);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    match
 * Signature: ([Ljava/lang/String;ZLjava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[ZILjava/util/function/BiConsumer;)V
 */
JNIEXPORT void JNICALL Java_file_engine_dllInterface_CudaAccelerator_match
  (JNIEnv *, jobject, jobjectArray, jboolean, jstring, jobjectArray, jobjectArray, jbooleanArray, jint, jobject);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    isMatchDone
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_file_engine_dllInterface_CudaAccelerator_isMatchDone
  (JNIEnv *, jobject, jstring);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    matchedNumber
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_file_engine_dllInterface_CudaAccelerator_matchedNumber
  (JNIEnv *, jobject, jstring);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    stopCollectResults
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_file_engine_dllInterface_CudaAccelerator_stopCollectResults
  (JNIEnv *, jobject);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    isCudaAvailable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_file_engine_dllInterface_CudaAccelerator_isCudaAvailable
  (JNIEnv *, jobject);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    hasCache
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_file_engine_dllInterface_CudaAccelerator_hasCache
  (JNIEnv *, jobject);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    isCacheExist
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_file_engine_dllInterface_CudaAccelerator_isCacheExist
  (JNIEnv *, jobject, jstring);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    initCache
 * Signature: (Ljava/lang/String;[Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_file_engine_dllInterface_CudaAccelerator_initCache
  (JNIEnv *, jobject, jstring, jobjectArray);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    addOneRecordToCache
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_file_engine_dllInterface_CudaAccelerator_addOneRecordToCache
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    removeOneRecordFromCache
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_file_engine_dllInterface_CudaAccelerator_removeOneRecordFromCache
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    clearCache
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_file_engine_dllInterface_CudaAccelerator_clearCache
  (JNIEnv *, jobject, jstring);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    clearAllCache
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_file_engine_dllInterface_CudaAccelerator_clearAllCache
  (JNIEnv *, jobject);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    isCacheValid
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_file_engine_dllInterface_CudaAccelerator_isCacheValid
  (JNIEnv *, jobject, jstring);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    getCudaMemUsage
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_file_engine_dllInterface_CudaAccelerator_getCudaMemUsage
  (JNIEnv *, jobject);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_file_engine_dllInterface_CudaAccelerator_initialize
  (JNIEnv *, jobject);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_file_engine_dllInterface_CudaAccelerator_release
  (JNIEnv *, jobject);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    getDevices
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_file_engine_dllInterface_CudaAccelerator_getDevices
  (JNIEnv *, jobject);

/*
 * Class:     file_engine_dllInterface_CudaAccelerator
 * Method:    setDevice
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_file_engine_dllInterface_CudaAccelerator_setDevice
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
