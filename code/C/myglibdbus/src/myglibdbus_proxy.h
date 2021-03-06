/* Generated by dbus-binding-tool; do not edit! */

#include <glib.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

#ifndef _DBUS_GLIB_ASYNC_DATA_FREE
#define _DBUS_GLIB_ASYNC_DATA_FREE
static inline void
_dbus_glib_async_data_free (gpointer stuff)
{
	g_slice_free (DBusGAsyncData, stuff);
}
#endif

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_myglibdbus
#define DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_myglibdbus

static inline gboolean
org_freedesktop_myglibdbus_work (DBusGProxy *proxy, const char * IN_msg, gint* OUT_ret, GError **error)

{
  return dbus_g_proxy_call (proxy, "work", error, G_TYPE_STRING, IN_msg, G_TYPE_INVALID, G_TYPE_INT, OUT_ret, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_myglibdbus_work_reply) (DBusGProxy *proxy, gint OUT_ret, GError *error, gpointer userdata);

static void
org_freedesktop_myglibdbus_work_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  gint OUT_ret;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INT, &OUT_ret, G_TYPE_INVALID);
  (*(org_freedesktop_myglibdbus_work_reply)data->cb) (proxy, OUT_ret, error, data->userdata);
  return;
}

static inline DBusGProxyCall*
org_freedesktop_myglibdbus_work_async (DBusGProxy *proxy, const char * IN_msg, org_freedesktop_myglibdbus_work_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "work", org_freedesktop_myglibdbus_work_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_msg, G_TYPE_INVALID);
}
static inline gboolean
org_freedesktop_myglibdbus_receive (DBusGProxy *proxy, const char * IN_msg, char ** OUT_ret, GError **error)

{
  return dbus_g_proxy_call (proxy, "receive", error, G_TYPE_STRING, IN_msg, G_TYPE_INVALID, G_TYPE_STRING, OUT_ret, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_myglibdbus_receive_reply) (DBusGProxy *proxy, char * OUT_ret, GError *error, gpointer userdata);

static void
org_freedesktop_myglibdbus_receive_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char * OUT_ret;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_STRING, &OUT_ret, G_TYPE_INVALID);
  (*(org_freedesktop_myglibdbus_receive_reply)data->cb) (proxy, OUT_ret, error, data->userdata);
  return;
}

static inline DBusGProxyCall*
org_freedesktop_myglibdbus_receive_async (DBusGProxy *proxy, const char * IN_msg, org_freedesktop_myglibdbus_receive_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "receive", org_freedesktop_myglibdbus_receive_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_msg, G_TYPE_INVALID);
}
static inline gboolean
org_freedesktop_myglibdbus_get_list (DBusGProxy *proxy, const char * IN_msg, char *** OUT_ret, GError **error)

{
  return dbus_g_proxy_call (proxy, "get_list", error, G_TYPE_STRING, IN_msg, G_TYPE_INVALID, G_TYPE_STRV, OUT_ret, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_myglibdbus_get_list_reply) (DBusGProxy *proxy, char * *OUT_ret, GError *error, gpointer userdata);

static void
org_freedesktop_myglibdbus_get_list_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char ** OUT_ret;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_STRV, &OUT_ret, G_TYPE_INVALID);
  (*(org_freedesktop_myglibdbus_get_list_reply)data->cb) (proxy, OUT_ret, error, data->userdata);
  return;
}

static inline DBusGProxyCall*
org_freedesktop_myglibdbus_get_list_async (DBusGProxy *proxy, const char * IN_msg, org_freedesktop_myglibdbus_get_list_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "get_list", org_freedesktop_myglibdbus_get_list_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_msg, G_TYPE_INVALID);
}
static inline gboolean
org_freedesktop_myglibdbus_get_array (DBusGProxy *proxy, GValueArray** OUT_ret, GError **error)

{
  return dbus_g_proxy_call (proxy, "get_array", error, G_TYPE_INVALID, dbus_g_type_get_struct ("GValueArray", G_TYPE_UINT, G_TYPE_STRING, G_TYPE_INVALID), OUT_ret, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_myglibdbus_get_array_reply) (DBusGProxy *proxy, GValueArray *OUT_ret, GError *error, gpointer userdata);

static void
org_freedesktop_myglibdbus_get_array_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  GValueArray* OUT_ret;
  dbus_g_proxy_end_call (proxy, call, &error, dbus_g_type_get_struct ("GValueArray", G_TYPE_UINT, G_TYPE_STRING, G_TYPE_INVALID), &OUT_ret, G_TYPE_INVALID);
  (*(org_freedesktop_myglibdbus_get_array_reply)data->cb) (proxy, OUT_ret, error, data->userdata);
  return;
}

static inline DBusGProxyCall*
org_freedesktop_myglibdbus_get_array_async (DBusGProxy *proxy, org_freedesktop_myglibdbus_get_array_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "get_array", org_freedesktop_myglibdbus_get_array_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static inline gboolean
org_freedesktop_myglibdbus_get_dict (DBusGProxy *proxy, GHashTable** OUT_ret, GError **error)

{
  return dbus_g_proxy_call (proxy, "get_dict", error, G_TYPE_INVALID, dbus_g_type_get_map ("GHashTable", G_TYPE_STRING, G_TYPE_STRING), OUT_ret, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_myglibdbus_get_dict_reply) (DBusGProxy *proxy, GHashTable *OUT_ret, GError *error, gpointer userdata);

static void
org_freedesktop_myglibdbus_get_dict_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  GHashTable* OUT_ret;
  dbus_g_proxy_end_call (proxy, call, &error, dbus_g_type_get_map ("GHashTable", G_TYPE_STRING, G_TYPE_STRING), &OUT_ret, G_TYPE_INVALID);
  (*(org_freedesktop_myglibdbus_get_dict_reply)data->cb) (proxy, OUT_ret, error, data->userdata);
  return;
}

static inline DBusGProxyCall*
org_freedesktop_myglibdbus_get_dict_async (DBusGProxy *proxy, org_freedesktop_myglibdbus_get_dict_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "get_dict", org_freedesktop_myglibdbus_get_dict_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
static inline gboolean
org_freedesktop_myglibdbus_exit (DBusGProxy *proxy, gint* OUT_ret, GError **error)

{
  return dbus_g_proxy_call (proxy, "exit", error, G_TYPE_INVALID, G_TYPE_INT, OUT_ret, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_myglibdbus_exit_reply) (DBusGProxy *proxy, gint OUT_ret, GError *error, gpointer userdata);

static void
org_freedesktop_myglibdbus_exit_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  gint OUT_ret;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INT, &OUT_ret, G_TYPE_INVALID);
  (*(org_freedesktop_myglibdbus_exit_reply)data->cb) (proxy, OUT_ret, error, data->userdata);
  return;
}

static inline DBusGProxyCall*
org_freedesktop_myglibdbus_exit_async (DBusGProxy *proxy, org_freedesktop_myglibdbus_exit_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "exit", org_freedesktop_myglibdbus_exit_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_myglibdbus */

G_END_DECLS
