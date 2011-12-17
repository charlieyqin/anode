/* DO NOT EDIT THIS FILE - it is machine generated */
#include "defines.h"

/* Header for class org_meshpoint_anode_bridge_BridgeNative */

#ifndef _Included_org_meshpoint_anode_bridge_BridgeNative
#define _Included_org_meshpoint_anode_bridge_BridgeNative

void ThrowForErrno(JNIEnv *jniEnv, int errno, const char *msg);

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    callAsFunction
 * Signature: (JJLjava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_callAsFunction
  (JNIEnv *, jclass, jlong, jlong, jobject, jobjectArray);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    callAsConstructor
 * Signature: (JJ[Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_callAsConstructor
  (JNIEnv *, jclass, jlong, jlong, jobjectArray);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    getProperty
 * Signature: (JJLjava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_getProperty
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    setProperty
 * Signature: (JJLjava/lang/String;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_setProperty
  (JNIEnv *, jclass, jlong, jlong, jstring, jobject);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    deleteProperty
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_deleteProperty
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    containsProperty
 * Signature: (JJLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_containsProperty
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    properties
 * Signature: (JJ)Ljava/util/Collection;
 */
JNIEXPORT jobject JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_properties
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    getIndexedProperty
 * Signature: (JJII)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_getIndexedProperty
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    setIndexedProperty
 * Signature: (JJIILjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_setIndexedProperty
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jobject);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    deleteIndexedProperty
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_deleteIndexedProperty
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    containsIndex
 * Signature: (JJI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_containsIndex
  (JNIEnv *, jclass, jlong, jlong, jint);

  /*
   * Class:     org_meshpoint_anode_bridge_BridgeNative
   * Method:    getLength
   * Signature: (JJ)I
   */
JNIEXPORT jint JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_getLength
  (JNIEnv *, jclass, jlong, jlong);
  
  /*
   * Class:     org_meshpoint_anode_bridge_BridgeNative
   * Method:    getLength
   * Signature: (JJI)V
   */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_setLength
  (JNIEnv *, jclass, jlong, jlong, jint);
  
/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    invokeJSInterface
 * Signature: (JJII[Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_invokeJSInterface
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jobjectArray);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    getJSInterface
 * Signature: (JJII)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_getJSInterface
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    setJSInterface
 * Signature: (JJIILjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_setJSInterface
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jobject);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    releaseObjectHandle
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_releaseObjectHandle
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    bindInterface
 * Signature: (JLorg/meshpoint/anode/idl/IDLInterface;IIILjava/lang/Class;)J
 */
JNIEXPORT jlong JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_bindInterface
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jint, jclass);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    bindAttribute
 * Signature: (JJIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_bindAttribute
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jstring);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    bindOperation
 * Signature: (JJIILjava/lang/String;I[I)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_bindOperation
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jstring, jint, jintArray);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    releaseInterface
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_releaseInterface
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    bindUserStub
 * Signature: (JJLjava/lang/Class;)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_bindUserStub
  (JNIEnv *, jclass, jlong, jlong, jclass);
  
/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    bindPlatformStub
 * Signature: (JJLjava/lang/Class;)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_bindPlatformStub
  (JNIEnv *, jclass, jlong, jlong, jclass);
  
/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    bindDictStub
 * Signature: (JJLjava/lang/Class;)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_bindDictStub
  (JNIEnv *, jclass, jlong, jlong, jclass);
  
/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    requestEntry
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_requestEntry
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_meshpoint_anode_bridge_BridgeNative
 * Method:    setContext
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_meshpoint_anode_bridge_BridgeNative_setContext
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
