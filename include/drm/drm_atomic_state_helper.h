#include_next <drm/drm_atomic_state_helper.h>

#ifndef __BACKPORT_DRM_ATOMIC_STATE_HELPER_H__
#define __BACKPORT_DRM_ATOMIC_STATE_HELPER_H__

#if LINUX_VERSION_CODE >= KERNEL_VERSION(7, 3, 0)
#define __drm_atomic_helper_crtc_state_reset __drm_atomic_helper_crtc_state_init
#define __drm_atomic_helper_plane_state_reset __drm_atomic_helper_plane_state_init
#endif

#endif /* __BACKPORT_DRM_ATOMIC_STATE_HELPER_H__ */
