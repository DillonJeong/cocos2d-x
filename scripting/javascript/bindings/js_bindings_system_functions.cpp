/*
* AUTOGENERATED FILE. DO NOT EDIT IT
* Generated by "generate_js_bindings.py -c system_jsb.ini" on 2012-12-17
* Script version: v0.5
*/
#include "cocos2d.h"
#include "js_bindings_config.h"
//#ifdef JSB_INCLUDE_SYSTEM

#include "LocalStorage.h"

#include "jsfriendapi.h"
#include "js_bindings_config.h"
#include "js_bindings_core.h"
#include "js_manual_conversions.h"
#include "js_bindings_system_functions.h"

USING_NS_CC;

// Arguments: char*
// Ret value: const char*
JSBool JSB_localStorageGetItem(JSContext *cx, uint32_t argc, jsval *vp) {
	JSB_PRECONDITION2( argc == 1, cx, JS_FALSE, "Invalid number of arguments" );
	jsval *argvp = JS_ARGV(cx,vp);
	JSBool ok = JS_TRUE;
	const char* arg0; 

	ok &= jsval_to_charptr( cx, *argvp++, &arg0 );
	JSB_PRECONDITION2(ok, cx, JS_FALSE, "Error processing arguments");
	const char* ret_val;

	ret_val = localStorageGetItem((char*)arg0  );

	jsval ret_jsval = charptr_to_jsval( cx, ret_val);
	JS_SET_RVAL(cx, vp, ret_jsval );

	return JS_TRUE;
}

// Arguments: char*
// Ret value: void
JSBool JSB_localStorageRemoveItem(JSContext *cx, uint32_t argc, jsval *vp) {
	JSB_PRECONDITION2( argc == 1, cx, JS_FALSE, "Invalid number of arguments" );
	jsval *argvp = JS_ARGV(cx,vp);
	JSBool ok = JS_TRUE;
	const char* arg0; 

	ok &= jsval_to_charptr( cx, *argvp++, &arg0 );
	JSB_PRECONDITION2(ok, cx, JS_FALSE, "Error processing arguments");

	localStorageRemoveItem((char*)arg0  );
	JS_SET_RVAL(cx, vp, JSVAL_VOID);
	return JS_TRUE;
}

// Arguments: char*, char*
// Ret value: void
JSBool JSB_localStorageSetItem(JSContext *cx, uint32_t argc, jsval *vp) {
	JSB_PRECONDITION2( argc == 2, cx, JS_FALSE, "Invalid number of arguments" );
	jsval *argvp = JS_ARGV(cx,vp);
	JSBool ok = JS_TRUE;
	const char* arg0; const char* arg1; 

	ok &= jsval_to_charptr( cx, *argvp++, &arg0 );
	ok &= jsval_to_charptr( cx, *argvp++, &arg1 );
	JSB_PRECONDITION2(ok, cx, JS_FALSE, "Error processing arguments");

	localStorageSetItem((char*)arg0 , (char*)arg1  );
	JS_SET_RVAL(cx, vp, JSVAL_VOID);
	return JS_TRUE;
}


//#endif // JSB_INCLUDE_SYSTEM