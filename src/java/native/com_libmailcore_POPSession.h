/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_libmailcore_POPSession */

#ifndef _Included_com_libmailcore_POPSession
#define _Included_com_libmailcore_POPSession
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_libmailcore_POPSession
 * Method:    setHostname
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_setHostname
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    hostname
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_POPSession_hostname
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    setPort
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_setPort
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    port
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_libmailcore_POPSession_port
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    setUsername
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_setUsername
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    username
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_POPSession_username
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    setPassword
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_setPassword
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    password
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_POPSession_password
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    setAuthType
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_setAuthType
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    authType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_libmailcore_POPSession_authType
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    setConnectionType
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_setConnectionType
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    connectionType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_libmailcore_POPSession_connectionType
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    setTimeout
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_setTimeout
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    timeout
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_libmailcore_POPSession_timeout
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    setCheckCertificateEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_setCheckCertificateEnabled
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    isCheckCertificateEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_libmailcore_POPSession_isCheckCertificateEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    isOperationQueueRunning
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_libmailcore_POPSession_isOperationQueueRunning
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    cancelAllOperations
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_cancelAllOperations
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    fetchMessagesOperation
 * Signature: ()Lcom/libmailcore/POPFetchMessagesOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_POPSession_fetchMessagesOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    fetchHeaderOperation
 * Signature: (I)Lcom/libmailcore/POPFetchHeaderOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_POPSession_fetchHeaderOperation
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    fetchMessageOperation
 * Signature: (I)Lcom/libmailcore/POPFetchMessageOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_POPSession_fetchMessageOperation
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    deleteMessagesOperation
 * Signature: (Lcom/libmailcore/IndexSet;)Lcom/libmailcore/POPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_POPSession_deleteMessagesOperation
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    disconnectOperation
 * Signature: ()Lcom/libmailcore/POPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_POPSession_disconnectOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    checkAccountOperation
 * Signature: ()Lcom/libmailcore/POPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_POPSession_checkAccountOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    noopOperation
 * Signature: ()Lcom/libmailcore/POPOperation;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_POPSession_noopOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    setupNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_setupNative
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    finalizeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_finalizeNative
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    setupNativeOperationQueueListener
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_setupNativeOperationQueueListener
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_POPSession
 * Method:    setupNativeConnectionLogger
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_POPSession_setupNativeConnectionLogger
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
