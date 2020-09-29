/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/core/v1/resource_name.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef UDPA_CORE_V1_RESOURCE_NAME_PROTO_UPB_H_
#define UDPA_CORE_V1_RESOURCE_NAME_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct udpa_core_v1_ResourceName;
typedef struct udpa_core_v1_ResourceName udpa_core_v1_ResourceName;
extern const upb_msglayout udpa_core_v1_ResourceName_msginit;
struct udpa_core_v1_ContextParams;
extern const upb_msglayout udpa_core_v1_ContextParams_msginit;


/* udpa.core.v1.ResourceName */

UPB_INLINE udpa_core_v1_ResourceName *udpa_core_v1_ResourceName_new(upb_arena *arena) {
  return (udpa_core_v1_ResourceName *)_upb_msg_new(&udpa_core_v1_ResourceName_msginit, arena);
}
UPB_INLINE udpa_core_v1_ResourceName *udpa_core_v1_ResourceName_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  udpa_core_v1_ResourceName *ret = udpa_core_v1_ResourceName_new(arena);
  return (ret && upb_decode(buf, size, ret, &udpa_core_v1_ResourceName_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *udpa_core_v1_ResourceName_serialize(const udpa_core_v1_ResourceName *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &udpa_core_v1_ResourceName_msginit, arena, len);
}

UPB_INLINE upb_strview const* udpa_core_v1_ResourceName_id(const udpa_core_v1_ResourceName *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(20, 40), len); }
UPB_INLINE upb_strview udpa_core_v1_ResourceName_authority(const udpa_core_v1_ResourceName *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE upb_strview udpa_core_v1_ResourceName_resource_type(const udpa_core_v1_ResourceName *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview); }
UPB_INLINE bool udpa_core_v1_ResourceName_has_context(const udpa_core_v1_ResourceName *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(16, 32)); }
UPB_INLINE const struct udpa_core_v1_ContextParams* udpa_core_v1_ResourceName_context(const udpa_core_v1_ResourceName *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const struct udpa_core_v1_ContextParams*); }

UPB_INLINE upb_strview* udpa_core_v1_ResourceName_mutable_id(udpa_core_v1_ResourceName *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(20, 40), len);
}
UPB_INLINE upb_strview* udpa_core_v1_ResourceName_resize_id(udpa_core_v1_ResourceName *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(20, 40), len, UPB_TYPE_STRING, arena);
}
UPB_INLINE bool udpa_core_v1_ResourceName_add_id(udpa_core_v1_ResourceName *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(msg, UPB_SIZE(20, 40), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val,
      arena);
}
UPB_INLINE void udpa_core_v1_ResourceName_set_authority(udpa_core_v1_ResourceName *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void udpa_core_v1_ResourceName_set_resource_type(udpa_core_v1_ResourceName *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview) = value;
}
UPB_INLINE void udpa_core_v1_ResourceName_set_context(udpa_core_v1_ResourceName *msg, struct udpa_core_v1_ContextParams* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), struct udpa_core_v1_ContextParams*) = value;
}
UPB_INLINE struct udpa_core_v1_ContextParams* udpa_core_v1_ResourceName_mutable_context(udpa_core_v1_ResourceName *msg, upb_arena *arena) {
  struct udpa_core_v1_ContextParams* sub = (struct udpa_core_v1_ContextParams*)udpa_core_v1_ResourceName_context(msg);
  if (sub == NULL) {
    sub = (struct udpa_core_v1_ContextParams*)_upb_msg_new(&udpa_core_v1_ContextParams_msginit, arena);
    if (!sub) return NULL;
    udpa_core_v1_ResourceName_set_context(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* UDPA_CORE_V1_RESOURCE_NAME_PROTO_UPB_H_ */
